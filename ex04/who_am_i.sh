ldapwhoami -Q | awk '{split($0,a,":"); print a[2]}'