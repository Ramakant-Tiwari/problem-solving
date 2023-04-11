class Solution {
public:
  string reverseVowels(string s) {
    stack<char> aux;
    for (int i = 0; i != s.size(); i++) {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
          s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
          s[i] == 'O' || s[i] == 'U') {
        aux.push(s[i]);
      }
    }
    for (int i = 0; i != s.size(); i++) {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
          s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
          s[i] == 'O' || s[i] == 'U') {
        char temp = aux.top();
        aux.pop();
        s[i] = temp;
        if (aux.empty())
          break;
      }
    }
    return s;
  }
};
