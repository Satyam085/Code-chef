/*
Lots of geeky customers visit our chef's restaurant everyday. So, when asked to fill the feedback form, these customers represent the feedback using a binary string (i.e a string that contains only characters '0' and '1'.

Now since chef is not that great in deciphering binary strings, he has decided the following criteria to classify the feedback as Good or Bad :

If the string contains the substring "010" or "101", then the feedback is Good, else it is Bad. Note that, to be Good it is not necessary to have both of them as substring.

So given some binary strings, you need to output whether according to the chef, the strings are Good or Bad.
*/

/*
Input Case:
2
11111110
10101010101010

*/
#include <bits/stdc++.h>  
using namespace std;
 
int main(){

#ifndef ONLINE_JUDGE
freopen("inputf.txt", "r", stdin);
freopen("outputf.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string feedback;
        int good = 0;
        getline(cin, feedback);
        for(int i = 2; i < feedback.length(); ++i){
            if(feedback[i-2] == 0 && feedback[i-1] == 1 && feedback[i] == 0){
                good += 1;
            }else if(feedback[i-2] == 1 && feedback[i-1] == 1 && feedback[i] == 1){
                good += 1;
            }
        }
        cout << feedback.length();
        if(good){
            cout << "Good" << endl;
        }else{
            cout << "Bad" << endl;
        }
    }
}