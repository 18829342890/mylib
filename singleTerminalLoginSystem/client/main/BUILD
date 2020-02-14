cc_import(
  name = "mylib",
  hdrs = ["logrecord.h"],
  static_library = "libmyLogLib.a",
)


cc_library(
    name = "commandLine",
    srcs = ["commandLine.cpp"],
    hdrs = ["commandLine.h"],
    copts = [
		"-IprocessCommandLine/"
	],
	deps = [
		"//processCommandLine:processCommandLineLib",
	]
)

cc_binary (
	name = "client",
	srcs = ["main.cpp"],
	copts = [
		"-IprocessCommandLine/"
	],
	deps = [
		":commandLine",
		"//processCommandLine:processCommandLineLib",
	],

)
