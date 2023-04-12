#include <stdio.h>
void good_morning();
void good_afternoon();
void good_night();
int main () { /*Important points:-
execution of c starts from main()
every functionn gets called directly or indirectly (function inside function is indirect call)
*/
    good_morning();
    
    return 0;
}

void good_morning (){
    printf("good morning\n");
    good_afternoon();
}
void good_afternoon() {
    printf("good afternoon\n");
    good_night();
}
void good_night() {
    printf("good night\n");
}