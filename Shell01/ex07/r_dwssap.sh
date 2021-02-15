cat /etc/passwd | sed '/^[[:blank:]]*#/d' | sed -n 'n;p' | rev | grep -o '[^:]*$' | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed 's/^\|$/"/g' | paste -sd, - | sed 's/,/, /g' | tr '\n' '.'
