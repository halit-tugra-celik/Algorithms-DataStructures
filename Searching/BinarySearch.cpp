#include <bits/stdc++.h>
using namespace std;

int arr[1000], n, s;
void BinarySearch();

int main(){       
	//Getting inputs
	cin >> n >> s;
	for(int i = 1;i <= n;i++)
		cin >> arr[i];

	//ARRAY MUST SORTED
	
	//sorting array
	sort(arr + 1, arr + 1 + n);

	//Calling function
	BinarySearch();	 	
}

void BinarySearch(){
 	int l = 1, r = n;
	int mid = (l + r + 1) / 2;//middle of array;
	while(l <= r){
		mid = (l + r + 1) / 2;
		if(arr[mid] == s)//if middle of array equals s
			break;
	 	if(arr[mid] > s)//if middle of array bigger than s
			r = mid - 1;
		else//if middle of array smaller than s 
			l = mid + 1;
	}
	if(l > r)//didn't find s
		cout << "THERE ISN'T " << s << " IN THE ARRAY\n";
	else
		cout << s << " is in index " << mid << '\n'; 
}

        
