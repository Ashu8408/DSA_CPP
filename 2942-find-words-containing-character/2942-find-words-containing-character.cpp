class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> answer;

        for( int i = 0; i < words.size(); i++ ){
            size_t found = words.at(i).find(x);
            if (found != string::npos)
                answer.push_back(i);
        }
        return answer;
    }
};