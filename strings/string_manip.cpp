#include "string_manip.hpp"

VectorString split(string sentence,char dl){
    string word="";
    sentence=sentence+dl;
    int len=sentence.size();

    VectorString wordSplits;
    for(int i=0;i<len;i++){
        if(sentence[i]!=dl){
            word=word+sentence[i];
        }
        else{
            if(word.size()!=0)
            {
                wordSplits.push_back(word);
            }
            word="";
        }
    }
    return wordSplits;
}