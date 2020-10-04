Epsilon-PyDev is a fork of Epsilon, the official (opensource) firmware for NumWorks calculators.

The aim of this project is simply to let you upload/download python files on your NumWorks calculator without unplugging and then re-plugging it.
Indeed, when programming from a PC for the NumWorks calculator, I prefer executing my programs directly on the calculator, and I was re-plugging my calculator once a minute.

## Diving in

I highly recommend you start by reading the [online documentation](https://www.numworks.com/resources/engineering/software/) for NumWorks Epsilon. You'll learn how to install the [SDK](https://www.numworks.com/resources/engineering/software/build/) and about the overall architecture of the Epsilon.

*Note:* If you want to build binaries for an installation through the browser, use the command `make MODEL=n0110 epsilon.onboarding.two_binaries`. They will then be available in `[Epsilon-PyDev directory]/output/release/device/n0110/` with the names `epsilon.onboarding.external.bin` and `epsilon.onboarding.internal.bin`.

## Contributing

If you run into an issue, I would be very happy if you would file a bug on the issue tracker.

I welcome contributions. For smaller changes just open a pull request straight away. For larger changes I recommend you open an issue first for discussion.

## License

Epsilon-PyDev is released under a [CC BY-NC-SA License](https://creativecommons.org/licenses/by-nc-sa/4.0/legalcode), just as NumWorks Epsilon.

NumWorks Epsilon is released under a [CC BY-NC-SA License](https://creativecommons.org/licenses/by-nc-sa/4.0/legalcode). NumWorks is a registered trademark.
