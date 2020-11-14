#include <iostream>

using namespace std;

void InputArr(int*, int);
void OutputArr(int*, int);

//Bài 155: Hãy tìm giá trị trong mảng các số thực xa giá trị x nhất
void ValueFarXMax(int*, int*, int);
void FartoX(int*, int*, int, int&);
int MaxArrTemp(int*, int);
//Bài 156: Hãy tìm giá trị trong mảng các số thực gan giá trị x nhất
void ValueFarXMin(int*, int*, int);
void FartoX(int*, int*, int, int&);
int MinArrTemp(int*, int);
//Bài 157: Cho mảng 1 chiều các số thực, hãy tìm đoạn [a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng
void SearchAminBmax(int*, int );
//Bài 158: Cho mảng 1 chiều các số thực, hãy tìm giá trị x sao cho đoạn[-x, x] chứa tất cả các giá trị trong mảng
void SearchX(int*, int);
//Bài 159: Cho mảng 1 chiều các số thực, hãy tìm giá trị đầu tiên lớn hơn giá trị 2003. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về - 1
void SearchValueMany2003(int*, int);
//Bài 162: Cho mảng 1 chiều các số thực.Hãy viết hàm tìm một vị trí trong mảng thỏa 2 điều kiện : 
//có 2 giá trị lân cận và giá trị tại đó bằng tích 2 giá trị lân cận.Nếu mảng không tồn tại giá trị như vậy thì trả về giá trị - 1
void Search(int*, int);
//Bài 164: Cho mảng 1 chiều các số nguyên.Hãy tìm giá trị đầu tiên thỏa mãn tính chất số gánh
void checkSoGanh(int*, int);
void SearchSoGanh(int*, int);
//Bài 167: Hãy tìm giá trị thỏa điều kiện toàn chữ số lẻ và là giá trị lớn nhất thỏa điều kiện ấy
//trong mảng 1 chiều các số nguyên.Nếu mảng không có giá trị thỏa điều kiện trên thì trả về 0
int checkValusOld(int x);
void SearchDK(int*, int);
int main()
{
	int iN = 5;
	int x;
	int* A = new int[iN];
	int* B = new int[iN];
	InputArr(A, iN);
	cout << "Mang sau khi nhap la: ";
	OutputArr(A, iN);
	//155
	//cout << "\n----Tim gia tri trong mang cac so thuc xa gia tri x nhat---";
	//FartoX(A,B,iN,x);
	//ValueFarXMax(A, B, iN);
	//156
	//cout << "\n----Tim gia tri trong mang cac so thuc gan gia tri x nhat---";
	//FartoX(A, B, iN, x);
	//ValueFarXMin(A, B, iN);
	//157
	//SearchAminBmax(A, iN);
	//158
	//SearchX(A, iN);
	//159
	//SearchValueMany2003(A, iN);
	//162
	//Search(A, iN);
	//164
	//SearchSoGanh(A, iN);
	//167

	delete[] A;
	delete[] B;
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
void ValueFarXMax(int* A,int* B, int iN)
{ 
	int far = MaxArrTemp(B, iN);
	cout <<"Gia tri xa X nhat la: " << A[far];
}
void ValueFarXMin(int* A, int* B, int iN)
{
	int far = MinArrTemp(B, iN);
	cout << "Gia tri gan X nhat la: " << A[far];
}
void FartoX(int* A, int* B, int iN, int& x)
{
		cout << endl << "Nhap x : ";
		cin >> x;
	for (int i = 0; i < iN; i++)
	{
		B[i] = abs(A[x] - A[i]);
		if (!B[i])
		{
			B[i] = A[x];
		}
		cout <<"i: " << B[i] << endl;
	}
}
int MaxArrTemp(int* B, int iN)
{
	int max = B[0];
	int temp;
	for (int i = 1; i < iN; i++)
	{
		if (B[i] > max)
		{
			max = B[i];
			temp = i;
		}
	}
	return temp;
}
int MinArrTemp(int* B, int iN)
{
	int min = B[0];
	int temp;
	for (int i = 1; i < iN; i++)
	{
		if (B[i] < min)
		{
			min = B[i];
			temp = i;
		}
	}
	return temp;
}
void SearchAminBmax(int* A, int iN)
{
	int max = A[0];
	int min = A[0];
	for (int i = 1; i < iN; i++)
	{
		max = A[i] > max ? A[i] : max;
		min = A[i] < min ? A[i] : min;
	}
	cout << endl << "Mang da cho thuoc doan [" << min << "," << max << "]";
}
void SearchX(int* A, int iN)
{
	int m = A[0];
	for (int i = 1; i < iN; i++)
	{
		m = m > A[i] ? m : A[i];
	}
	cout << endl << "Gia tri " << m << " co doan [" << -m << "," << m << "] la doan deu co cac gia tri trong mang.";
}
void SearchValueMany2003(int* A, int iN)
{
	for (int i = 0; i < iN; i++)
	{
		if (A[i] > 2003)
		{
			cout << endl << "Day ne : " << A[i];
			return;
		}
	}
}
void Search(int* A, int iN)
{
	for (int i = 1; i < iN; i++)
	{
		if (A[i] = (A[i - 1] * A[i + 1]))
		{
			cout << endl << "Day ne: " << A[i];
			return;
		}
	}
}
int checkSoGanh(int x)
{
	int soganh = 0;
	while (x)
	{
		soganh = soganh * 10 + x % 10;
		x = x / 10;
	}
	return soganh;
}
void SearchSoGanh(int* A, int iN)
{
	for (int i = 0; i < iN; i++)
	{
		if (checkSoGanh(A[i]) == A[i])
		{
			cout << "Day ne: " << A[i];
			return;
		}
	}
}
bool checkValusOld(int x)
{
	int check = 0;
	while (x)
	{
		if ((x < 10) && (x % 2))
			return true;
		check = x % 10;
		if (!(check % 2))
			return false;
		x /= 10;
	}
}
int max(int* A, int iN)
{
	int max = A[0];
	for (int i = 1; i < iN; i++)
	{
		max = A[i] > max ? A[i] : max;
	}
	return max;
}
void SearchDK(int* A, int iN)
{
	int Max = max(A, iN);
	for (int i = 0; i < iN; i++)
	{
		if (A[i] == checkValusOld(A[i]) && A[i] == Max)
		{
			cout << endl << "Day ne: " << A[i];
			return;
		}
	}
}