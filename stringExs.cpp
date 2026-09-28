#include "main.h"
// Replace each letter with next in alphabet    
void replaceLetter(string s){
    for(int i = 0; i < s.length(); i++){
        if (s[i] < 65 || s[i] > 122 || (s[i] >=91 && s[i] <= 96)){
            cout << s[i];
        }
        else {
            s[i] = s[i] + 1;
            cout << s[i];
        } 
    }
}

// Capitalize the First of each word
void upper1stWord(string s){
    for (int i = 0; i < s.length(); i++){
        if ( i == 0 ) {
            s[i] -= 32;
            cout << s[i];
        }
        else if (s[i] == ' '){
            s[i+1] -= 32;
            cout << s[i];
        }
        else cout << s[i];
    }
}

// find the largest word in a string 
string longestWord(string word){
    string result_word, temp_word;
    for (int i = 0; i < word.length(); i++){
        if (word[i] != ' ' && (word[i] >= 65 && word[i] <= 90) 
        || (word[i] >= 97 && word[i] <= 122) 
        ||(word[i] >= 65 && word[i] <= 90)){
            result_word.push_back(word[i]);
        }
        else break;
    }
    for (int i = 0; i < word.length(); i++){
        if (word[i] != ' ' && (word[i] >= 65 && word[i] <= 90) 
        || (word[i] >= 97 && word[i] <= 122) 
        ||(word[i] >= 65 && word[i] <= 90)){
            temp_word.push_back(word[i]);
            if (i+1 == word.length() && temp_word.length() > result_word.length()){
                result_word = temp_word;
            }
        }
        else {
            if (temp_word.length() > result_word.length()) result_word = temp_word;
            temp_word.clear();
        }
    }
    return result_word;
}

//check separation of "E" and "G" by exactly 2 characters
bool checkChars (string s){
    for (int i = 0; i < s.length(); i++){
        if (i+2 <= s.length() && (s[i] == 'e' || s[i] == 'E')){
            if (s[i+2]  == 'g' || s[i+2] == 'G') return true;
        }
        if (i+2 <= s.length() && (s[i] == 'g' || s[i] == 'G')){
            if (s[i+2]  == 'e' || s[i+2] == 'E') return true;
        }
    }
    return false;
}

//count vowels in a string
int countVowels(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if (s[i] == 'u'|| s[i] == 'e'|| s[i] == 'o'|| s[i] == 'a'||  s[i] == 'i'){
            count++;
        }
    }
    return count;
}

//count words in a string
int countWords(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if (s[i+1] == ' ' || s[i+1] == '\0'){
            count++;
        }
    }
    return count;
}

//check palindrome of a string
bool checkPal(string s){
    int len = s.length();
    for (int i = 0; i < len/2; i++){
        if (s[i] == s[len-i-1]) return true;
    }
    return false;
}

//check Equal Occurence of 2 characters
bool checkOccur(string s, string a, string b){
    int cnt1, cnt2 = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == a[0]) 
            cnt1++;
        if (s[i] == b[0]) 
            cnt2++;
    }
    if ( cnt1 == cnt2 ) return true;
    return false;
}

//toggle case of each characters
void toggleCase(string s){
    for (int i = 0; i < s.length(); i++){
        if (s[i] >= 65 && s[i] <= 90 ) {
            s[i] += 32;// in thuong
            cout << s[i];
        }
        else if (s[i] >= 97 && s[i] <= 122){
            s[i] -= 32;// in hoa
            cout << s[i];
        }
    }
}

// insert dash between 2 odd numbers in a string
// cách dùng insert (có mở rộng mảng nhưng hàm này làm cho các kí tự đẩy về sau để chèn vào)
string insertDash1 (string s){
    if (s.empty()) return "";
    string res = "";
    
    for (size_t i = 0; i < s.length(); i++) {
        res += s[i];
        // Nếu ký tự hiện tại và kế tiếp đều là số lẻ, và chưa phải ký tự cuối cùng
        if (i + 1 < s.length() && (s[i] - '0') % 2 != 0 && (s[i+1] - '0') % 2 != 0) {
            res += "-";
        }
    }
    return res;
}
// cách dùng push_back là phải tạo mới chuỗi rỗng ( tại vì này nó pushback từng char vào đằng sau)
string insertDash2 (string s){
    string str = "";
    for(int i = 0; i < s.length(); i++){
        str.push_back(s[i]);
        if ((s[i] -'0') % 2 != 0 && (s[i+1] - '0') % 2 != 0 && i+1 <s.length() ){
            str.push_back('-');
        }
    }
    return str;
}

//sum of numbers in a string
// lấy kí tự số rồi "-" cho kí tự '0' là ra số
int sumNumStr(string s){
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if (s[i] >= '0' && s[i] <= '9')
        sum += s[i] - '0';
    }
    return sum;
}