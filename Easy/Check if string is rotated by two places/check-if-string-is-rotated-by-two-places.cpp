//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n = str1.size();
        string temp1 = "";
        temp1 += str1.substr(n-2,2) + str1.substr(0,n-2);
        string temp2 = "";
        temp2 += str1.substr(2,n-2) + str1.substr(0,2);
        return (temp1 == str2 || temp2 == str2);
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends