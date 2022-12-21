# neovimb

neovimb is a fork of [vimb](https://github.com/fanglingsu/vimb) but with a couple different tweaks like default settings oriented torwards privacy and a bit more config.h customizability.

## dependencies

- gtk+-3.0
- webkit2gtk-4.1
- gst-libav, gst-plugins-good (optional, for media decoding among other things)

## Install

Edit `config.mk` to match your local setup. You might need to do this if
you use another compiler, like tcc. Most people, however, will almost never
need to do this on systems like Ubuntu or Debian.

Edit `src/config.h` to match your personal preferences, like changing the
characters used in the loading bar, or the font.

The default `Makefile` will not overwrite your customised `config.h` with the
contents of `config.def.h`, even if it was updated in the latest git pull.
Therefore, you should always compare your customised `config.h` with
`config.def.h` and make sure you include any changes to the latter in your
`config.h`.

Run the following commands to compile and install neovimb (if necessary, the last one as
root). If you want to change the `PREFIX`, note that it's required to give it on both stages, build and install.

    make PREFIX=/usr
    make PREFIX=/usr install

To run neovimb without installation for testing it out use the 'runsandbox' make
target.

    make runsandbox

## Similar projects

- [vimb](https://github.com/fanglingsu/vimb)

## license

Information about the license are found in the file LICENSE.
