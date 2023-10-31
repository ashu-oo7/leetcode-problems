class Solution {
    public int[] findArray(int[] pref) {
        int len = pref.length;
        int prev = pref[0],ans;
        for(int i = 1;i<len;i++){
            ans = prev^pref[i];
            prev = pref[i];
            pref[i] = ans;
        }
        return pref;
    }
}