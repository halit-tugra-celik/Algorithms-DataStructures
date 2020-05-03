#include <bits/stdc++.h>
using namespace std;

int arr[1000], n, s;
void BinarySearch();

int main(){       
	cin >> n >> s;
	for(int i = 1;i <= n;i++)
		cin >> arr[i];

	sort(arr + 1, arr + 1 + n);

	BinarySearch();	 	
}

void BinarySearch(){
 	int l = 1, r = n;
	int mid = (l + r + 1) / 2;
	while(l <= r){
		mid = (l + r + 1) / 2;
		if(arr[mid] == s)
			break;
	 	if(arr[mid] > s)
			r = mid - 1;
		else 
			l = mid + 1;
	}
	if(l > r)
		cout << "THERE ISN'T " << s << " IN THE ARRAY\n";
	else
		cout << s << " is in index " << mid << '\n'; 
}

        
