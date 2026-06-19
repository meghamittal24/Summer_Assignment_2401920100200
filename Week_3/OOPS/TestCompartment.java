public class TestCompartment{
  public static void main(String [] args) {
    Compartment[] c=new Compartment [10];
    for (int i=0;i<c.length;i++){
      int n=(int)(Math.random() *4) + 1;
      if(n==1)
        c[i]=new FirstClass();
      else if(n==2)
        c[i]=new Ladies();
      else if(n==3)
        c[i]=new General();
      else
        c[i]=new Luggage();
    }
    for (Compartment x :c){
      System.out.println(x.notice());
    }
  }
}
