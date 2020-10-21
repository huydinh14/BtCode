#include <iostream>

using namespace std;
void InputArray(int*, int);
void OutputArray(int*, int);
//176
void ListedNegative(int*, int);
//177
void ListedXY(int*, int, int, int);
//178
void ListedEven(int*, int, int, int);
//179
void ListedNumberBigAbsAfter(int*, int);
//180
void ListedNumberSmallAbsAfter_And_Opposite(int*, int);
//181
void ListedEvenNextEven(int*, int);
//182
void ListedNextToOppositeSign(int*, int);
//183
int SearchValueMax(int*, int);
void ListedIndexValueMax(int*, int);
//184
bool bCheckPrime(int);
void ListedIndexPrime(int*, int);
int main()
{
	int n = 5;
	int x = 3;
	int y = 5;
	int *Array = new int[n];
	InputArray(Array, n);
	cout << "Danh sach sau khi nhap la:";
	OutputArray(Array, n);
	/*cout << endl << "176.Danh sach cac so am trong mang:";
	ListedNegative(Array, n);
	cout << "\n177.Danh sach cac gia tri thuoc doan " << "[" << x << ";" << y << "]: ";
	ListedXY(Array, n, x, y);*/
	//cout << "\n178.Danh sach cac gia tri chan thuoc doan " << "[" << x << ";" << y << "]: ";
	//ListedEven(Array, n, x, y);
	//cout << "\n179.Danh sach cac gia tri lon hon tri tuyet doi cua cac gia tri dung sau no: ";
	//ListedNumberBigAbsAfter(Array, n);
	//cout << "\n180.Danh sach cac gia tri nho hon tri tuyet doi cua cac gia tri dung sau no \nva lon hon tri tuyet doi cua cac gia tri dung truoc no: ";
	//ListedNumberSmallAbsAfter_And_Opposite(Array, n);
	cout << "\n181.Danh sach cac gia tri chan ma ke ben no cung la chan: ";
	ListedEvenNextEven(Array, n);
	cout << "\n182.Danh sach cac gia tri co lan can tri dau: ";
	ListedNextToOppositeSign(Array, n);
	cout << "\n183.Vi tri ma gia tri tai do la GTLN: ";
	ListedIndexValueMax(Array, n);
	cout << "\n184.Vi tri ma gia tri tai do la So nguyen to: ";
	ListedIndexPrime(Array, n);
	cout << endl;
	system("pause");
	return 0;
}
void InputArray(int* A, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]=";
		cin >> A[i];
	}
}
void OutputArray(int* A, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " " << A[i];
	}
}
void ListedNegative(int* A, int n)
{
	int iTemp = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] < 0)
		{
			iTemp = 1;
			cout << A[i] << " ";
		}
	}
	if (!iTemp)
	{
		cout << " khong co gia tri am!!!";
	}
}
void ListedXY(int* A, int n, int x, int y)
{
	int iTemp = 0;
	for (int i = 0; i < n; i++)
	{
		if ((A[i] >= x) && (A[i] <= y))
		{
			iTemp = 1;
			cout << A[i] << " ";
		}
	}
	if (!iTemp)
	{
		cout << "Khong co gia tri nao thuoc doan [" << x << ";" << y << "]";
	}
}
void ListedEven(int* A, int n, int x, int y)
{
	int iTemp = 0;
	for (int i = 0; i < n; i++)
	{
		if (!(A[i] % 2))
		{
			if ((A[i] >= x) && (A[i] <= y))
			{
				iTemp = 1;
				cout << A[i] << " ";
			}
		}
	}
	if (!iTemp)
	{
		cout << "Khong co gia tri nao thuoc doan [" << x << ";" << y << "]";
	}
}
void ListedNumberBigAbsAfter(int* A, int n)
{
	int iTemp = 0;
	for (int i = 0; i < (n - 1); i++)
	{
		if ((A[i] > abs(A[i + 1])))
		{
			iTemp = 1;
			cout << A[i] << " ";
		}
	}
	if (!iTemp)
	{
		cout << "Khong co gia tri nao !!!";
	}
}
void ListedNumberSmallAbsAfter_And_Opposite(int* A, int n)
{
	int iTemp = 0;
	for (int i = 0; i < (n - 1); i++)
	{
		if ((A[i] < abs(A[i + 1])) && (A[i] > abs(A[i - 1])))
		{
			iTemp = 1;
			cout << A[i] << " ";
		}
	}
	if (!iTemp)
	{
		cout << "Khong co gia tri nao !!!";
	}
}
void ListedEvenNextEven(int* A, int n)
{
	int iTemp = 0;
	for (int i = 0; i < n; i++)
	{
		if ((!(A[i] % 2)) && ((!(A[i + 1] % 2) > 0) || (!(A[i - 1] % 2) > 0)))
		{
			iTemp = 1;
			cout << A[i] << " ";
		}
	}
	if (!iTemp)
	{
		cout << "Khong co gia tri nao !!!";
	}
}
void ListedNextToOppositeSign(int* A, int n)
{
	int iTemp = 0;
	for (int i = 0; i < n; i++)
	{
		if (((A[i] * A[i + 1]) < 0) || ((A[i] * A[i - 1]) < 0))
		{
			iTemp = 1;
			cout << A[i] << " ";
		}
	}
	if (!iTemp)
	{
		cout << "Khong co gia tri nao !!!";
	}
}
int SearchValueMax(int* A, int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
		}
	}
	return max;
}
void ListedIndexValueMax(int* A, int n)
{
	int iTemp = 0;
	int Max = SearchValueMax(A, n);
	for (int i = 0; i < n; i++)
	{
		if (A[i] == Max)
		{
			iTemp = 1;
			cout << i << " ";
		}
	}
	if (!iTemp)
	{
		cout << "Khong co gia tri nao !!!";
	}
}
bool bCheckPrime(int x)
{
	if (x < 2)
	{
		return false;
	}
	if (!(x % 2))
	{
		return false;
	}
	for (int i = 3; i < sqrt(x); i = i + 2)
	{
		if (!(x % i))
		{
			return false;
		}
	}
	return true;
}
void ListedIndexPrime(int* A, int n)
{
	bool check;
	int iTemp = 0;
	for (int i = 0; i < n; i++)
	{
		check = bCheckPrime(A[i]);
		if (check)
		{
			iTemp = 1;
			cout << i << " ";
		}
	}
	if (!iTemp)
	{
		cout << "Khong co gia tri nao !!!";
	}
}