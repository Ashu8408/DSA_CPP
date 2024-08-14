class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        return (updated(s) == updated(t));
        
    }
    
    private:
    string updated(string str){
        
        string strr="";
        int c=0;
        
       for(int i = str.size()-1; i>=0; i-- ){
           
           if(str[i]=='#'){         // if character is a hash
               c++;
               continue;
           }
           
           if(c > 0){       // when a character is found, decrement the hash count
               c--;
           }
           
           else{            // when hash count is 0 and char is found, add it in new string
               strr.insert(strr.begin(), str[i]);
           }
       }
        return strr;
    }
};