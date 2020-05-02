#include <bits/stdc++.h>
using namespace std;

int arr[1000], n, s;
void LinearSearch();

int main(){
	//Getting inputs
	cin >> n >> s;
	for(int i = 1;i <= n;i++)
		cin >> arr[i];
	
	//Calling function
	LinearSearch();	 	
}

void LinearSearch(){
 	int result = -1;//Result value is -1 in the beginning
	
	for(int i = 1;i <= n;i++)
		if(arr[i] == s)//if we find s
			result = i;//change result as index

	if(result == -1){//if result didn't change
		cout << "THERE ISN'T " << s << "IN THE ARRAY\n";
		return; 	
	}
	
	cout << s << " is in index " << result << '\n'; 
}
