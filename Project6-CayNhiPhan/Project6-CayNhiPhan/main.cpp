//#include <iostream>
//
//using namespace std;
//struct SinhVien
//{
//	char ten[30];
//	char mssv[15];
//	float diemtb;
//};
//struct Node
//{
//	SinhVien Data;
//	Node* Pleft;
//	Node* Pright;
//};
//void initTree(Node*& t);
//Node* createNode(SinhVien iData);
//void InputInfoSV(SinhVien& sv);
//void InputListSV(Node*& t);
//void OutPutListSV(Node* t);
//bool AddNode(Node*& t, SinhVien& sv);
//void format();
//void DesigtFormat(SinhVien sv);
//void XoaNode(Node*& t, char ma[]);
//void TimNodeTheMang(Node*& a, Node*& b);
//void AndNodefromOut(Node*& t, SinhVien& Sv);
//void freeTree(Node*& t);
//int main()
//{
//	Node* t;
//	SinhVien Sv;
//	initTree(t);
//	InputListSV(t);
//	cout << "Danh sach sau khi nhap " << endl;
//	format();
//	OutPutListSV(t);
//	char ma[10];
//	cout << endl <<"Nhap mssv can xoa: ";
//	fflush(stdin);
//	gets_s(ma);
//	cout << "Danh sach sau khi xoa 1 node:" << endl;
//	XoaNode(t, ma);
//	OutPutListSV(t);
//	AndNodefromOut(t,Sv);
//	OutPutListSV(t);
//	freeTree(t);
//	cout << endl;
//	system("pause");
//	return 0;
//}
//void initTree(Node*& t)
//{
//	t = nullptr;
//}
//Node* createNode(SinhVien iData)
//{
//	Node* p = new Node;
//	if (!p)
//		return nullptr;
//	p->Data = iData;
//	p->Pleft = nullptr;
//	p->Pright = nullptr;
//	return p;
//}
//bool AddNode(Node*& t, SinhVien& sv)
//{
//	if (!t)
//	{
//		Node* pnode = createNode(sv);
//		if (pnode)
//			t = pnode;
//	}
//	else
//	{
//		if (!(_stricmp(sv.mssv, t->Data.mssv)))
//		{
//			return false;
//		}
//		if (_stricmp(sv.mssv, t->Data.mssv) < 0)
//		{
//			AddNode(t->Pleft, sv);
//		}
//		if (_stricmp(sv.mssv, t->Data.mssv) > 0)
//		{
//			AddNode(t->Pright, sv);
//		}
//	}
//	return true;
//}
//void InputInfoSV(SinhVien& sv)
//{
//	cout << "Nhap mssv: ";
//	fflush(stdin);
//	gets_s(sv.mssv);
//	cout << "Nhap ten: ";
//	fflush(stdin);
//	gets_s(sv.ten);
//	cout << "Nhap dtb: ";
//	cin >> sv.diemtb;
//}
//void InputListSV(Node*& t)
//{
//	int x;
//	cout << "Nhap so luong sv: ";
//	cin >> x;
//	for (int i = 0; i < x; i++)
//	{
//		SinhVien SV;
//		cout << "Nhap vao sinh vien thu " << i + 1 << endl;
//		InputInfoSV(SV);
//		AddNode(t, SV);
//	}
//}
//void OutPutListSV(Node* t)
//{
//	if (t)
//	{
//		OutPutListSV(t->Pleft);
//		DesigtFormat(t->Data);
//		OutPutListSV(t->Pright);
//	}
//}
//void format()
//{
//	printf_s("\n%10s%20s%10s", "MASV", "TENSV", "DTB\n");
//}
//void DesigtFormat(SinhVien sv)
//{
//	printf_s("\n%10s%20s%10.2f",sv.mssv,sv.ten,sv.diemtb);
//}
//void freeTree(Node*& t)
//{
//	if(t)
//	{
//		freeTree(t->Pleft);
//		freeTree(t->Pright);
//		delete t;
//		t = nullptr;
//	}
//}
//void TimNodeTheMang(Node*& a, Node*& b)
//{
//	if (b->Pright)
//		TimNodeTheMang(a, b->Pright);
//	else
//	{
//		a->Data = b->Data;
//		a = b;
//		b = b->Pleft;
//	}
//}
//void XoaNode(Node*& t, char ma[])
//{
//		if (!t)
//			return;
//		if (_stricmp(t->Data.mssv, ma) > 0)
//		{
//			XoaNode(t->Pleft, ma);
//		}
//		else if (_stricmp(t->Data.mssv, ma) < 0)
//		{
//			XoaNode(t->Pright, ma);
//		}
//		else
//		{
//			Node* temp = t;
//			if (t->Pleft == nullptr)
//				t = t->Pright;
//			else if (t->Pright == nullptr)
//				t = t->Pleft;
//			else
//			{
//				TimNodeTheMang(temp, t->Pleft);
//			}
//		}
//}
//void AndNodefromOut(Node*& t,SinhVien& Sv)
//{
//	Node* p = createNode(Sv);
//	cout << endl << "Nhap thong tin sv can them! " << endl;
//	InputInfoSV(Sv);
//	if (AddNode(t, Sv))
//	{
//		cout << endl << "Add suscess";
//	}
//	else
//		cout << "Add Fail";
//}

#include <iostream>

using namespace std;
struct SinhVien
{
	char mssv[10];
	char tenSV[20];
	float diemtb;
};
struct Node
{
	SinhVien Data;
	Node* Pleft;
	Node* Pright;
};
void initTree(Node*& t)
{
	t = nullptr;
}
Node* createNode(SinhVien iData)
{
	Node* p = new Node;
	if (!p)
		return 0;
	p->Data = iData;
	p->Pleft = p->Pright = nullptr;
	return p;
}
void InputinforSV(SinhVien sv)
{
	cout << "Nhap mssv: ";
	fflush(stdin);
	gets_s(sv.mssv);

	cout << "Nhap ten sv: ";
	fflush(stdin);
	gets_s(sv.tenSV);

	cout << "Nhap stb sinh vien: ";
	cin >> sv.diemtb;
}
void 
int main()
{

	cout << endl;
	system("pause");
	return 0;
}