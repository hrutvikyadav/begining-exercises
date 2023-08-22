loops:
	mkdir -p ./bin
	gcc ./source/loops.c -Wall -o ./bin/loops

clean:
	rm -r ./bin/
