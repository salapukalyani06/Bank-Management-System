a.out: main.o create_account.o account_number_check.o add_transaction.o deposit.o display_accounts.o find_account.o generate_transaction_id.o load_accounts.o save_accounts.o show_transaction_history.o transfer.o withdraw.o show_balance.o
        cc main.o create_account.o account_number_check.o add_transaction.o deposit.o display_accounts.o find_account.o generate_transaction_id.o load_accounts.o save_accounts.o show_transaction_history.o transfer.o withdraw.o show_balance.o

main.o:main.c
        cc -c main.c
create_account.o:create_account.c
        cc -c create_account.c
account_number_check.o:account_number_check.c
        cc -c account_number_check.c
add_transaction.o:add_transaction.c
        cc -c add_transaction.c
deposit.o:deposit.c
        cc -c deposit.c
display_accounts.o:display_accounts.c
        cc -c display_accounts.c
find_account.o:find_account.c
        cc -c find_account.c
generate_transaction_id.o:generate_transaction_id.c
        cc -c generate_transaction_id.c
load_accounts.o:load_accounts.c
        cc -c load_accounts.c
save_accounts.o:save_accounts.c
        cc -c save_accounts.c
show_transaction_history.o:show_transaction_history.c
        cc -c show_transaction_history.c
transfer.o:transfer.c
        cc -c transfer.c
withdraw.o:withdraw.c
        cc -c withdraw.c
show_balance.o:show_balance.c
        cc -c show_balance.c