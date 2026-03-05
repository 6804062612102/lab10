#include <stdio.h> 
#include <stdlib.h> 
struct Books{ 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook;

void DisplayData(struct Books *CBook); 

int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",ComputerBook.BookTitle); 
    DisplayData(&ComputerBook);    // ส่งตำแหน่งที่อยู่ข้อมูลไปยังฟังก์ชัน DisplayData 
    return 0; 
} 
void DisplayData(struct Books *CBook){ 
    printf("Book ID : %d \n",(*CBook).BookID); 
    printf("Book Title : %s \n",CBook->BookTitle); 
}

/*
(*CBook).BookID คือ  *CBook: บอกคอมพิวเตอร์ว่า ไปที่ตำแหน่งหน่วยความจำที่ CBook ชี้อยู่ ซึ่งก็คือตัวแปร ComputerBook ใน main
                    .BookID: เมื่อไปถึงตัวแปรนั้นแล้ว ให้เข้าไปดึงค่าในสมาชิกที่ชื่อ BookID
CBook->BookTitle คือ ไปที่ struct ที่ pointer นี้ชี้อยู่ แล้วดึงสมาชิกตัวนี้ออกมา
*/