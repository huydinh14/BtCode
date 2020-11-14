#include <iostream>
#include <ctime>

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
//185
int checksochinhphuong(int);
void ListedSoChinhPhuong(int*, int);
//186
int TimAmDau(int*, int);
void ListedGtAmDau(int*, int);
//187
int TimDuongDauTien(int*, int);
int TimDuongMin(int*, int);
void ListedIndexGtDuong(int*, int);
//188
int timMaxChan(int*, int);
void listedIndexMaxChan(int*, int);
//189
bool TimChuSoDauLe(int);
void ListedIndexLeDauTien(int*, int);
//190
bool TimChuSoLe(int);
void ListedIndexLe(int*, int);
//191
void ListedCucDai(int*, int);
//192
bool TimChuSoDauChan(int);
void ListedIndexChanDauTien(int*, int);
//193
int checForm3K(int);
void ListedIndexForm3K(int*, int);
//257 Sắp xếp lẻ tăng dần nhưng giá trị khác giữ nguyên vị trí
void SortOldASC(int*, int);


int main()
{
	int n = 10;
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
	/*cout << "\n181.Danh sach cac gia tri chan ma ke ben no cung la chan: ";
	ListedEvenNextEven(Array, n);
	cout << "\n182.Danh sach cac gia tri co lan can tri dau: ";
	ListedNextToOppositeSign(Array, n);
	cout << "\n183.Vi tri ma gia tri tai do la GTLN: ";
	ListedIndexValueMax(Array, n);
	cout << "\n184.Vi tri ma gia tri tai do la So nguyen to: ";
	ListedIndexPrime(Array, n);
	cout << "\n185.Vi tri ma gia tri tai do la So chinh phuong: ";
	ListedSoChinhPhuong(Array, n);*/
	/*cout << "\n186.Vi tri ma gia tri tai do bang gia tri am dau: ";
	ListedGtAmDau(Array, n);
	cout << "\n187.Vi tri ma gia tri tai do bang gia tri duong nho nhat: ";
	ListedIndexGtDuong(Array, n);
	cout << "\n188.Vi tri ma gia tri tai do bang gia tri chan lon nhat: ";
	listedIndexMaxChan(Array, n);*/
	/*cout << "\n189.Vi tri ma gia tri tai do co so dau tien la so le: ";
	ListedIndexLeDauTien(Array, n);
	cout << "\n190.Vi tri ma gia tri tai do co tat ca la so le: ";
	ListedIndexLe(Array, n);*/
	/*cout << "\n191.Vi tri ma gia tri tai do la cuc dai: ";
	ListedCucDai(Array, n);*/
	cout << "\n192.Vi tri ma gia tri tai do co so dau tien la so chan: ";
	ListedIndexChanDauTien(Array, n);
	cout << endl;
	system("pause");
	return 0;
}

void InputArray(int* A, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 100;
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
		if ((!(A[i] % 2)) && (!(A[i + 1] % 2) > 0) || (!(A[i - 1] % 2) > 0))
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

int checksochinhphuong(int x)
{
	return sqrt(x) == (int)sqrt(x);
}

void ListedSoChinhPhuong(int* A , int n)
{
	int iTemp = 0;
	for (int i = 0; i < n; i++)
	{
		if (checksochinhphuong(A[i]) == 1)
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

int TimAmDau(int* A, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] < 0)
		{
			return A[i];
		}
	}
	return -1;
}

void ListedGtAmDau(int* A, int n)
{
	int iTemp = 0;
	int GtAm = TimAmDau(A,n);
	for (int i = 0; i < n; i++)
	{
		if (A[i] == GtAm)
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

int TimDuongDauTien(int* A, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] > 0)
		{
			return A[i];
		}
	}
	return -1;
}

int TimDuongMin(int* A, int n)
{
	int duongMin = TimDuongDauTien(A, n);
	for (int i = 0; i < n; i++)
	{
		if (A[i] > 0 && A[i] < duongMin)
		{
			duongMin = A[i];
		}
	}
	return duongMin;
}

void ListedIndexGtDuong(int* A, int n)
{
	int iTemp = 0;
	int Duongmin = TimDuongMin(A,n);
	for (int i = 0; i < n; i++)
	{
		if (A[i] == Duongmin)
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

int timMaxChanDauTien(int* A, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] > 0 && (!(A[i] % 2)))
		{
			return A[i];
		}
	}
	return -1;
}

int timMaxChan(int* A, int n)
{
	int maxchan = timMaxChanDauTien(A, n);
	for (int i = 0; i < n; i++)
	{
		if (A[i] > 0 && (!A[i] % 2) && A[i] > maxchan)
		{
			maxchan = A[i];
		}
	}
	return maxchan;
}

void listedIndexMaxChan(int* A, int n)
{
	int iTemp = 0;
	int Maxchan = timMaxChan(A, n);
	for (int i = 0; i < n; i++)
	{
		if (A[i] == Maxchan)
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

bool TimChuSoDauLe(int n)
{
	int donvi;
	while (n >= 10)  
	{
		donvi = n % 10;
		n = n / 10;
	}
	if (!(n % 2))
		return false;
	return true;
}

void ListedIndexLeDauTien(int* A, int n)
{
	int iTemp = 0;
	for (int i = 0; i < n; i++)
	{
		if (TimChuSoDauLe(A[i]))
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

bool TimChuSoLe(int n)
{
	int donvi;
	while (n >= 10)
	{
		donvi = n % 10;
		if (!(donvi % 2))
		{
			return false;
		}
		n = n / 10;
	}
	if (!(n % 2))
		return false;
	return true;
}

void ListedIndexLe(int* A, int n)
{
	int iTemp = 0;
	for (int i = 0; i < n; i++)
	{
		if (TimChuSoLe(A[i]) == 1)
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

void ListedCucDai(int* A, int n)
{	
		if (n == 2)
		{
			if (A[0] > A[1])
			{
				cout << 0 << " ";
			}
		}
		int iTemp = 0;
		for (int i = 1; i < n - 1; i++)
		{
			if (A[i] > A[i + 1] && A[i - 1] < A[i])
			{
				iTemp = 1;
				cout << i << " ";
			}
		}
		if (n > 2)
		{
			if (A[0] > A[1])
			{
				cout << 0 << " ";
			}
			if (A[n - 1] > A[n - 2]);
			{
				cout << n - 1 << " ";
			}
		}
	if (!iTemp)
	{
		cout << "Khong co gia tri nao !!!";
	}
}

bool TimChuSoDauChan(int n)
{
	int donvi;
	while (n >= 10)
	{
		donvi = n % 10;
		n = n / 10;
	}
	if (n % 2)
		return false;
	return true;
}

void ListedIndexChanDauTien(int* A, int n)
{
	int iTemp = 0;
	for (int i = 0; i < n; i++)
	{
		if (!TimChuSoDauLe(A[i]))
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

int checForm3K(int n)
{
	int iTemp = 0;
	if (n == 1)
		return 1;
	while (n > 1)
	{
		int du = n % 3;
		if (du != 0)  
			iTemp = 1;
		n /= 3;
	}
	if (iTemp == 1)
	{
		return 0;
	}
	return 1;
}

void ListedIndexForm3K(int* A, int n)
{
	int iTemp = 0;
	for (int i = 0; i < n; i++)
	{
		if (checForm3K(A[i]) == 1);
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

void SortOldASC(int* A, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (A[j] < A[j - 1])
			{
				swap(A[j], A[j - 1]);
			}
		}
	}
}