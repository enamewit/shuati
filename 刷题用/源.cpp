#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cout << "ÊäÈën" << endl;
	cin >> n;
	map<int,int>a;
	vector<int>b(n);
	for(int i=0;i<n;i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		
		if (9 - b[i] > 0) { pair<int, int>shu(b[i], 9 - b[i]); a.insert(shu); }
	}
	for(int i=0;i<n;i++)
	{if(b[i]==) }
	cout << a[5];
	cout << a[4];
	cout << a[3];
	return 0;

}