#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void InputArr(vector<int>& iArr, int iN);
void OutputArr(vector<int> iArr,int iN);
void InPutMatrix(vector<vector<int>>& iMatrix, int iRows, int iClos);
void OutPutMatrix(vector<vector<int>> iMatrix, int iRows, int iClos);
void InputArrSaw(vector<vector<int>>& iMatrix, int iRows, vector<int>& iClos);
void OutputArrSaw(vector<vector<int>> iMatrix, int iRows, vector<int> iClos);
int main()
{
	//vector<int> iArr;
	/*int iN = 5;
	iArr.resize(iN);
	InputArr(iArr, iN);
	cout << "Mang 1 chieu vua nhap la:";
	OutputArr(iArr, iN);*/

	int iRows = 3;
	vector<int> iCols;
	iCols.resize(iRows);
	vector<vector<int>> iMatrix;
	iMatrix.resize(iRows);
	/*for (int i = 0; i < iRows; i++)
	{
		iMatrix[i].resize(iClos);
	}
	InPutMatrix(iMatrix, iRows, iClos);
	cout << "Mang 2 chieu vua nhap la:" << endl;
	OutPutMatrix(iMatrix, iRows, iClos);*/
	InputArrSaw(iMatrix, iRows,iCols);
	cout << "Mang rang cua sau khi nhap:" << endl;
	OutputArrSaw(iMatrix, iRows, iCols);
	cout << endl;
	system("pause");
	return 0;
}
void InputArr(vector<int>& iArr, int iN)
{
	for (int i = 0; i < iN; i++)
	{
		cout << "A[" << i << "]=";
		cin >> iArr[i];
	}
}
void OutputArr(vector<int> iArr,int iN)
{
	for (int i = 0; i < iN; i++)
	{
		cout << " " << iArr[i];
	}
}
void InPutMatrix(vector<vector<int>>& iMatrix, int iRows, int iClos)
{
	for (int i = 0; i < iRows; i++)
	{
		for (int j = 0; j < iClos; j++)
		{
			cout << "A[" << i << "," << j << "]=";
			cin >> iMatrix[i][j];
		}
	}
}
void OutPutMatrix(vector<vector<int>> iMatrix, int iRows, int iClos)
{
	for (int i = 0; i < iRows; i++)
	{
		for (int j = 0; j < iClos; j++)
		{
			cout << " " << iMatrix[i][j];	
		}
		cout << endl;
	}
}
void InputArrSaw(vector<vector<int>>& iMatrix, int iRows, vector<int>& iClos)
{
	for (int i = 0; i < iRows; i++)
	{
		cout << "Nhap so phan tu Col " << i + 1 << ":";
		cin >> iClos[i];
		iMatrix[i].resize(iClos[i]);
		for (int j = 0; j < iClos[i]; j++)
		{
			cout << "A[" << i << "," << j << "]=";
			cin >> iMatrix[i][j];
		}
		cout << endl;
	}
}
void OutputArrSaw(vector<vector<int>> iMatrix, int iRows, vector<int> iClos)
{
	for (int i = 0; i < iRows; i++)
	{
		for (int j = 0; j < iClos[i] ; j++)
		{
			cout << " " << iMatrix[i][j];
		}
		cout << endl;
	}
}