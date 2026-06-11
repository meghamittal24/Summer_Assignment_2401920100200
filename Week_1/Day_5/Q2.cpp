class Solution {
public:
    void reverseString(vector<char>& s) {
        int a=0,r=s.size()-1;
        while(a<r){
            swap(s[a],s[r]);
            a++;
            r--;
        }
    }
};
