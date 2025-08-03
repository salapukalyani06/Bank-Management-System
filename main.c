#include <ctype.h>
#include "bank.h"
Account* head;
int main()
{
    char choice;
    load_accounts();
    while (1) {
        printf("\n------------------MENU---------------------------\n");
        printf("c: Create account\nh: Transaction history\nw: Withdraw\n");
        printf("d: Deposit\nb: Balance enquiry\nt: Transfer\n");
        printf("e: Display accounts\ns: Save to file\nf: Find account\nq: Quit\n");
        printf("Enter choice: ");
        scanf(" %c", &choice);
        choice=tolower(choice);
        switch (choice) {
            case 'c': create_account(); break;
            case 'h': show_transaction_history(); break;
            case 'w': withdraw(); break;
            case 'd': deposit(); break;
            case 'b': show_balance(); break;
            case 't': transfer(); break;
            case 'e': display_accounts(); break;
            case 's': save_accounts(); break;
            case 'f': {
                long long int acc_no;
                printf("Enter account number: ");
                scanf("%lld", &acc_no);
                Account* acc = find_account(acc_no);
                if (acc) {
                    printf("Account Found: %s\n", acc->name);
                } else {
                    printf("Account not found!\n");
                }
                break;
            }
            case 'q': save_accounts(); printf("Goodbye!\n"); exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

