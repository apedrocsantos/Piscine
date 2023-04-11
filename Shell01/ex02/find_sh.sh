find . -type f -name '*.sh' | rev | cut -d'/' -f1 | cut -b 4- | rev
