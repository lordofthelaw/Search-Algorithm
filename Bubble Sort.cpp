#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

void insert(vector<int> &a)
{
	int n = 0;
	cout << "nhap so luong phan tu : ";
	cin >> n;
	for (int i = 0; i < n; i++){
		a.push_back((rand()%100));
	}
}
void swap(vector<int> &a, int i) //Hàm đổi vị trí phần tử
{
	int temp = a[i];
	a[i] = a[i + 1];
	a[i + 1] = temp;
}

void BubbleSort(vector<int> &a, int n)
{
	int flag = 0;
	int temp = n;
	for (int i = 0; i<temp - 1; i++) {
		if (a[i]>a[i + 1]) {
			swap(a, i);
			flag = 1; 
		}
	}
	if (flag != 0){
		temp--;
		BubbleSort(a,temp);	// Chạy đệ quy đến khi temp = 0,
	}				// hoặc không sảy ra lần đổi vị trí nào trong lần chạy hàm.
}

int main()
{
    srand(time(NULL));
	vector<int> temp;
	insert(temp);
	for (unsigned int i = 0; i<temp.size(); i++)
	{
		cout << temp[i] << "\t";
	}
	BubbleSort(temp, temp.size());
	cout << "\n";
	for (unsigned int i = 0; i<temp.size(); i++)
	{
		cout << temp[i] << "\t";
	}
	return 0;
}

