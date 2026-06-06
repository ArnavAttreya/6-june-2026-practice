// So today i have solved 6 string problems and learned 
// the concept of frequency array and frequency in 
// hash maps and also learnt about hash sets

// 6 string problems

// leetcode 242. Valid Anagram
// (initial approach)
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         if(s == t) return true;
//         return false;
//     }
// };

// (optimal)
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         vector<int> hash(26,0);
//         if(s.size()!=t.size()) return false;
//         for(int i=0;i<s.size();i++){
//             hash[s[i]-'a']++;
//         }
//         for(int i=0;i<t.size();i++){
//             hash[t[i]-'a']--;
//         }
//         for(int i=0;i<hash.size();i++){
//             if(hash[i]!=0) return false;
//         }
//         return true;
//     }
// };


// leetcode 125. Valid Palindrome
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         if(s.size()<=1) return true;
//         string x = "";
//         for(int i=0;i<s.size();i++){
//             if(isalnum(s[i])) x += tolower(s[i]);
//         }
//         string r = x;
//         reverse(r.begin(),r.end());
//         if(x == r) return true;
//         return false;
//     }
// };


// leetcode 344. Reverse String
// (initial approach)
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         reverse(s.begin(),s.end());
//     }
// };

// (two pointer)
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int l = 0;
//         int r = s.size()-1;
//         while(l<r){
//             swap(s[l],s[r]);
//             l++;
//             r--;
//         }
//     }
// };

// (in place swap)
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//        for(int i=0;i<s.size()/2;i++){
//         swap(s[i],s[s.size()-1-i]);
//        }
//     }
// };


// leetcode 9. Palindrome Number
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         int temp = x;
//         long long rev = 0;
//         while(temp>0){
//           int lastdigit = temp % 10;
//           rev = (rev * 10) + lastdigit;
//           temp /= 10; 
//         }
//         if(rev == x) return true;
//         return false;
//     }
// };


// leetcode 7. Reverse Integer
// class Solution {
// public:
//     int reverse(int x) {
//         long long rev = 0;
//         while(x){
//             int ld = x % 10;
//             rev = (rev * 10) + ld;
//             x /= 10;   
//         }
//         if(rev > INT_MAX || rev < INT_MIN) return 0;
//         return rev;
//     }
// };


// leetcode 387. First Unique Character in a String
// (brute force)
// class Solution {
// public:
//     int firstUniqChar(string s) {
//         for(int i=0;i<s.size();i++){
//             int cnt = 0;
//             for(int j=0;j<s.size();j++){
//                if(s[j] == s[i]) cnt++;
//             }
//             if(cnt == 1) return i;
//         }
//         return -1;
//     }
// };

// (optimal)
// class Solution {
// public:
//     int firstUniqChar(string s) {
//         vector<int> hash(26,0);
//         for(int i=0;i<s.size();i++){
//             hash[s[i]-'a']++;
//         }
//         for(int i=0;i<s.size();i++){
//             if(hash[s[i]-'a']==1) return i;
//         }
//         return -1;
//     }
// };
