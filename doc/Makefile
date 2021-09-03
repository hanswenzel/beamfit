all: beamnote.pdf

beamnote.dvi: *.tex cmspaper.cls
	latex beamnote
	latex beamnote

beamnote.ps: beamnote.dvi
	dvips -t letter -P pdf beamnote.dvi -o beamnote.ps

beamnote.pdf: beamnote.ps
	ps2pdf -dEmbedAllFonts=true beamnote.ps beamnote.pdf

clean:
	rm -f *.aux *.log *~ *.dvi *.ps *.pdf
