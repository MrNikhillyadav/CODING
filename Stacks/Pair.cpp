template <typename T,typename V>

class Pair{
  /*
  int x;
  int y;
  */
 T x; //T is temporary  variable
 V y;
  

 public:

 void setX(T x){
    this->x = x;
 }  

 T getX(){
    return x;
 }

 void setY(V y){
    this-> y =y;
 }

 V getY(){
    return y;
 }
};


  