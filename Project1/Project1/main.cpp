#include <iostream>

using namespace std;

/*
* 7 phần:
* 1. Khởi báo.
* 2. Khởi tạo.
* 3. Tạo nút.
* 4. Thêm đầu, thêm cuối.
* 5. Thêm nhiều nút.
* 6. Xử lý theo yêu cầu.
* 7. Giải phóng nút.
*
* Danh sách liên kết đôi:
* 1. Thêm/xóa.
* 2. Thêm đầu, thêm cuối.
* 3. Thêm vào sau, thêm vào trước => Bài tập về nhà
* 4. Xóa 1 nút với mã => Bài tập về nhà.
* 5. Xuất danh sách từ trước ra sau và sau ra trước.
*
* Link List Single: Danh sách liên kết đơn.
* Link List Double: Danh sách liên kết đôi.
*/

// 1. Khởi báo.
struct Node
{
	int IData;
	Node* PtrNext;
	Node* PtrRev;
};

struct LinkedListDou
{
	Node* PtrHead;
	Node* PtrTail;
};

//2. Khởi tạo.
void linkedListDouInit(LinkedListDou&);

//3. Tạo nút.
Node* linkedListDouCreateNode(int);
Node* InsertNode(int&);

//4. Thêm đầu, thêm cuối.
void linkedListDouAddHead(LinkedListDou&, Node*); // Thêm đầu.
void linkedListDouAddTail(LinkedListDou&, Node*); // Thêm cuối.

//5. Thêm nhiều nút.
void linkedListDouInput(LinkedListDou&);
void linkedListDouOutputAfter(LinkedListDou);
void linkedListDouOutputBefore(LinkedListDou);

//6. Xử lý theo yêu cầu.
//void linkedListDouOutput(LinkedListDou);
void linkedListDouBubble(LinkedListDou);
//Thêm vào sau, thêm vào trước
void linkedListAddBefore(LinkedListDou&, Node*, int&);
void linkedListAddAfter(LinkedListDou&, Node*, int&);
void linkedListAddBeforeMust(LinkedListDou&, Node*, int&);
void linkedListAddAfterMust(LinkedListDou&, Node*, int&);
//Xóa 1 nút với mã
void linkedListDelHead(LinkedListDou&);
void linkedListDelTail(LinkedListDou&);
void linkedListDelNodeMust(LinkedListDou&, Node*);
void linkedListDelNode(LinkedListDou&, int);

//7. Giải phóng nút.
void linkedListDouFree(LinkedListDou&);

int main()
{
	int x, q;
	LinkedListDou l;
	linkedListDouInput(l);
	cout << "Danh sach sau khi nhap:" << endl;
	linkedListDouOutputAfter(l);
	//linkedListDouOutputBefore(l);
	//cout << "Nhap gia tri Node can xoa:";
	//cin >> x;

	//Xoa dau - xoa cuoi- xoa vi tri bat ky
	//linkedListDelHead(l);
	//linkedListDelTail(l);
	linkedListDelNodeMust(l,InsertNode(q));
	cout << "Danh sach sau khi xoa nhieu node bang node q: ";
	//linkedListDelAfter(l,InsertNode(q));
	//cout << "Danh sach sau khi xoa (sau): ";
	//linkedListDelNode(l,x);
	//cout << "Danh sach sau khi xoa mot node bang node q: ";

	//Sap xep Bubblesort
	//linkedListDouBubble(l);

	//Them truoc - them sau
	//linkedListAddBefore(l,InsertNode(q),x);
	//linkedListAddAfter(l, InsertNode(q), x);
	//linkedListAddBeforeMust(l,InsertNode(q), x);
	//linkedListAddAfterMust(l,InsertNode(q),x);

	//cout << "Danh sach sau khi them: ";
	linkedListDouOutputAfter(l);
	linkedListDouFree(l);
	cout << endl;
	system("pause");
	return 0;
}

void linkedListDouInit(LinkedListDou& ld)
{
	ld.PtrHead = ld.PtrTail = nullptr;
}

Node* linkedListDouCreateNode(int IData)
{
	Node* PtrNode = new Node;
	if (!PtrNode)
	{
		return nullptr;
	}
	PtrNode->IData = IData;
	PtrNode->PtrNext = nullptr;
	PtrNode->PtrRev = nullptr;
	return PtrNode;
}
Node* InsertNode(int& q)
{
	cout << "Nhap du lieu node can thuc hien:";
	cin >> q;
	Node* PNode = linkedListDouCreateNode(q);
	return PNode;
}
void linkedListDouAddHead(LinkedListDou& ld, Node* PtrNode)
{
	if (!ld.PtrHead)
	{
		ld.PtrHead = ld.PtrTail = PtrNode;
		return;
	}
	PtrNode->PtrNext = ld.PtrHead;
	ld.PtrHead->PtrRev = PtrNode;
	ld.PtrHead = PtrNode;
}

void linkedListDouAddTail(LinkedListDou& ld, Node* PtrNode)
{
	if (!ld.PtrHead)
	{
		ld.PtrHead = ld.PtrTail = PtrNode;
		return;
	}
	ld.PtrTail->PtrNext = PtrNode;
	PtrNode->PtrRev = ld.PtrTail;
	ld.PtrTail = PtrNode;
}

void linkedListDouInput(LinkedListDou& ld)
{
	linkedListDouInit(ld);

	int length;
	cout << "Nhap so luong nut: ";
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		int IData;
		cout << "Nhap vao nut thu " << i + 1 << ": ";
		cin >> IData;

		//linkedListDouAddHead(ld, linkedListDouCreateNode(IData));
		linkedListDouAddTail(ld, linkedListDouCreateNode(IData));
	}
}

void linkedListDouOutputAfter(LinkedListDou ld)
{
	for (Node* i = ld.PtrHead; i != nullptr; i = i->PtrNext)
	{
		cout << i->IData << " ";
	}
	cout << endl;
}

void linkedListDouOutputBefore(LinkedListDou ld)
{
	for (Node* i = ld.PtrTail; i != nullptr; i = i->PtrRev)
	{
		cout << i->IData << " ";
	}
	cout << endl;
}
void linkedListDouBubble(LinkedListDou ld)
{
	for (Node* i = ld.PtrHead; i != ld.PtrTail; i = i->PtrNext) // i = i->PtrNext <=> i++
	{
		for (Node* j = ld.PtrTail; j != i; j = j->PtrRev) // j = j->PtrPrev <=> j--
		{
			/*
			* j <=> j
			* j->PtrRev <=> j - 1.
			* j->IData <=> a[j].
			* j->PtrRev->IData <=> a[j - 1]
			*/
			if (j->IData < j->PtrRev->IData)
			{
				swap(j->IData, j->PtrRev->IData);
			}
		}
	}
}

//THEM
//1.Thêm vào trước 1 node
void linkedListAddBefore(LinkedListDou& l, Node* q, int& x)
{
	cout << "Nhap du lieu node them(truoc):";
	cin >> x;
	if ((l.PtrHead->IData == q->IData) || (!l.PtrHead->PtrNext))
	{
		Node* pTemp = linkedListDouCreateNode(x);
		linkedListDouAddHead(l, pTemp);
		return;
	}
	Node* p = l.PtrHead->PtrNext;
	while (p)
	{
		if (p->IData == q->IData)
		{
			Node* PtrNode = linkedListDouCreateNode(x);
			PtrNode->PtrNext = p;
			PtrNode->PtrRev = p->PtrRev;
			p->PtrRev->PtrNext = PtrNode;
			p->PtrRev = PtrNode;
		}
			p = p->PtrNext;
	}
	
}
//2.Thêm vào sau 1 node
void linkedListAddAfter(LinkedListDou& l, Node* q, int& x)
{
	cout << "Nhap du lieu node them(sau):";
	cin >> x;
	Node* p = l.PtrHead;
	while (p != l.PtrTail)
	{
		if (p->IData == q->IData)
		{
			Node* PtrNode = linkedListDouCreateNode(x);
			PtrNode->PtrRev = p;
			PtrNode->PtrNext = p->PtrNext;
			p->PtrNext->PtrRev = PtrNode;
			p->PtrNext = PtrNode;
		}
		p = p->PtrNext;
	}
	
	if (l.PtrTail->IData == q->IData)
	{
		Node* Temp = linkedListDouCreateNode(x);
		linkedListDouAddTail(l, Temp);
	}
}
//3.Them nhieu vao truoc 1 node 
void linkedListAddBeforeMust(LinkedListDou& l, Node* q, int& x)
{
	cout << "Nhap du lieu node them(truoc):";
	cin >> x;
	Node* p = l.PtrHead->PtrNext;
	while (p)
	{
		if (p->IData == q->IData)
		{
			Node* PtrNode = linkedListDouCreateNode(x);
			PtrNode->PtrNext = p;
			PtrNode->PtrRev = p->PtrRev;
			p->PtrRev->PtrNext = PtrNode;
			p->PtrRev = PtrNode;
		}
		p = p->PtrNext;
	}
	if (l.PtrHead->IData == q->IData)
	{
		Node* PtrNode = linkedListDouCreateNode(x);
		linkedListDouAddHead(l, PtrNode);
	}
}
//4.Them nhieu vào sau 1 node
void linkedListAddAfterMust(LinkedListDou& l, Node* q, int& x)
{
	cout << "Nhap du lieu node them(sau):";
	cin >> x;
	Node* p = l.PtrHead;
	while (p != l.PtrTail)
	{
		if (p->IData == q->IData)
		{
			Node* PtrNode = linkedListDouCreateNode(x);
			PtrNode->PtrRev = p;
			PtrNode->PtrNext = p->PtrNext;
			p->PtrNext->PtrRev = PtrNode;
			p->PtrNext = PtrNode;
		}
		p = p->PtrNext;
	}
	if (l.PtrTail->IData == q->IData)
	{
		Node* PtrNode = linkedListDouCreateNode(x);
		linkedListDouAddTail(l, PtrNode);
	}
}
//XOA NODE
//1.Xoa dau
void linkedListDelHead(LinkedListDou& l)
{
	if (!l.PtrHead)
	{
		return;
	}
	l.PtrHead = l.PtrHead->PtrNext;
	l.PtrHead->PtrRev = nullptr;
}
//2.Xoa cuoi
void linkedListDelTail(LinkedListDou& l)
{
	if (!l.PtrHead)
	{
		return;
	}
	l.PtrTail = l.PtrTail->PtrRev;
	l.PtrTail->PtrNext = nullptr;
}
//3.Xoa 1 node == node q
//void linkedListDelNode(LinkedListDou& l, Node* q)
//{
//	if (l.PtrHead->IData == q->IData)
//	{
//		linkedListDelHead(l);
//		return;
//	}
//	if (l.PtrTail->IData == q->IData)
//	{
//		linkedListDelTail(l);
//		return;
//	}
//	Node* p = l.PtrHead;
//	while (p->PtrNext != q)
//	{
//		p = p->PtrNext;
//	}
//	Node* Temp = p->PtrNext;
//	p->PtrNext = Temp->PtrNext;
//	Temp->PtrNext->PtrRev = p;
//	delete Temp;
//}
void linkedListDelNode(LinkedListDou& l, int x)
{
	//do
	//{
		if (l.PtrHead->IData == x)
		{
			linkedListDelHead(l);
			return;
		}
		if (l.PtrTail->IData == x)
		{
			linkedListDelTail(l);
			return;
		}
	//} while ((l.PtrHead->IData == x) || (l.PtrTail->IData == x));
	Node* p = l.PtrHead->PtrNext;
	while (p->IData != x)
	{
		p = p->PtrNext;
	}
	Node* Temp = p;
	p = p->PtrRev;
	p->PtrNext = Temp->PtrNext;
	Temp->PtrNext->PtrRev = p;
	delete Temp;
	if (l.PtrHead->IData == x)
		{
			linkedListDelHead(l);
			return;
		}
		if (l.PtrTail->IData == x)
		{
			linkedListDelTail(l);
			return;
		}
}
//4.Xoa nhieu node == node q;
void linkedListDelNodeMust(LinkedListDou& l, Node* q)
{
	Node* p = l.PtrHead->PtrNext;
	while (p != l.PtrTail)
	{
		if (p->IData == q->IData)
		{
			Node* Temp1 = p->PtrRev;
			Node* Temp2 = p->PtrNext;
			Temp1->PtrNext = Temp2;
			Temp2->PtrRev = Temp1;
			delete p;
			p = Temp1;
		}
		p = p->PtrNext;
	}
	if (l.PtrHead->IData == q->IData)
	{
		linkedListDelHead(l);
	}
	if (l.PtrTail->IData == q->IData)
	{
		linkedListDelTail(l);
	}
}
////4.Xoa sau 1 node
//void linkedListDelAfter(LinkedListDou& l, Node* q)
//{
//	Node* p = l.PtrHead;
//	while (p)
//	{
//		if (p->IData == q->IData)
//		{
//			Node* Temp = p->PtrNext;
//		}
//		p = p->PtrNext;
//	}
//}
void linkedListDouFree(LinkedListDou& ld)
{
	Node* PtrNode;
	while (ld.PtrHead)
	{
		PtrNode = ld.PtrHead;
		ld.PtrHead = ld.PtrHead->PtrNext;
		delete PtrNode;
	}
}