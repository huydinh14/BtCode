//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//
//struct TNode
//{
//	int data;
//	TNode* pLeft;
//	TNode* pRight;
//};
//typedef struct TNode* TREE;
//
////Khoi tao cay
//void KhoiTaoCay(TREE& T)
//{
//	T = nullptr;// Cay rong
//}
//// Them phan tu x vao cay
//void ThemVaoCay(TREE& T, int x)
//{
//	if (T == nullptr)
//	{
//		TNode* p = new TNode;
//		p->data = x;
//		p->pLeft = nullptr;
//		p->pRight = nullptr;
//		if (p)
//		{
//			T = p;
//		}
//	}
//	else
//	{
//		if (T->data < x)
//		{
//			ThemVaoCay(T->pRight, x);
//		}
//		else if (T->data > x)
//		{
//			ThemVaoCay(T->pLeft, x);
//		}
//	}
//}
//
//void Duyet_NLR(TREE T)
//{
//	if (T != nullptr)
//	{
//		printf_s("%d ", T->data);//xuat du lieu trong node
//		Duyet_NLR(T->pLeft);
//		Duyet_NLR(T->pRight);
//	}
//}
//
//void Menu(TREE& T)
//{
//	int luachon;
//	do {
//		printf_s("---------------MENU-------------");
//		printf_s("\n1.Nhap du lieu:");
//		printf_s("\n2.Xuat du lieu:");
//		printf_s("\n0.Thoat.\n");
//		printf("Nhap so can thuc hien:\n");
//		scanf_s("%d", &luachon);
//		system("cls");
//		switch (luachon)
//		{
//		case 0: {
//			break;
//		}
//		case 1: {
//			int x;
//			printf("Nhap vao so nguyen x:");
//			scanf_s("%d", &x);
//			ThemVaoCay(T, x);
//			break;
//		}
//		case 2: {
//			printf_s("Xuat duyet cay nhi phan:");
//			Duyet_NLR(T);
//			cout << endl;
//			break;
//		}
//		}
//	} while (luachon != 0);
//}
//int main()
//{
//	TREE T;
//	KhoiTaoCay(T);
//	Menu(T);
//	system("pause");
//	return 0;
//}