#include <stdio.h>

int main() {
    int item_choice, want_to_order, order_more;

    printf("========================================\n");
    printf("     Welcome to Our Online Food Cart\n");
    printf("========================================\n");

    while (1) {
        printf("\nHello! Would you like to order?\n");
        printf("1. Yes\n2. No\n");
        printf("Enter your choice: ");
        scanf("%d", &want_to_order);

        if (want_to_order != 1) {
            printf("\nThank you for visiting our food cart!\n");
            printf("Have a wonderful day!\n");
            break;
        }

        while (1) {
            printf("\n========== FOOD MENU ==========\n");
            printf("1. Burger        - 149 TK\n");
            printf("2. Pizza         - 399 TK\n");
            printf("3. Fried Chicken - 299 TK\n");
            printf("4. Pasta         - 179 TK\n");
            printf("5. Sandwich      - 149 TK\n");
            printf("6. French Fries  - 199 TK\n");
            printf("7. Chowmein      - 99 TK\n");
            printf("8. Biryani       - 349 TK\n");
            printf("9. Soft Drink    - 49 TK\n");
            printf("10. Coffee       - 15 TK\n");
            printf("-------------------------------\n");
            printf("Please choose your menu (1-10): ");
            scanf("%d", &item_choice);

            if (item_choice == 1) printf("\nYou ordered Burger - 149 TK\n");
            else if (item_choice == 2) printf("\nYou ordered Pizza - 399 TK\n");
            else if (item_choice == 3) printf("\nYou ordered Fried Chicken - 299 TK\n");
            else if (item_choice == 4) printf("\nYou ordered Pasta - 179 TK\n");
            else if (item_choice == 5) printf("\nYou ordered Sandwich - 149 TK\n");
            else if (item_choice == 6) printf("\nYou ordered French Fries - 199 TK\n");
            else if (item_choice == 7) printf("\nYou ordered Chowmein - 99 TK\n");
            else if (item_choice == 8) printf("\nYou ordered Biryani - 349 TK\n");
            else if (item_choice == 9) printf("\nYou ordered Soft Drink - 49 TK\n");
            else if (item_choice == 10) printf("\nYou ordered Coffee - 15 TK\n");
            else {
                printf("\nInvalid menu choice!\n");
                printf("Thank you for visiting our food cart. Have a nice day!\n");
                return 0;
            }

            printf("\nYour order has been confirmed!\n");

            printf("\nWould you like to order more?\n");
            printf("1. Yes\n2. No\n");
            printf("Enter your choice: ");
            scanf("%d", &order_more);

            if (order_more != 1) {
                printf("\nThank you for visiting our food cart!\n");
                printf("Have a wonderful day!\n");
                return 0;
            }
        }
    }

    return 0;
}
