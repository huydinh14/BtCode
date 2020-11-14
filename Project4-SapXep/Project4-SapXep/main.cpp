#include <iostream>

using namespace std;

void InputArr(int*, int);
void OutputArr(int*, int);

//Bài 257: Sắp xếp lẻ tăng dần nhưng giá trị khác giữ nguyên vị trí
void SortOldAsc(int*, int);
//Bài 258: Sắp xếp số nguyên tố tăng dần nhưng giá trị khác giữ nguyên vị trí
bool bCheckPrime(int);
void SortPrimeASC(int*, int);
//Bài 259: Sắp xếp số hoàn thiện giảm dần nhưng giá trị khác giữ nguyên vị trí
void SortFinishDESC(int*, int);
bool checkFinish(int);
//Bài 260: Cho 2 mảng a, b.Hãy cho biết mảng b có phải là hoán vị của mảng a không
void CompareAandB(int*, int*, int iN, int iM);
//Bài 261: Sắp xếp số dương tăng dần, các số âm giữ nguyên vị trí
//Bài 262 : Sắp xếp chẵn, lẻ tăng dần nhưng vị trí tương đối giữa các số không thay đổi
void SortASCOldEven(int*, int);
//Bài 263: Sắp xếp số dương tăng dần, âm giảm dần.Vị trí tương đối không thay đổi
void SortAscDescEvenOld(int*, int);
//Bài 264: Trộn 2 mảng đã tăng thành 1 mảng được sắp xếp tăng
void MixtwoArrayASC(int*, int*, int*, int iN,int iM, int iK);
void QuickSort(int* A, int left, int right);
void MixtwoArrayDESC(int* A, int* B, int* C, int iN, int iM, int iK);

int main()
{
	int iN = 5;
	int iM = 5;
	int iK = iN + iM;
	int* A = new int[iN];
	int* B = new int[iM];
	int* C = new int[iK];
	InputArr(A, iN);
	cout << endl;
	InputArr(B, iM);
	cout << "Mang sau khi nhap duoc la:";
	OutputArr(A, iN);
	//cout << endl << "Sap xep le tang dan nhung gia tri khac giu nguyen vi tri :";
	//SortOldAsc(A, iN);
	//cout << endl << "Sap xep so nguyen to tang dan nhung gia tri khac giu nguyen vi tri :";
	//SortPrimeASC(A, iN);
	//cout << endl << "Sap xep so hoan hao giam dan nhung gia tri khac giu nguyen vi tri :";
	//SortFinishDESC(A, iN);
	//cout << endl << "Mang B co phai la hoan vi cua mang A khong? ";
	//CompareAandB(A, B, iN, iM);
	//cout << endl << "Sap xep so chan le tang dan nhung vi tri tuong doi giua cac so khong thay doi :";
	//SortASCOldEven(A, iN);
	//cout << endl << "Sap xep so duong tang dan am giam dan nhung vi tri tuong doi giua cac so khong thay doi :";
	//SortAscDescEvenOld(A, iN);
	//cout << endl << "Tron 2 mang thanh 1 va dc sap xep!\n";
	//MixtwoArrayASC(A, B, C, iN, iM, iK);
	//OutputArr(C, iK);
	//cout << endl;
	MixtwoArrayDESC(A, B, C, iN, iM, iK);
	OutputArr(C, iK);
	OutputArr(A, iN);

	delete[] A;
	delete[] B;
	delete[] C;
	cout << endl;
	system("pause");
	return 0;
}

void InputArr(int* A, int iN)
{
	for (int i = 0; i < iN; i++)
	{
		cout << "A[" << i << "]= ";
		cin >> A[i];
	}
}

void OutputArr(int* A, int iN)
{
	for (int i = 0; i < iN; i++)
	{
		cout << A[i] << " ";
	}
}

void SortOldAsc(int* A, int iN)
{
	bool bcheck = false;
	for (int i = 0; i < iN - 1; i++)
	{
		if (A[i] % 2)
		{
			bcheck = false;
			for (int j = iN - 1; j > i; j--)
			{
				if (A[j] % 2)
				{
					int iTemp = j - 1 ;
					int dem = 0;
					while (dem != 1)
					{
						if (A[iTemp] % 2)
						{
							dem = 1;
							break;
						}
						iTemp--;
					}
					if (A[j] < A[iTemp])
					{
						swap(A[j], A[iTemp]);
						bcheck = true;
					}
				}
				if (!bcheck)
				{
					break;
				}
			}
		}
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
void SortPrimeASC(int* A, int iN)
{
	bool bcheck = false;
	for (int i = 0; i < iN - 1; i++)
	{
		//if (bCheckPrime(A[i]))
		//{
		bcheck = false;
		for (int j = iN - 1; j > i; j--)
		{
			cout << "j = " << j << endl;
			if (bCheckPrime(A[j]))
			{
				int iTemp = j - 1;
				bool BCheck = false;
				while (!BCheck)
				{
					if (bCheckPrime(A[iTemp]))
					{
						BCheck = true;
						break;
					}
					iTemp--;
				}
				if (A[j] < A[iTemp])
				{
					swap(A[j], A[iTemp]);
					j = iTemp;
					// 2 3 5 6 7
					// 
					bcheck = true;
				}
			}
			if (!bcheck)
			{
				break;
			}
		}
		//}
	}
}
bool checkFinish(int x)
{
	int iSum = 0;
	for (int i = 1; i < x; i++)
	{
		if (!(x % i))
		{
			iSum += i;
		}
	}
	if (iSum == x)
	{
		return true;
	}
	return false;
}
void SortFinishDESC(int* A, int iN)
{
	for (int i = 0; i < iN - 1; i++)
	{
		if (checkFinish(A[i]))
		{
			for (int j = i + 1; j < iN; j++)
			{
				if (checkFinish(A[j]))
				{
					if (A[i] < A[j])
					{
						swap(A[i], A[j]);
					}
				}
			}
		}
	}
}
void InterchangeSort(int* A, int iN)
{
	for (int i = 0; i < iN - 1; i++)
	{
		for (int j = i + 1; j < iN; j++)
		{
			if (A[i] > A[j])
			{
				swap(A[i], A[j]);
			}
		}
			
	}
}
void CompareAandB(int* A, int* B, int iN, int iM)
{
	if (iN != iM)
	{
		cout << "No!";
		return;
	}
	InterchangeSort(A, iN);
	InterchangeSort(B, iM);
	for (int i = 0; i < iN; i++)
	{
		if (A[i] != B[i])
		{
			cout << "No!";
			return;
		}
	}
	cout << "Yes" << endl;
	return;
}
void SortASCOldEven(int* A, int iN)
{
	for (int i = 0; i < iN - 1; i++)
	{
		for (int j = i + 1; j < iN; j++)
		{
			if (!(A[i] % 2) && !(A[j] % 2) || (A[i] % 2) && (A[j] % 2))
			{
				if (A[i] > A[j])
				{
					swap(A[i], A[j]);
				}
			}
		}

	}
}
void SortAscDescEvenOld(int* A, int iN)
{
	{
		for (int i = 0; i < iN - 1; i++)
		{
			for (int j = i + 1; j < iN; j++)
			{
				if ((A[i] > 0) && (A[j] > 0))
				{
					if (A[i] > A[j])
					{
						swap(A[i], A[j]);
					}
				}
				 else if ((A[i] < 0) && (A[j] < 0))
				{
					if (A[i] < A[j])
					{
						swap(A[i], A[j]);
					}
				}
			}
		}
	}
}
void QuickSort(int* A, int left, int right)
{
	int i, j, x;
	if (left >= right)
		return;
	x = A[(left + right) / 2];
	i = left; j = right;
	do
	{
		while (A[i] < x) i++;
		while (A[j] > x) j--;
		if (i <= j)
		{
			swap(A[i], A[j]);
			i++;
			j--;
		}
	} while (i < j);
	if (left < j)
		QuickSort(A, left, j);
	if (i < right)
		QuickSort(A, i, right);
}
void MixtwoArrayASC(int* A, int* B, int* C, int iN, int iM, int iK)
{
	QuickSort(A, 0, iN - 1);
	QuickSort(B, 0, iM - 1);
	
	int indexA = 0, indexB = 0;
	for (int i = 0; i < iK; i++)
	{
		if (indexA < iN && indexB < iM)
		{
			if (A[indexA] < B[indexB])
			{
				C[i] = A[indexA++];
			}
			else
			{
				C[i] = B[indexB++];
			}
		}
		else if (indexA == iN)
		{
			C[i] = B[indexB++];
		}
		else
		{
			C[i] = A[indexA++];
		}
	}
}
void MixtwoArrayDESC(int* A, int* B, int* C, int iN, int iM, int iK)
{
	QuickSort(A, 0, iN - 1);
	QuickSort(B, 0, iM - 1);

	int indexA = iN - 1, indexB = iM - 1;
	for (int i = 0; i < iK; i++)
	{
		if (indexA >= 0 && indexB >= 0)
		{
			if (A[indexA] > B[indexB])
			{
				C[i] = A[indexA--];
			}
			else
			{
				C[i] = B[indexB--];
			}
		}
		else if (indexA < 0)
		{
			C[i] = B[indexB--];
		}
		else
		{
			C[i] = A[indexA--];
		}
	}
}