class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) {
            return s;
        }

        string lps = "";
        for (int i = 0 ; i <n; i++) {
            // Odd-length palindrome
            int low = i, high = i;
            while (low >= 0 && high < n && s[low] == s[high]) {
                low--;
                high++;
            }
            string palindrome = s.substr( low + 1, high - low - 1);
            if (palindrome.length() > lps.length()) {
                lps = palindrome;
            }

            // Even-length palindrome
            low = i, high = i + 1;
            while (low >= 0 && high < n && s[low] == s[high]) {
                low--;
                high++;
            }
            palindrome = s.substr(low + 1, high - low - 1);
            if (palindrome.length() > lps.length()) {
                lps = palindrome;
            }
        }
        return lps;
    } 
};