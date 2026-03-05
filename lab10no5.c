#include <stdio.h>
#include <string.h>

typedef struct {
	char loginname[64];
	char password[64];
} account ;

typedef struct {
	char stdID[16];
	char nameSurname[25];
	account stdACC;
} hoststd;

void login(hoststd *account, char *login, char *password){
	int found = 0;
    
    for (int i = 0; i < 5; i++) {
        if (!strcmp(login, account[i].stdACC.loginname) && !strcmp(password, account[i].stdACC.password)) {
            printf("Welcome");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Incorrect login or password\n");
    }
}

int main(){

    hoststd cs[5] = {
				{"66-040626-2686-9","MR.A",{"user1", "passwd1"}},
				{"68-040626-1210-2","Patipon",{"jack@", "16950"}},
				{"65-040626-3618-7","Patipon_65",{"jackk@","16950"}},
				{"68-040626-1872-1","Somchai",{"Ake","12345"}},
				{"68-040626-1201-3","Somying",{"Mai","77489"}}
    };

	char loginname[64], password[64];
    scanf("%s", loginname);
    scanf("%s", password);

	login(cs, loginname, password);
    
    
    return 0;
}