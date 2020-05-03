#include <bits/stdc++.h>
using namespace std;

int arr[1000], n, s;
void LinearSearch();

int main(){
	cin >> n >> s;
	for(int i = 1;i <= n;i++)
		cin >> arr[i];
	
	LinearSearch();	 	
}

void LinearSearch(){
 	int result = -1;
	
	for(int i = 1;i <= n;i++)
		if(arr[i] == s)
			result = i;

	if(result == -1){
		cout << "Dizide " << s << "Yok! \n";
		return; 	
	}
	
	cout << s << " " << result << " indisinde \n"; 
}
