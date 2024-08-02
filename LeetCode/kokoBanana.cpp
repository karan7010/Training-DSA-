/*875. Koko Eating Bananas
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.*/

class Solution {

  public int minEatingSpeed(int[] piles, int h) {

    int start=1;

    int end=piles[0];

    for(int i=1;i<piles.length;i++){

      end=Math.max(end,piles[i]);

    }

    int ans=-1;

    while(start<=end){

      int mid=(start+end)/2;

      if(isPossible(piles,h,mid)){

        ans=mid;

        end=mid-1;

      }else{

        start=mid+1;

      }

    }

    return ans;

  }

 //helper method

  public boolean isPossible(int[] piles,int h,int speed){

    int noOfHours=0;

    for(int i=0;i<piles.length;i++){

      noOfHours+=Math.ceil((piles[i]+0.0)/speed);

    }

    return noOfHours<=h;

  }

}
