Cat
===
The cat program is a standard Unix utility that concatenates and lists files. The name is an abbreviation of catenate, a synonym of concatenate.

Specification
-------------
The Single Unix Specification specifies the behavior that the contents of each of the files given in sequence as arguments is written to the standard output in the same sequence. It mandates the support of one option flag, u (unbuffered), by which each byte is written to standard output without buffering as it is read. Many operating systems do this by default and ignore the flag.
If one of the input filenames is specified as a single hypen (-), then cat reads from standard input at that point in the sequence. If no files are specified, cat reads from standard input only.
