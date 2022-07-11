class Solution {
public:
    int romanToInt(string s) {
        int answer = 0;
        size_t Length = s.length();
        unordered_map<char, int> umap;
        umap['I'] = 1;
        umap['V'] = 5;
        umap['X'] = 10;
        umap['L'] = 50;
        umap['C'] = 100;
        umap['D'] = 500;
        umap['M'] = 1000;
        for(int idx=0;idx< Length-1;idx++){
            if(umap.at(s.at(idx)) <umap.at(s.at(idx+1)) ){
                answer -= umap.at(s.at(idx));
            }
            else
                answer += umap.at(s.at(idx));
        }
        return answer+umap.at(s.at(Length-1));
    }        

};
