public class EX1 {
    // find the subarry the it sum much with the target
   public int[] find(int [] table , int target){
  
     int [] answr = new int[2];
    for(int i =0 ;i<table.length ; i++){
        int start  = i ; 
        int end  = 0 ; 
        int s = 0 ; 
        for (int j  = i ;  j<table.length ; j++){
            s +=table[j] ;
            if(s ==target){
                end = j  ;
                answr[0] = start ; 
                answr[1] = end ; 
                return  answr ;
                
            }
            
        }


    }
    return answr ;
   

   }
    public static void main(String[] args) {
        
int table[] = {1 ,2,3 ,4,5 ,6 ,7 ,8 ,9 ,10 ,11 };
for(int i =0 ; i<table.length ;i++){
    System.out.println(table[i]);
}
EX1 ex1 = new EX1() ;
int tab[] = ex1.find(table, 14) ;
System.out.println("bereak  __ _______________");
for(int i =0 ; i<tab.length ; i++){
    System.out.println(tab[i]);
}



    }

}
