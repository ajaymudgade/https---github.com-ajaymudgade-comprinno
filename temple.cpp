#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int is_palindrome(vector<int> arr,int n){
    int flag = 1;
    
    for(int i=0;i<n/2;i++) {
        if(arr[i]!=arr[n-i-1]) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int seperation(vector<int> arr,int n) {
    int flag = 1;
    for(int i=0;i<n-1;i++) {
        if(abs(arr[i]-arr[i+1]) != 1) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int unique_center(vector<int> arr,int n) {
    int flag = 1;
    if(n%2==1) {
        for(int i=0;i<n;i++) {
            if(arr[n/2] == arr[i] && i!=n/2) {
                flag = 0;
                break;
            }
        }
    }
    
    return flag;
}

int main() {
	// your code goes here
	int t,n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    vector<int> arr;
	    int temp;
	    
	    for(int i=0;i<n;i++) {
	        cin >> temp;
	        arr.push_back(temp);
	    } 
	    
	    if(arr[0]==1 && is_palindrome(arr,n) && seperation(arr,n) && unique_center(arr,n)) {
	        cout << "yes" << endl;
	    }
	    else {
	        cout << "no" << endl;
	    }
	}
	return 0;
}