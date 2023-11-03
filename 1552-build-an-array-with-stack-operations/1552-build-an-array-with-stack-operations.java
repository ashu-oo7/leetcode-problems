class Solution {
    public List<String> buildArray(int[] target, int n) {
        String push = "Push",pop = "Pop";
        List<String>res = new ArrayList<String>();
        for(int i = 1,j = 0;i<=n && j < target.length;i++){
            if(i == target[j]){
                res.add(push);
                j++;
            }
            else{
                res.add(push);
                res.add(pop);
            }
        }
        return res;
    }
}