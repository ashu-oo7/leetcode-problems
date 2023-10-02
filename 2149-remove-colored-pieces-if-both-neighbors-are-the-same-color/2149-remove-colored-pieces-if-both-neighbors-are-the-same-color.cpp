class Solution {
public:
    bool winnerOfGame(string colors) {
        int count = 1;char ch = colors[0];
        int res = 0;
        int n = colors.size();
        if(n < 3)return false;
        for(int i = 1;i<n;i++){
            if(ch != colors[i]){
                int val = count - 2;
                if(val > 0){
                    if(ch == 'B')val *= -1;
                    res += val;
                }
                count = 0;
            }

            count++;
            ch = colors[i];
        }
         if(count > 2){
                    count -= 2;
                    if(ch == 'B')count *= -1;
                    res += count;
                }
        return (res > 0);
    }
};