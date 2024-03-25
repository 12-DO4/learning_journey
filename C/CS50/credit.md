### American Express
- 15-digit, start with 34 or 37
- output will be <code>AMEX\n</code>

### MasterCard
- 16-digit, start with 51, 52, 53, 54, or 55
- output will be <code>MASTERCARD\n</code>

### Visa
- 13- or 16-digit, start with 4
- output will be <code>VISA\n</code>

### Luhn’s Algorithm (checksum)
- Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
- Add the sum to the sum of the digits that weren’t multiplied by 2.
- If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!
- example for Visa: 4003600000000014
    - 1,0,0,0,0,6,0,4
    - 1×2 + 0×2 + 0×2 + 0×2 + 0×2 + (6×2) + 0×2 + 4×2
    - 2 + 0 + 0 + 0 + 0 + (1+2) + 0 + 8
    - 13
    - 4,0,0,0,0,0,3,0
    - 4 + 0 + 0 + 0 + 0 + 0 + 3 + 0
    - 7
    - 13 + 7 = 20
    - 20 % 10 == 0 ? true : <code>INVALID\n</code>

### How to solve?
- any positive numeric input
- checksum condition
- length & starts with conditions
- printing card type
