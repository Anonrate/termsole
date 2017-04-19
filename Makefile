default:
	gcc -c ../lgr/src//lgr.c -o obj/lgr.o
	ar rcs lib/liblgr.a obj/lgr.o
	gcc -static src/termsole.c -Llib -llgr -o bin/termsole.exe

distclean:
	rm -R bin/* lib/* obj/*
