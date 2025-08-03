#include "bank.h"
extern Account* head;

void load_accounts() {
    FILE* fp = fopen("data.txt", "r");
    if (!fp) return;
    while (!feof(fp)) {
        Account* acc = (Account*)malloc(sizeof(Account));
        if (fscanf(fp, "%lld %s %f %s %d", &acc->account_number, acc->name,
                   &acc->balance, acc->contact, &acc->transaction_count) != 5) {
            free(acc);
            break;
        }
        for (int i = 0; i < acc->transaction_count; i++) {
            fscanf(fp, "%u %d %f", &acc->transactions[i].id,
                   (int*)&acc->transactions[i].type,
                   &acc->transactions[i].amount);
        }
        acc->next = head;
        head = acc;
    }
    fclose(fp);
}

