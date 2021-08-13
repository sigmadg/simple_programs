//El Nùmero Mayor 3 Variables
//Ordòñez Güemes Ana Gabriela
//Verciòn 1.0

#include <iostream.h>
main()

{
      int x,y,z;
      cout<<"\n ingrese numero x:  ";
      cin>>x;
      cout<<"\n ingrese numero y:  ";
      cin>>y;
      cout<<"\n ingrese numero z:  ";
      cin>>z;
      {
      if(x>y)
         { 
         if (x>z)
         cout<<"\n El mayor es:  "<<x;
         else
         cout<<"\n El mayor es:  "<<z;
         }
      else
         {if (y>z)
         cout<<"\n El mayor es:  "<<y;
         else
         cout<<"\n El mayor es:  "<<z;
         }
         }
          system ("pause");
          return 0;

}
