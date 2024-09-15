//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++

void rearrange(vector<int> &arr) {
        // code here

        queue<int>pos;
        queue<int>neg;
        for(auto &i:arr){
            if(i<0){
                neg.push(i);
            }
            else{
                pos.push(i);
            }
        }
        for(int i=0;i<arr.size();i++){
            if(i%2==0 && !pos.empty()){
                arr[i]=pos.front();
                pos.pop();
            }
            else if(!neg.empty()){
                arr[i]=neg.front();
                neg.pop();
            }
            else{
                arr[i]=pos.front();
                pos.pop();
            }
        }
    }





//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
