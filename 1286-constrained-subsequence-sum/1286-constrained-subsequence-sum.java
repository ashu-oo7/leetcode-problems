class Solution {
    class pair{
        int first,second;
        pair(int a,int b){
            first = a;
            second = b;
        }
    }
    public int constrainedSubsetSum(int[] nums, int k) {
        int res = nums[0];
        Deque<pair>dq = new ArrayDeque<>();
        pair temp = new pair(res,0);
        dq.addLast(temp);
        for(int i = 1;i<nums.length;i++){
            int idx = dq.getFirst().second;
            if(idx < (i-k)){
                pair p1 = dq.removeFirst();
            }
            int val = dq.getFirst().first;
            int ans = nums[i];
            if(val > 0) ans += val;
            res = Math.max(res,ans);
            
            while((!dq.isEmpty()) && ans > dq.getLast().first){
              temp = dq.removeLast();
            }

            dq.addLast(new pair(ans,i));
        }
        return res;
    }
}