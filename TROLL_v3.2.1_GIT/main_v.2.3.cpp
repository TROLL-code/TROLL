





<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
  <link rel="dns-prefetch" href="https://assets-cdn.github.com">
  <link rel="dns-prefetch" href="https://avatars0.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars1.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars2.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars3.githubusercontent.com">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">



  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/frameworks-7db951ed87f8f6cbd3a9e89c294e300cf23c1a83ad7ae64c70b8f99b21031340.css" integrity="sha256-fblR7Yf49svTqeicKU4wDPI8GoOteuZMcLj5myEDE0A=" media="all" rel="stylesheet" />
  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github-7954b84ca7b0a5465456fcdde6ae9d90d5fc06dabd86ac2dcbcf1abe07cb846b.css" integrity="sha256-eVS4TKewpUZUVvzd5q6dkNX8Btq9hqwty88avgfLhGs=" media="all" rel="stylesheet" />
  
  
  
  

  <meta name="viewport" content="width=device-width">
  
  <title>TROLL/main_v.2.3.cpp at master · TROLL-code/TROLL</title>
  <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">

    
    <meta content="https://avatars3.githubusercontent.com/u/16562003?v=4&amp;s=400" property="og:image" /><meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="TROLL-code/TROLL" property="og:title" /><meta content="https://github.com/TROLL-code/TROLL" property="og:url" /><meta content="Contribute to TROLL development by creating an account on GitHub." property="og:description" />

  <link rel="assets" href="https://assets-cdn.github.com/">
  <link rel="web-socket" href="wss://live.github.com/_sockets/VjI6MjAwNzYwNTc4OjM1NjgwMzIyMzFhN2M3ZmNhNDg2NThkODNlMWRlYTVjNTI5OGJiZDc4NzQzMmE4MDJmODA0M2JjZDc0NDNmYjc=--39da806e5e3a407410b26b23171318d9601257b9">
  <meta name="pjax-timeout" content="1000">
  <link rel="sudo-modal" href="/sessions/sudo_modal">
  <meta name="request-id" content="08C0:1248A:49FF569:804A7FE:59A2A864" data-pjax-transient>
  

  <meta name="selected-link" value="repo_source" data-pjax-transient>

  <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
<meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
    <meta name="google-analytics" content="UA-3769691-2">

<meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="https://collector.githubapp.com/github-external/browser_event" name="octolytics-event-url" /><meta content="08C0:1248A:49FF569:804A7FE:59A2A864" name="octolytics-dimension-request_id" /><meta content="iad" name="octolytics-dimension-region_edge" /><meta content="iad" name="octolytics-dimension-region_render" /><meta content="16508309" name="octolytics-actor-id" /><meta content="jeromechave" name="octolytics-actor-login" /><meta content="d69ab927aa8aaefe52626b478ed262068f02e463897785e2bd57fb794a42edfd" name="octolytics-actor-hash" />
<meta content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" name="analytics-location" />




  <meta class="js-ga-set" name="dimension1" content="Logged In">


  

      <meta name="hostname" content="github.com">
  <meta name="user-login" content="jeromechave">

      <meta name="expected-hostname" content="github.com">
    <meta name="js-proxy-site-detection-payload" content="M2E5MDBlNjI0ODc1ZjcxODlkNWQzZjI2MTgyOTM3MTkxZGEzNDIxMGVhNjZjYTJhYWRkYjA1ZTRhMDY4NWNmNnx7InJlbW90ZV9hZGRyZXNzIjoiNzguMTI3LjE4Ni41MCIsInJlcXVlc3RfaWQiOiIwOEMwOjEyNDhBOjQ5RkY1Njk6ODA0QTdGRTo1OUEyQTg2NCIsInRpbWVzdGFtcCI6MTUwMzgzMjE3MiwiaG9zdCI6ImdpdGh1Yi5jb20ifQ==">

    <meta name="enabled-features" content="UNIVERSE_BANNER">

  <meta name="html-safe-nonce" content="82617c9a4a19dd077ee770ba4d79751e027df7b3">

  <meta http-equiv="x-pjax-version" content="2ab5ffca839147c258ee0a100d48cfa4">
  

      <link href="https://github.com/TROLL-code/TROLL/commits/master.atom" rel="alternate" title="Recent Commits to TROLL:master" type="application/atom+xml">

  <meta name="description" content="Contribute to TROLL development by creating an account on GitHub.">
  <meta name="go-import" content="github.com/TROLL-code/TROLL git https://github.com/TROLL-code/TROLL.git">

  <meta content="16562003" name="octolytics-dimension-user_id" /><meta content="TROLL-code" name="octolytics-dimension-user_login" /><meta content="49142579" name="octolytics-dimension-repository_id" /><meta content="TROLL-code/TROLL" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="49142579" name="octolytics-dimension-repository_network_root_id" /><meta content="TROLL-code/TROLL" name="octolytics-dimension-repository_network_root_nwo" /><meta content="true" name="octolytics-dimension-repository_explore_github_marketplace_ci_cta_shown" />


    <link rel="canonical" href="https://github.com/TROLL-code/TROLL/blob/master/main_v.2.3.cpp" data-pjax-transient>


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#000000">
  <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">

<meta name="theme-color" content="#1e2327">



  </head>

  <body class="logged-in env-production emoji-size-boost page-blob">
    

  <div class="position-relative js-header-wrapper ">
    <a href="#start-of-content" tabindex="1" class="bg-black text-white p-3 show-on-focus js-skip-to-content">Skip to content</a>
    <div id="js-pjax-loader-bar" class="pjax-loader-bar"><div class="progress"></div></div>

    
    
    



        
<header class="Header  f5" role="banner">
  <div class="d-flex px-3 flex-justify-between container-lg">
    <div class="d-flex flex-justify-between">
      <a class="header-logo-invertocat" href="https://github.com/" data-hotkey="g d" aria-label="Homepage" data-ga-click="Header, go to dashboard, icon:logo">
  <svg aria-hidden="true" class="octicon octicon-mark-github" height="32" version="1.1" viewBox="0 0 16 16" width="32"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>


    </div>

    <div class="HeaderMenu d-flex flex-justify-between flex-auto">
      <div class="d-flex">
            <div class="">
              <div class="header-search scoped-search site-scoped-search js-site-search" role="search">
  <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/TROLL-code/TROLL/search" class="js-site-search-form" data-scoped-search-url="/TROLL-code/TROLL/search" data-unscoped-search-url="/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <label class="form-control header-search-wrapper js-chromeless-input-container">
        <a href="/TROLL-code/TROLL/blob/master/main_v.2.3.cpp" class="header-search-scope no-underline">This repository</a>
      <input type="text"
        class="form-control header-search-input js-site-search-focus js-site-search-field is-clearable"
        data-hotkey="s"
        name="q"
        value=""
        placeholder="Search"
        aria-label="Search this repository"
        data-unscoped-placeholder="Search GitHub"
        data-scoped-placeholder="Search"
        autocapitalize="off">
        <input type="hidden" class="js-site-search-type-field" name="type" >
    </label>
</form></div>

            </div>

          <ul class="d-flex pl-2 flex-items-center text-bold list-style-none" role="navigation">
            <li>
              <a href="/pulls" aria-label="Pull requests you created" class="js-selected-navigation-item HeaderNavlink px-2" data-ga-click="Header, click, Nav menu - item:pulls context:user" data-hotkey="g p" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls">
                Pull requests
</a>            </li>
            <li>
              <a href="/issues" aria-label="Issues you created" class="js-selected-navigation-item HeaderNavlink px-2" data-ga-click="Header, click, Nav menu - item:issues context:user" data-hotkey="g i" data-selected-links="/issues /issues/assigned /issues/mentioned /issues">
                Issues
</a>            </li>
                <li>
                  <a href="/marketplace" class="js-selected-navigation-item HeaderNavlink px-2" data-ga-click="Header, click, Nav menu - item:marketplace context:user" data-selected-links=" /marketplace">
                    Marketplace
</a>                </li>
            <li>
              <a href="/explore" class="js-selected-navigation-item HeaderNavlink px-2" data-ga-click="Header, click, Nav menu - item:explore" data-selected-links="/explore /trending /trending/developers /integrations /integrations/feature/code /integrations/feature/collaborate /integrations/feature/ship showcases showcases_search showcases_landing /explore">
                Explore
</a>            </li>
          </ul>
      </div>

      <div class="d-flex">
        
<ul class="user-nav d-flex flex-items-center list-style-none" id="user-links">
  <li class="dropdown js-menu-container">
    <span class="d-inline-block  px-2">
      
      <a href="/notifications" aria-label="You have no unread notifications" class="notification-indicator tooltipped tooltipped-s  js-socket-channel js-notification-indicator" data-channel="notification-changed:16508309" data-ga-click="Header, go to notifications, icon:read" data-hotkey="g n">
          <span class="mail-status "></span>
          <svg aria-hidden="true" class="octicon octicon-bell" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"/></svg>
</a>
    </span>
  </li>

  <li class="dropdown js-menu-container">
    <a class="HeaderNavlink tooltipped tooltipped-s js-menu-target d-flex px-2 flex-items-center" href="/new"
       aria-label="Create new…"
       aria-expanded="false"
       aria-haspopup="true"
       data-ga-click="Header, create new, icon:add">
      <svg aria-hidden="true" class="octicon octicon-plus float-left" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 9H7v5H5V9H0V7h5V2h2v5h5z"/></svg>
      <span class="dropdown-caret mt-1"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <ul class="dropdown-menu dropdown-menu-sw">
        
<a class="dropdown-item" href="/new" data-ga-click="Header, create new repository">
  New repository
</a>

  <a class="dropdown-item" href="/new/import" data-ga-click="Header, import a repository">
    Import repository
  </a>

<a class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, create new gist">
  New gist
</a>

  <a class="dropdown-item" href="/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>



  <div class="dropdown-divider"></div>
  <div class="dropdown-header">
    <span title="TROLL-code/TROLL">This repository</span>
  </div>
    <a class="dropdown-item" href="/TROLL-code/TROLL/issues/new" data-ga-click="Header, create new issue">
      New issue
    </a>

      </ul>
    </div>
  </li>

  <li class="dropdown js-menu-container">

    <details class="dropdown-details d-flex pl-2 flex-items-center">
      <summary class="HeaderNavlink name"
        aria-label="View profile and more"
        data-ga-click="Header, show menu, icon:avatar">
        <img alt="@jeromechave" class="avatar" src="https://avatars1.githubusercontent.com/u/16508309?v=4&amp;s=40" height="20" width="20">
        <span class="dropdown-caret"></span>
      </summary>

      <ul class="dropdown-menu dropdown-menu-sw">
        <li class="dropdown-header header-nav-current-user css-truncate">
          Signed in as <strong class="css-truncate-target">jeromechave</strong>
        </li>

        <li class="dropdown-divider"></li>

        <li><a class="dropdown-item" href="/jeromechave" data-ga-click="Header, go to profile, text:your profile">
          Your profile
        </a></li>
        <li><a class="dropdown-item" href="/jeromechave?tab=stars" data-ga-click="Header, go to starred repos, text:your stars">
          Your stars
        </a></li>
          <li><a class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, your gists, text:your gists">Your Gists</a></li>

        <li class="dropdown-divider"></li>

        <li><a class="dropdown-item" href="https://help.github.com" data-ga-click="Header, go to help, text:help">
          Help
        </a></li>

        <li><a class="dropdown-item" href="/settings/profile" data-ga-click="Header, go to settings, icon:settings">
          Settings
        </a></li>

        <li><!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/logout" class="logout-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="BtyeLRfCTvd1zcvKVuzGGuYjQA4J9nnaUO/odlp0eMvlEqb29hq8GGpZFKuw3HB2M0GPIxZQxDzEJRKJZvN1jw==" /></div>
          <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
            Sign out
          </button>
        </form></li>
      </ul>
    </details>
  </li>
</ul>


        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/logout" class="sr-only right-0" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="sMhmTCVVf54hx/FKtWVmAOSVAONKb8u57jOQ4imnpzxTBl6XxI2NcT5TLitTVdBsMffPzlXJdl96+WodFSCqeA==" /></div>
          <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
            Sign out
          </button>
</form>      </div>
    </div>
  </div>
</header>


      

  </div>

  <div id="start-of-content" class="show-on-focus"></div>

    <div id="js-flash-container">
</div>



  <div role="main">
        <div itemscope itemtype="http://schema.org/SoftwareSourceCode">
    <div id="js-repo-pjax-container" data-pjax-container>
      



  



    <div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav">
      <div class="container repohead-details-container">

        <ul class="pagehead-actions">
  <li>
        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="lPcOjiCeR04vWCTAZDuc4ahVOiBJ7NAAfVFAC+NIZ/kkLc0wFCk7MDL5/dmcPdxDqX7zLPdlspo2qSS7jgPjkg==" /></div>      <input class="form-control" id="repository_id" name="repository_id" type="hidden" value="49142579" />

        <div class="select-menu js-menu-container js-select-menu">
          <a href="/TROLL-code/TROLL/subscription"
            class="btn btn-sm btn-with-count select-menu-button js-menu-target"
            role="button"
            aria-haspopup="true"
            aria-expanded="false"
            aria-label="Toggle repository notifications menu"
            data-ga-click="Repository, click Watch settings, action:blob#show">
            <span class="js-select-button">
                <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                Watch
            </span>
          </a>
            <a class="social-count js-social-count"
              href="/TROLL-code/TROLL/watchers"
              aria-label="2 users are watching this repository">
              2
            </a>

        <div class="select-menu-modal-holder">
          <div class="select-menu-modal subscription-menu-modal js-menu-content">
            <div class="select-menu-header js-navigation-enable" tabindex="-1">
              <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
              <span class="select-menu-title">Notifications</span>
            </div>

              <div class="select-menu-list js-navigation-container" role="menu">

                <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                    <span class="select-menu-item-heading">Not watching</span>
                    <span class="description">Be notified when participating or @mentioned.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                      Watch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                    <span class="select-menu-item-heading">Watching</span>
                    <span class="description">Be notified of all conversations.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                        Unwatch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input id="do_ignore" name="do" type="radio" value="ignore" />
                    <span class="select-menu-item-heading">Ignoring</span>
                    <span class="description">Never be notified.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-mute" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8 2.81v10.38c0 .67-.81 1-1.28.53L3 10H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h2l3.72-3.72C7.19 1.81 8 2.14 8 2.81zm7.53 3.22l-1.06-1.06-1.97 1.97-1.97-1.97-1.06 1.06L11.44 8 9.47 9.97l1.06 1.06 1.97-1.97 1.97 1.97 1.06-1.06L13.56 8l1.97-1.97z"/></svg>
                        Stop ignoring
                    </span>
                  </div>
                </div>

              </div>

            </div>
          </div>
        </div>
</form>
  </li>

  <li>
    
  <div class="js-toggler-container js-social-container starring-container ">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/TROLL-code/TROLL/unstar" class="starred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="OFGlXEJFUPJL6mIrRQyftO1pV2o82EJDnDtJGtCThekB/C0OA8IAOe6z0xL7hfH8PSElbzoHlmF55yw2CoPKKA==" /></div>
      <button
        type="submit"
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Unstar this repository" title="Unstar TROLL-code/TROLL"
        data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">
        <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
        Unstar
      </button>
        <a class="social-count js-social-count" href="/TROLL-code/TROLL/stargazers"
           aria-label="1 user starred this repository">
          1
        </a>
</form>
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/TROLL-code/TROLL/star" class="unstarred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="aROjhBO1bSYIe3eCz+3Bip9SVz4b6rsSPztBubO84se/6OB4CZSjsf4mBJvcd7hL75Y783PpQRKRZNer3kTWBw==" /></div>
      <button
        type="submit"
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Star this repository" title="Star TROLL-code/TROLL"
        data-ga-click="Repository, click star button, action:blob#show; text:Star">
        <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
        Star
      </button>
        <a class="social-count js-social-count" href="/TROLL-code/TROLL/stargazers"
           aria-label="1 user starred this repository">
          1
        </a>
</form>  </div>

  </li>

  <li>
          <a href="#fork-destination-box" class="btn btn-sm btn-with-count"
              title="Fork your own copy of TROLL-code/TROLL to your account"
              aria-label="Fork your own copy of TROLL-code/TROLL to your account"
              rel="facebox"
              data-ga-click="Repository, show fork modal, action:blob#show; text:Fork">
              <svg aria-hidden="true" class="octicon octicon-repo-forked" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
            Fork
          </a>

          <div id="fork-destination-box" style="display: none;">
            <h2 class="facebox-header" data-facebox-id="facebox-header">Where should we fork this repository?</h2>
            <include-fragment src=""
                class="js-fork-select-fragment fork-select-fragment"
                data-url="/TROLL-code/TROLL/fork?fragment=1">
              <img alt="Loading" height="64" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-128.gif" width="64" />
            </include-fragment>
          </div>

    <a href="/TROLL-code/TROLL/network" class="social-count"
       aria-label="0 users forked this repository">
      0
    </a>
  </li>
</ul>

        <h1 class="public ">
  <svg aria-hidden="true" class="octicon octicon-repo" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
  <span class="author" itemprop="author"><a href="/TROLL-code" class="url fn" rel="author">TROLL-code</a></span><!--
--><span class="path-divider">/</span><!--
--><strong itemprop="name"><a href="/TROLL-code/TROLL" data-pjax="#js-repo-pjax-container">TROLL</a></strong>

</h1>

      </div>
      <div class="container">
        
<nav class="reponav js-repo-nav js-sidenav-container-pjax"
     itemscope
     itemtype="http://schema.org/BreadcrumbList"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/TROLL-code/TROLL" class="js-selected-navigation-item selected reponav-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /TROLL-code/TROLL" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-code" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"/></svg>
      <span itemprop="name">Code</span>
      <meta itemprop="position" content="1">
</a>  </span>

    <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
      <a href="/TROLL-code/TROLL/issues" class="js-selected-navigation-item reponav-item" data-hotkey="g i" data-selected-links="repo_issues repo_labels repo_milestones /TROLL-code/TROLL/issues" itemprop="url">
        <svg aria-hidden="true" class="octicon octicon-issue-opened" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M7 2.3c3.14 0 5.7 2.56 5.7 5.7s-2.56 5.7-5.7 5.7A5.71 5.71 0 0 1 1.3 8c0-3.14 2.56-5.7 5.7-5.7zM7 1C3.14 1 0 4.14 0 8s3.14 7 7 7 7-3.14 7-7-3.14-7-7-7zm1 3H6v5h2V4zm0 6H6v2h2v-2z"/></svg>
        <span itemprop="name">Issues</span>
        <span class="Counter">0</span>
        <meta itemprop="position" content="2">
</a>    </span>

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/TROLL-code/TROLL/pulls" class="js-selected-navigation-item reponav-item" data-hotkey="g p" data-selected-links="repo_pulls /TROLL-code/TROLL/pulls" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-git-pull-request" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0 0 10 15a1.993 1.993 0 0 0 1-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v6.56A1.993 1.993 0 0 0 2 15a1.993 1.993 0 0 0 1-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
      <span itemprop="name">Pull requests</span>
      <span class="Counter">0</span>
      <meta itemprop="position" content="3">
</a>  </span>

    <a href="/TROLL-code/TROLL/projects" class="js-selected-navigation-item reponav-item" data-selected-links="repo_projects new_repo_project repo_project /TROLL-code/TROLL/projects">
      <svg aria-hidden="true" class="octicon octicon-project" height="16" version="1.1" viewBox="0 0 15 16" width="15"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 0 0-1 1v14a1 1 0 0 0 1 1h13a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z"/></svg>
      Projects
      <span class="Counter" >0</span>
</a>
    <a href="/TROLL-code/TROLL/wiki" class="js-selected-navigation-item reponav-item" data-hotkey="g w" data-selected-links="repo_wiki /TROLL-code/TROLL/wiki">
      <svg aria-hidden="true" class="octicon octicon-book" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M3 5h4v1H3V5zm0 3h4V7H3v1zm0 2h4V9H3v1zm11-5h-4v1h4V5zm0 2h-4v1h4V7zm0 2h-4v1h4V9zm2-6v9c0 .55-.45 1-1 1H9.5l-1 1-1-1H2c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h5.5l1 1 1-1H15c.55 0 1 .45 1 1zm-8 .5L7.5 3H2v9h6V3.5zm7-.5H9.5l-.5.5V12h6V3z"/></svg>
      Wiki
</a>
      <a href="/TROLL-code/TROLL/settings" class="js-selected-navigation-item reponav-item" data-selected-links="repo_settings repo_branch_settings hooks integration_installations /TROLL-code/TROLL/settings">
        <svg aria-hidden="true" class="octicon octicon-gear" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"/></svg>
        Settings
</a>
    <div class="reponav-dropdown js-menu-container">
      <button type="button" class="btn-link reponav-item reponav-dropdown js-menu-target " data-no-toggle aria-expanded="false" aria-haspopup="true">
        Insights
        <svg aria-hidden="true" class="octicon octicon-triangle-down v-align-middle text-gray" height="11" version="1.1" viewBox="0 0 12 16" width="8"><path fill-rule="evenodd" d="M0 5l6 6 6-6z"/></svg>
      </button>
      <div class="dropdown-menu-content js-menu-content">
        <div class="dropdown-menu dropdown-menu-sw">
            <a class="dropdown-item" href="/TROLL-code/TROLL/community" data-skip-pjax>
              <svg aria-hidden="true" class="octicon octicon-heart" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11.2 3c-.52-.63-1.25-.95-2.2-1-.97 0-1.69.42-2.2 1-.51.58-.78.92-.8 1-.02-.08-.28-.42-.8-1-.52-.58-1.17-1-2.2-1-.95.05-1.69.38-2.2 1-.52.61-.78 1.28-.8 2 0 .52.09 1.52.67 2.67C1.25 8.82 3.01 10.61 6 13c2.98-2.39 4.77-4.17 5.34-5.33C11.91 6.51 12 5.5 12 5c-.02-.72-.28-1.39-.8-2.02V3z"/></svg>
              <span itemprop="name">Community</span>
            </a>
          <a class="dropdown-item" href="/TROLL-code/TROLL/pulse" data-skip-pjax>
            <svg aria-hidden="true" class="octicon octicon-pulse" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M11.5 8L8.8 5.4 6.6 8.5 5.5 1.6 2.38 8H0v2h3.6l.9-1.8.9 5.4L9 8.5l1.6 1.5H14V8z"/></svg>
            Pulse
          </a>
          <a class="dropdown-item" href="/TROLL-code/TROLL/graphs" data-skip-pjax>
            <svg aria-hidden="true" class="octicon octicon-graph" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z"/></svg>
            Graphs
          </a>
        </div>
      </div>
    </div>
</nav>

      </div>
    </div>

<div class="container new-discussion-timeline experiment-repo-nav">
  <div class="repository-content">

    
  <a href="/TROLL-code/TROLL/blob/511e237066af6695f3673e1a9510f0e220acc574/main_v.2.3.cpp" class="d-none js-permalink-shortcut" data-hotkey="y">Permalink</a>

  <!-- blob contrib key: blob_contributors:v21:e10d950399bb6086a3e638c4ab73eb27 -->

  <div class="file-navigation js-zeroclipboard-container">
    
<div class="select-menu branch-select-menu js-menu-container js-select-menu float-left">
  <button class=" btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    
    type="button" aria-label="Switch branches or tags" aria-expanded="false" aria-haspopup="true">
      <i>Branch:</i>
      <span class="js-select-button css-truncate-target">master</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax>

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Find or create a branch…" id="context-commitish-filter-field" class="form-control js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Find or create a branch…" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/TROLL-code/TROLL/blob/master/main_v.2.3.cpp"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                master
              </span>
            </a>
        </div>

          <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/TROLL-code/TROLL/branches" class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="ymMvFWfjGkWWvXhiOFSYnBvZdWRfzMSM8uIaMhV3a54NNkrPJNe3AxYop+nJHqXWRawHQp28f0z64QyWDIv5Mg==" /></div>
          <svg aria-hidden="true" class="octicon octicon-git-branch select-menu-item-icon" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path fill-rule="evenodd" d="M10 5c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v.3c-.02.52-.23.98-.63 1.38-.4.4-.86.61-1.38.63-.83.02-1.48.16-2 .45V4.72a1.993 1.993 0 0 0-1-3.72C.88 1 0 1.89 0 3a2 2 0 0 0 1 1.72v6.56c-.59.35-1 .99-1 1.72 0 1.11.89 2 2 2 1.11 0 2-.89 2-2 0-.53-.2-1-.53-1.36.09-.06.48-.41.59-.47.25-.11.56-.17.94-.17 1.05-.05 1.95-.45 2.75-1.25S8.95 7.77 9 6.73h-.02C9.59 6.37 10 5.73 10 5zM2 1.8c.66 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2C1.35 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2zm0 12.41c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm6-8c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
            <div class="select-menu-item-text">
              <span class="select-menu-item-heading">Create branch: <span class="js-new-item-name"></span></span>
              <span class="description">from ‘master’</span>
            </div>
            <input type="hidden" name="name" id="name" class="js-new-item-value">
            <input type="hidden" name="branch" id="branch" value="master">
            <input type="hidden" name="path" id="path" value="main_v.2.3.cpp">
</form>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

    <div class="BtnGroup float-right">
      <a href="/TROLL-code/TROLL/find/master"
            class="js-pjax-capture-input btn btn-sm BtnGroup-item"
            data-pjax
            data-hotkey="t">
        Find file
      </a>
      <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm BtnGroup-item tooltipped tooltipped-s" data-copied-hint="Copied!" type="button">Copy path</button>
    </div>
    <div class="breadcrumb js-zeroclipboard-target">
      <span class="repo-root js-repo-root"><span class="js-path-segment"><a href="/TROLL-code/TROLL"><span>TROLL</span></a></span></span><span class="separator">/</span><strong class="final-path">main_v.2.3.cpp</strong>
    </div>
  </div>


  <include-fragment class="commit-tease" src="/TROLL-code/TROLL/contributors/master/main_v.2.3.cpp">
    <div>
      Fetching contributors&hellip;
    </div>

    <div class="commit-tease-contributors">
      <img alt="" class="loader-loading float-left" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif" width="16" />
      <span class="loader-error">Cannot retrieve contributors at this time</span>
    </div>
</include-fragment>
  <div class="file">
    <div class="file-header">
  <div class="file-actions">

    <div class="BtnGroup">
      <a href="/TROLL-code/TROLL/raw/master/main_v.2.3.cpp" class="btn btn-sm BtnGroup-item" id="raw-url">Raw</a>
        <a href="/TROLL-code/TROLL/blame/master/main_v.2.3.cpp" class="btn btn-sm js-update-url-with-hash BtnGroup-item" data-hotkey="b">Blame</a>
      <a href="/TROLL-code/TROLL/commits/master/main_v.2.3.cpp" class="btn btn-sm BtnGroup-item" rel="nofollow">History</a>
    </div>

        <a class="btn-octicon tooltipped tooltipped-nw"
           href="github-mac://openRepo/https://github.com/TROLL-code/TROLL?branch=master&amp;filepath=main_v.2.3.cpp"
           aria-label="Open this file in GitHub Desktop"
           data-ga-click="Repository, open with desktop, type:mac">
            <svg aria-hidden="true" class="octicon octicon-device-desktop" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M15 2H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h5.34c-.25.61-.86 1.39-2.34 2h8c-1.48-.61-2.09-1.39-2.34-2H15c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm0 9H1V3h14v8z"/></svg>
        </a>

        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/TROLL-code/TROLL/edit/master/main_v.2.3.cpp" class="inline-form js-update-url-with-hash" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="g7lmHs1xGqjvwQ870IDaoOLCrQhdFeanwVe0qRD73iLdW4LnSMdVrdu7zbccJzdy7QsyTCxsWmr+n+sqYj5LRA==" /></div>
          <button class="btn-octicon tooltipped tooltipped-nw" type="submit"
            aria-label="Edit this file" data-hotkey="e" data-disable-with>
            <svg aria-hidden="true" class="octicon octicon-pencil" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 0 1 1.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z"/></svg>
          </button>
</form>        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/TROLL-code/TROLL/delete/master/main_v.2.3.cpp" class="inline-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="IY/6e2Kyb94HrhsRijlYBGPAfXl3YDA8kgZDnP4RzBAkFDU/BwVI1G3186m/C3c/Zfqf42u/rflk42nINGpdEA==" /></div>
          <button class="btn-octicon btn-octicon-danger tooltipped tooltipped-nw" type="submit"
            aria-label="Delete this file" data-disable-with>
            <svg aria-hidden="true" class="octicon octicon-trashcan" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 2H9c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1H2c-.55 0-1 .45-1 1v1c0 .55.45 1 1 1v9c0 .55.45 1 1 1h7c.55 0 1-.45 1-1V5c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm-1 12H3V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9zm1-10H2V3h9v1z"/></svg>
          </button>
</form>  </div>

  <div class="file-info">
      3042 lines (2477 sloc)
      <span class="file-info-divider"></span>
    132 KB
  </div>
</div>

    

  <div itemprop="text" class="blob-wrapper data type-c">
      <table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>####################################################################</span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###  TROLL</span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###  Individual-based forest dynamics simulator</span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    Version 1: Jerome Chave</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    Version 2: Isabelle Marechaux &amp; Jerome Chave</span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###  History:</span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 0.1 --- JC - 22 Sep 97</span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 0.2 --- JC - 06 Oct 97</span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 0.3 --- JC - 11-14 Nov 97</span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 1.0 --- JC - stable version Chave, Ecological Modelling (1999)</span></td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 1.1 --- JC - 02-30 Sep 98</span></td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 1.2 --- JC - 22 Jan 00</span></td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###	version 1.3 --- JC - 28 Sep 01 stable version Chave, American Naturalist (2001)</span></td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###</span></td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###	version 2.0 --- JC - 23 Mar 11 (physiology-based version, translation of comments into English)</span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 2.01 --- IM - oct-nov 13</span></td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 2.02 --- IM - apr-may 2015</span></td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 2.03 --- IM - jul 2015</span></td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 2.04 --- IM - jul 2015 (monthly timestep)</span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 2.1 --- IM - dec 2015 (undef/defined alternative versions)</span></td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 2.11 --- IM - jan 2016 (timestep better used and two input files - one for species, one for climate and environment parameters)</span></td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 2.12 --- JC - jan 2016 porting to GitHub for social coding, check of the MPI routines and update, new header for code, trivia: reindentation (orphan lines removed)</span></td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 2.2 --- IM - may 2016 core changes in: daily coupling with environment; respiration; treefall module</span></td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    version 2.3 --- FF - oct-nov 2016: bug fixing (including UpdateSeed() bug), general reworking of code, changes in CalcLAI(), initialisation from data, toolbox with alternative fine flux calculation (cf. end of script)</span></td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###</span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####################################################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span></span></td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> Glossary: MPI = Message Passing Interface. Software for sharing information</span></td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> across processors in parallel computers. If global variable MPI is not defined,</span></td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> TROLL functions on one processor only.</span></td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">undef</span> MPI              <span class="pl-c"><span class="pl-c">/*</span> If flag MPI defined, parallel routines (MPI software) are switched on <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">undef</span> easyMPI          <span class="pl-c"><span class="pl-c">/*</span> If flag easyMPI defined, parallel routine for fast search of parameter space are switched on <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">undef</span> toolbox          <span class="pl-c"><span class="pl-c">/*</span> never to be defined! Toolbox is an assortment of alternative formulations of TROLL procedures, attached to the code <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Libraries <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>cstdio<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>iostream<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>fstream<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>cstdlib<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>string<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>limits<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>ctime<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>cmath<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>mpi.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">ifdef</span> easyMPI</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>mpi.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line"><span class="pl-k">using</span> <span class="pl-k">namespace</span> <span class="pl-en">std</span><span class="pl-k">;</span></td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Global constants (e.g. PI and various derivatives...) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">define</span> <span class="pl-en">PI</span> <span class="pl-c1">3.141592654</span></td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">define</span> <span class="pl-en">twoPi</span> <span class="pl-c1">6.2831853071</span></td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">define</span> <span class="pl-en">Pis2</span> <span class="pl-c1">1.570796327</span></td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">define</span> <span class="pl-en">iPi</span> <span class="pl-c1">0.3183099</span></td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line"><span class="pl-k">char</span> buffer[<span class="pl-c1">256</span>], inputfile[<span class="pl-c1">256</span>], outputinfo[<span class="pl-c1">256</span>], inputfile_data[<span class="pl-c1">256</span>], *<span class="pl-en">bufi</span>(<span class="pl-c1">0</span>), *buf(<span class="pl-c1">0</span>), *bufi_data(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> random number generators <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line"><span class="pl-k">double</span> <span class="pl-en">genrand2</span>(<span class="pl-k">void</span>);</td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">sgenrand2</span>(<span class="pl-k">unsigned</span> <span class="pl-k">long</span>);</td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line"><span class="pl-k">unsigned</span> <span class="pl-k">long</span> <span class="pl-en">genrand2i</span>(<span class="pl-k">void</span>);</td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">sgenrand2i</span>(<span class="pl-k">unsigned</span> <span class="pl-k">long</span>);</td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> file output streams <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code blob-code-inner js-file-line">fstream out,out2;</td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code blob-code-inner js-file-line">fstream output[<span class="pl-c1">37</span>];</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> User control <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> options can be turned on (1) or off (0). This comes, however, at computational costs. Where routines have to be called frequently, if-conditioning should be done as far outside the loop as possible (e.g. for DAILYLIGHT outside voxel loops) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> currenly, options are set below, but inclusion in parameter sheet needed (for control from R) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code blob-code-inner js-file-line"><span class="pl-k">bool</span></td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code blob-code-inner js-file-line">_BASICTREEFALL=<span class="pl-c1">0</span>,       <span class="pl-c"><span class="pl-c">/*</span> if defined: treefall is a source of tree death (and if TREEFALL not defined, this is modeled through simple comparison between tree height and a threshold t_Ct, if not defined, treefall is not represented as a separated and independent source of death, but instead, all tree death are due to the deathrate value) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code blob-code-inner js-file-line">_TREEFALL=<span class="pl-c1">0</span>,            <span class="pl-c"><span class="pl-c">/*</span> computation of the force field if TREEFALL is defined, neighboring trees contribute to fell each tree <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code blob-code-inner js-file-line">_DAILYLIGHT=<span class="pl-c1">1</span>,          <span class="pl-c"><span class="pl-c">/*</span> if defined: the rate of carbon assimilation integrates an average daily fluctuation of light (thanks to GPPDaily). Should be defined to ensure an appropriate use of Farquhar model <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code blob-code-inner js-file-line">_SEEDTRADEOFF=<span class="pl-c1">0</span>,        <span class="pl-c"><span class="pl-c">/*</span> if defined: the number of seeds produced by each tree is determined by the tree NPP allocated to reproduction and the species seed mass, otherwise the number of seeds is fixed; besides, seedling recruitment in one site is not made by randomly and &#39;equiprobably&#39; picking one species among the seeds present at that site but the probability of recruitment among the present seeds is proportional to the number of seeds (in s_Seed[site]) time the seed mass of each species <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code blob-code-inner js-file-line">_NDD=<span class="pl-c1">0</span>,                 <span class="pl-c"><span class="pl-c">/*</span> if defined, negative density dependant processes affect both the probability of seedling recruitment and the local tree death rate. The term of density-dependance is computed as the sum of conspecific tree basal area divided by their distance to the focal tree within a neighbourhood (circle of radius 15m) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code blob-code-inner js-file-line">_OUTPUT_reduced=<span class="pl-c1">1</span>,      <span class="pl-c"><span class="pl-c">/*</span> reduced set of ouput files <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code blob-code-inner js-file-line">_OUTPUT_last100=<span class="pl-c1">0</span>,      <span class="pl-c"><span class="pl-c">/*</span> output that tracks the last 100 years of the simulation for the whole grid (2D) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code blob-code-inner js-file-line">_OUTPUT_fullLAI=<span class="pl-c1">0</span>,       <span class="pl-c"><span class="pl-c">/*</span> output of full final voxel field <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code blob-code-inner js-file-line">_FromData=<span class="pl-c1">0</span>;            <span class="pl-c"><span class="pl-c">/*</span> if defined, an additional input file can be provided to start simulations from an existing data set or a simulated data set (5 parameters are needed: x and y coordinates, dbh, species_label, species <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>******************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Parameters of the simulation <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>******************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span> sites,          <span class="pl-c"><span class="pl-c">/*</span> number of sites <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code blob-code-inner js-file-line">cols,               <span class="pl-c"><span class="pl-c">/*</span> nb of columns <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code blob-code-inner js-file-line">rows,               <span class="pl-c"><span class="pl-c">/*</span> nb of lines <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code blob-code-inner js-file-line">numesp,             <span class="pl-c"><span class="pl-c">/*</span> nb of species <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code blob-code-inner js-file-line">iterperyear,        <span class="pl-c"><span class="pl-c">/*</span> nb of iter in a year (=12 if monthly timestep, =365 if daily timestep) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code blob-code-inner js-file-line">nbiter,             <span class="pl-c"><span class="pl-c">/*</span> total nb of timesteps <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code blob-code-inner js-file-line">iter,               <span class="pl-c"><span class="pl-c">/*</span> current timestep <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code blob-code-inner js-file-line">nbout,              <span class="pl-c"><span class="pl-c">/*</span> nb of outputs <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code blob-code-inner js-file-line">freqout;            <span class="pl-c"><span class="pl-c">/*</span> frequency HDF outputs <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span> HEIGHT,         <span class="pl-c"><span class="pl-c">/*</span> max height (in m) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code blob-code-inner js-file-line">dbhmaxincm,         <span class="pl-c"><span class="pl-c">/*</span> max DBH times 100 (ie dbh in cm *100 = in meters) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code blob-code-inner js-file-line">RMAX,               <span class="pl-c"><span class="pl-c">/*</span> max crown radius <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code blob-code-inner js-file-line">SBORD;              <span class="pl-c"><span class="pl-c">/*</span> RMAX*cols <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> NV,           <span class="pl-c"><span class="pl-c">/*</span> nb cells per m (vertical) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code blob-code-inner js-file-line">NH,                 <span class="pl-c"><span class="pl-c">/*</span> nb cells per m (horizontal) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code blob-code-inner js-file-line">LV,                 <span class="pl-c"><span class="pl-c">/*</span> LV = 1.0/NV <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code blob-code-inner js-file-line">LH,                 <span class="pl-c"><span class="pl-c">/*</span> LH = 1.0/NH <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code blob-code-inner js-file-line">timestep;           <span class="pl-c"><span class="pl-c">/*</span> duration of one timestep (in years)=1/iterperyear <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> p_nonvert,    <span class="pl-c"><span class="pl-c">/*</span> ratio of non-vertical incident light <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code blob-code-inner js-file-line">Cseedrain,          <span class="pl-c"><span class="pl-c">/*</span> constant used to scale total seed rain per hectare across species <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code blob-code-inner js-file-line">nbs0,               <span class="pl-c"><span class="pl-c">/*</span> nb of seeds produced and dispersed by each mature tree when SEEDTRADEOFF is not defined <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code blob-code-inner js-file-line">Cair,               <span class="pl-c"><span class="pl-c">/*</span> atmosphericCO2 concentration, if we aim at making CO2 vary (scenarios), CO2 will have to have the same status as other climatic variables  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code blob-code-inner js-file-line">iCair;              <span class="pl-c"><span class="pl-c">/*</span> inverse of Cair <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> new version 2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> daily_light[<span class="pl-c1">24</span>];    <span class="pl-c"><span class="pl-c">/*</span> normalized (ie between 0 and 1) daily light variation (used if DAILYLIGHT defined) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> daily_vpd[<span class="pl-c1">24</span>];      <span class="pl-c"><span class="pl-c">/*</span> normalized (ie between 0 and 1) daily vpd variation (used if DAILYLIGHT defined) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> daily_T[<span class="pl-c1">24</span>];        <span class="pl-c"><span class="pl-c">/*</span> normalized (ie between 0 and 1) daily T variation (used if DAILYLIGHTdefined) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>*******************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Environmental variables of the simulation <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>*******************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Climate input data  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> these climate input data are given in the input file, its structure depends on the timestep and scenario used for the simulation <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> new version 2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">Temperature</span>(<span class="pl-c1">0</span>);                      <span class="pl-c"><span class="pl-c">/*</span> in degree Celsius <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">DailyMaxTemperature</span>(<span class="pl-c1">0</span>);              <span class="pl-c"><span class="pl-c">/*</span> in degree Celsius <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">NightTemperature</span>(<span class="pl-c1">0</span>);                 <span class="pl-c"><span class="pl-c">/*</span> in degree Celsius <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">Rainfall</span>(<span class="pl-c1">0</span>);                         <span class="pl-c"><span class="pl-c">/*</span> in mm <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">WindSpeed</span>(<span class="pl-c1">0</span>);                        <span class="pl-c"><span class="pl-c">/*</span> in m/s <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">MaxIrradiance</span>(<span class="pl-c1">0</span>);                    <span class="pl-c"><span class="pl-c">/*</span> in W/m2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">MeanIrradiance</span>(<span class="pl-c1">0</span>);                   <span class="pl-c"><span class="pl-c">/*</span> in W/m2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="LC147" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">SaturatedVapourPressure</span>(<span class="pl-c1">0</span>);          <span class="pl-c"><span class="pl-c">/*</span> in kPa <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="LC148" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">VapourPressure</span>(<span class="pl-c1">0</span>);                   <span class="pl-c"><span class="pl-c">/*</span> in kPa <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="LC149" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">VapourPressureDeficit</span>(<span class="pl-c1">0</span>);            <span class="pl-c"><span class="pl-c">/*</span> in kPa <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="LC150" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">DailyVapourPressureDeficit</span>(<span class="pl-c1">0</span>);       <span class="pl-c"><span class="pl-c">/*</span> in kPa <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="LC151" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">DailyMaxVapourPressureDeficit</span>(<span class="pl-c1">0</span>);    <span class="pl-c"><span class="pl-c">/*</span> in kPa <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="LC152" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="LC153" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="LC154" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**** Environmental variables, changed at each timestep ****<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="LC155" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> temp,         <span class="pl-c"><span class="pl-c">/*</span> Temperature <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="LC156" class="blob-code blob-code-inner js-file-line">tmax,               <span class="pl-c"><span class="pl-c">/*</span> Daily max temperature <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="LC157" class="blob-code blob-code-inner js-file-line">tnight,             <span class="pl-c"><span class="pl-c">/*</span> Night mean temperature <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="LC158" class="blob-code blob-code-inner js-file-line">precip,             <span class="pl-c"><span class="pl-c">/*</span> Rainfall  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="LC159" class="blob-code blob-code-inner js-file-line">WS,                 <span class="pl-c"><span class="pl-c">/*</span> WindSpeed <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="LC160" class="blob-code blob-code-inner js-file-line">Wmax,               <span class="pl-c"><span class="pl-c">/*</span> Daily max irradiance (average for timestep) (in micromol PAR photon/m^2/s)<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="LC161" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> used in the photosynthesis part. see if it would not be better to have value in the right unit in the input file, however W/m2 is the common unit of meteo station <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="LC162" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> below: new version 2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="LC163" class="blob-code blob-code-inner js-file-line">Wmean,              <span class="pl-c"><span class="pl-c">/*</span> mean irradiance (in W/m2)<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="LC164" class="blob-code blob-code-inner js-file-line">e_s,                <span class="pl-c"><span class="pl-c">/*</span> SaturatedVapourPressure <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="LC165" class="blob-code blob-code-inner js-file-line">e_a,                <span class="pl-c"><span class="pl-c">/*</span> VapourPressure<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="LC166" class="blob-code blob-code-inner js-file-line">VPDbasic,           <span class="pl-c"><span class="pl-c">/*</span> VapourPressureDeficit <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="LC167" class="blob-code blob-code-inner js-file-line">VPDday,             <span class="pl-c"><span class="pl-c">/*</span> DailyVapourPressureDeficit <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="LC168" class="blob-code blob-code-inner js-file-line">VPDmax;             <span class="pl-c"><span class="pl-c">/*</span> DailyMaxVapourPressureDeficit <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="LC169" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="LC170" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="LC171" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="LC172" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>  Common variables for the species    <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="LC173" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> (simplifies initial version 170199)  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="LC174" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="LC175" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="LC176" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>int Cm;           /* Treefall threshold */</span></td>
      </tr>
      <tr>
        <td id="L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="LC177" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> klight,       <span class="pl-c"><span class="pl-c">/*</span> light absorption rate or extinction cefficient used in Beer-Lambert law to compute light within the canopy <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="LC178" class="blob-code blob-code-inner js-file-line">phi,                <span class="pl-c"><span class="pl-c">/*</span> apparent quantum yield (in micromol C/micromol photon). phi is the quantum yield multiplied by leaf absorbance (in the literature, the quantum yield is often given per absorbed light flux, so one should multiply incident PPFD by leaf absorbance, see Poorter et al American Journal of Botany (assumed to be 0.91 for tropical tree species). Even though holding phi constant across species is widely assumed, in reality, phi varies across species and environmental conditions (see eg Domingues et al 2014 Plant Ecology &amp; Diversity) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="LC179" class="blob-code blob-code-inner js-file-line">alpha,              <span class="pl-c"><span class="pl-c">/*</span> apparent quantum yield to electron transport in mol e-/mol photons, equal to the true quantum yield multiplied by the leaf absorbance -- v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="LC180" class="blob-code blob-code-inner js-file-line">vC,                 <span class="pl-c"><span class="pl-c">/*</span> variance of treefall threshold <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="LC181" class="blob-code blob-code-inner js-file-line">H0,                 <span class="pl-c"><span class="pl-c">/*</span> initial height (in m) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="LC182" class="blob-code blob-code-inner js-file-line">DBH0,               <span class="pl-c"><span class="pl-c">/*</span> initial DBH (in m) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="LC183" class="blob-code blob-code-inner js-file-line">de0,                <span class="pl-c"><span class="pl-c">/*</span> initial crown Crown_Depth (in m) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="LC184" class="blob-code blob-code-inner js-file-line">de1,                <span class="pl-c"><span class="pl-c">/*</span> Crown_Depth/height slope <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="LC185" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> fallocwood and falloccanopy new -- v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="LC186" class="blob-code blob-code-inner js-file-line">fallocwood,         <span class="pl-c"><span class="pl-c">/*</span> fraction of biomass allocated to above ground wood (branches+stem) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="LC187" class="blob-code blob-code-inner js-file-line">falloccanopy,       <span class="pl-c"><span class="pl-c">/*</span> fraction of biomass allocated to canopy (leaves + reproductive organs + twigs) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="LC188" class="blob-code blob-code-inner js-file-line">dens,               <span class="pl-c"><span class="pl-c">/*</span> initial leaf density (in m^2/m^3) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="LC189" class="blob-code blob-code-inner js-file-line">ra1,                <span class="pl-c"><span class="pl-c">/*</span> crown radius - dbh slope <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="LC190" class="blob-code blob-code-inner js-file-line">ra0,                <span class="pl-c"><span class="pl-c">/*</span> initial crown radius (in m) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="LC191" class="blob-code blob-code-inner js-file-line">m,                  <span class="pl-c"><span class="pl-c">/*</span> basal death rate <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="LC192" class="blob-code blob-code-inner js-file-line">m1;                 <span class="pl-c"><span class="pl-c">/*</span> deathrate-wsg slope -- new v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="LC193" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="LC194" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="LC195" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> **<span class="pl-en">LAI3D</span>(<span class="pl-c1">0</span>);   <span class="pl-c"><span class="pl-c">/*</span> leaf density (per volume unit) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="LC196" class="blob-code blob-code-inner js-file-line"><span class="pl-k">unsigned</span> <span class="pl-k">short</span> *Thurt[<span class="pl-c1">3</span>];            <span class="pl-c"><span class="pl-c">/*</span> Treefall field <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="LC197" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="LC198" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span>    *<span class="pl-en">SPECIES_GERM</span> (<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="LC199" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span>  *<span class="pl-en">PROB_S</span> (<span class="pl-c1">0</span>); <span class="pl-c"><span class="pl-c">/*</span> _SEEDTRADEOFF <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="LC200" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> tempRday;     <span class="pl-c"><span class="pl-c">/*</span> temporary variable used for the computation of leaf day respiration -- new v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="LC201" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="LC202" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="LC203" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>*************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="LC204" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Diagnostics <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="LC205" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>*************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="LC206" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="LC207" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span> nbdead_n1,             <span class="pl-c"><span class="pl-c">/*</span> nb deaths other than treefall dbh &gt; 1 cm, computed at each timestep <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="LC208" class="blob-code blob-code-inner js-file-line">nbdead_n10,                <span class="pl-c"><span class="pl-c">/*</span> nb deaths other than treefall dbh &gt; 10 cm, computed at each timestep <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="LC209" class="blob-code blob-code-inner js-file-line">nblivetrees,            <span class="pl-c"><span class="pl-c">/*</span> nb live trees for each timestep  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="LC210" class="blob-code blob-code-inner js-file-line">nbdead_c1,                 <span class="pl-c"><span class="pl-c">/*</span> nb deaths caused by a treefall dbh &gt; 1 cm, computed at each timestep, _BASICTREEFALL <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="LC211" class="blob-code blob-code-inner js-file-line">nbdead_c10,                <span class="pl-c"><span class="pl-c">/*</span> nb deaths caused by a treefall dbh &gt; 10 cm, computed at each timestep, _BASICTREEFALL <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="LC212" class="blob-code blob-code-inner js-file-line">nbTreefall1,            <span class="pl-c"><span class="pl-c">/*</span> nb treefalls for each timestep (dbh &gt; 1cm), _BASICTREEFALL <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="LC213" class="blob-code blob-code-inner js-file-line">nbTreefall10;           <span class="pl-c"><span class="pl-c">/*</span> nb treefalls for each timestep (dbh &gt; 10 cm), _BASICTREEFALL <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="LC214" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="LC215" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>long int *persist;	/* persistence histogram */</span></td>
      </tr>
      <tr>
        <td id="L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="LC216" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span> *<span class="pl-en">nbdbh</span>(<span class="pl-c1">0</span>);          <span class="pl-c"><span class="pl-c">/*</span> dbh size distribution <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="LC217" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> *<span class="pl-en">layer</span>(<span class="pl-c1">0</span>);        <span class="pl-c"><span class="pl-c">/*</span> vertical LAI histogram <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="LC218" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="LC219" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="LC220" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Processors <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="LC221" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="LC222" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="LC223" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span> mpi_rank,mpi_size;</td>
      </tr>
      <tr>
        <td id="L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="LC224" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span> easympi_rank,easympi_size;</td>
      </tr>
      <tr>
        <td id="L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="LC225" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="LC226" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="LC227" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>****************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="LC228" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> MPI procedures <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="LC229" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>****************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="LC230" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="LC231" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="LC232" class="blob-code blob-code-inner js-file-line"><span class="pl-k">unsigned</span> <span class="pl-k">short</span> **LAIc[<span class="pl-c1">2</span>];</td>
      </tr>
      <tr>
        <td id="L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="LC233" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L234" class="blob-num js-line-number" data-line-number="234"></td>
        <td id="LC234" class="blob-code blob-code-inner js-file-line"><span class="pl-en">MPI_ShareSeed</span>(<span class="pl-k">unsigned</span> <span class="pl-k">char</span> **,<span class="pl-k">int</span>),</td>
      </tr>
      <tr>
        <td id="L235" class="blob-num js-line-number" data-line-number="235"></td>
        <td id="LC235" class="blob-code blob-code-inner js-file-line">MPI_ShareField(<span class="pl-k">unsigned</span> <span class="pl-k">short</span> **,<span class="pl-k">unsigned</span> <span class="pl-k">short</span> ***,<span class="pl-k">int</span>),</td>
      </tr>
      <tr>
        <td id="L236" class="blob-num js-line-number" data-line-number="236"></td>
        <td id="LC236" class="blob-code blob-code-inner js-file-line">MPI_ShareTreefall(<span class="pl-k">unsigned</span> <span class="pl-k">short</span> **,<span class="pl-k">int</span>);</td>
      </tr>
      <tr>
        <td id="L237" class="blob-num js-line-number" data-line-number="237"></td>
        <td id="LC237" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L238" class="blob-num js-line-number" data-line-number="238"></td>
        <td id="LC238" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L239" class="blob-num js-line-number" data-line-number="239"></td>
        <td id="LC239" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L240" class="blob-num js-line-number" data-line-number="240"></td>
        <td id="LC240" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>********************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L241" class="blob-num js-line-number" data-line-number="241"></td>
        <td id="LC241" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Simulator routines <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L242" class="blob-num js-line-number" data-line-number="242"></td>
        <td id="LC242" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>********************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L243" class="blob-num js-line-number" data-line-number="243"></td>
        <td id="LC243" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L244" class="blob-num js-line-number" data-line-number="244"></td>
        <td id="LC244" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L245" class="blob-num js-line-number" data-line-number="245"></td>
        <td id="LC245" class="blob-code blob-code-inner js-file-line"><span class="pl-en">Initialise</span>(<span class="pl-k">void</span>),</td>
      </tr>
      <tr>
        <td id="L246" class="blob-num js-line-number" data-line-number="246"></td>
        <td id="LC246" class="blob-code blob-code-inner js-file-line">InitialiseFromData(<span class="pl-k">void</span>),</td>
      </tr>
      <tr>
        <td id="L247" class="blob-num js-line-number" data-line-number="247"></td>
        <td id="LC247" class="blob-code blob-code-inner js-file-line">AllocMem(<span class="pl-k">void</span>),</td>
      </tr>
      <tr>
        <td id="L248" class="blob-num js-line-number" data-line-number="248"></td>
        <td id="LC248" class="blob-code blob-code-inner js-file-line">BirthInit(<span class="pl-k">void</span>),</td>
      </tr>
      <tr>
        <td id="L249" class="blob-num js-line-number" data-line-number="249"></td>
        <td id="LC249" class="blob-code blob-code-inner js-file-line">Evolution(<span class="pl-k">void</span>),</td>
      </tr>
      <tr>
        <td id="L250" class="blob-num js-line-number" data-line-number="250"></td>
        <td id="LC250" class="blob-code blob-code-inner js-file-line">UpdateField(<span class="pl-k">void</span>),</td>
      </tr>
      <tr>
        <td id="L251" class="blob-num js-line-number" data-line-number="251"></td>
        <td id="LC251" class="blob-code blob-code-inner js-file-line">UpdateTreefall(<span class="pl-k">void</span>),               <span class="pl-c"><span class="pl-c">//</span> _BASICTREEFALL</span></td>
      </tr>
      <tr>
        <td id="L252" class="blob-num js-line-number" data-line-number="252"></td>
        <td id="LC252" class="blob-code blob-code-inner js-file-line">UpdateTree(<span class="pl-k">void</span>),</td>
      </tr>
      <tr>
        <td id="L253" class="blob-num js-line-number" data-line-number="253"></td>
        <td id="LC253" class="blob-code blob-code-inner js-file-line">Average(<span class="pl-k">void</span>),</td>
      </tr>
      <tr>
        <td id="L254" class="blob-num js-line-number" data-line-number="254"></td>
        <td id="LC254" class="blob-code blob-code-inner js-file-line">OutputField(<span class="pl-k">void</span>),</td>
      </tr>
      <tr>
        <td id="L255" class="blob-num js-line-number" data-line-number="255"></td>
        <td id="LC255" class="blob-code blob-code-inner js-file-line">FreeMem(<span class="pl-k">void</span>);</td>
      </tr>
      <tr>
        <td id="L256" class="blob-num js-line-number" data-line-number="256"></td>
        <td id="LC256" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L257" class="blob-num js-line-number" data-line-number="257"></td>
        <td id="LC257" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L258" class="blob-num js-line-number" data-line-number="258"></td>
        <td id="LC258" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L259" class="blob-num js-line-number" data-line-number="259"></td>
        <td id="LC259" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Various inline functions <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L260" class="blob-num js-line-number" data-line-number="260"></td>
        <td id="LC260" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L261" class="blob-num js-line-number" data-line-number="261"></td>
        <td id="LC261" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L262" class="blob-num js-line-number" data-line-number="262"></td>
        <td id="LC262" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L263" class="blob-num js-line-number" data-line-number="263"></td>
        <td id="LC263" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">flor</span>(<span class="pl-k">float</span> f) {</td>
      </tr>
      <tr>
        <td id="L264" class="blob-num js-line-number" data-line-number="264"></td>
        <td id="LC264" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(f&gt;<span class="pl-c1">0</span>.) <span class="pl-k">return</span> f;</td>
      </tr>
      <tr>
        <td id="L265" class="blob-num js-line-number" data-line-number="265"></td>
        <td id="LC265" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> <span class="pl-k">return</span> <span class="pl-c1">0</span>.;</td>
      </tr>
      <tr>
        <td id="L266" class="blob-num js-line-number" data-line-number="266"></td>
        <td id="LC266" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L267" class="blob-num js-line-number" data-line-number="267"></td>
        <td id="LC267" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">florif</span>(<span class="pl-k">int</span> i) {</td>
      </tr>
      <tr>
        <td id="L268" class="blob-num js-line-number" data-line-number="268"></td>
        <td id="LC268" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(i&gt;<span class="pl-c1">0</span>) <span class="pl-k">return</span> <span class="pl-c1">float</span>(i);</td>
      </tr>
      <tr>
        <td id="L269" class="blob-num js-line-number" data-line-number="269"></td>
        <td id="LC269" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> <span class="pl-k">return</span> <span class="pl-c1">0</span>.;</td>
      </tr>
      <tr>
        <td id="L270" class="blob-num js-line-number" data-line-number="270"></td>
        <td id="LC270" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L271" class="blob-num js-line-number" data-line-number="271"></td>
        <td id="LC271" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">maxf</span>(<span class="pl-k">float</span> f1, <span class="pl-k">float</span> f2) {</td>
      </tr>
      <tr>
        <td id="L272" class="blob-num js-line-number" data-line-number="272"></td>
        <td id="LC272" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(f1&gt;f2) <span class="pl-k">return</span> f1;</td>
      </tr>
      <tr>
        <td id="L273" class="blob-num js-line-number" data-line-number="273"></td>
        <td id="LC273" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> <span class="pl-k">return</span> f2;</td>
      </tr>
      <tr>
        <td id="L274" class="blob-num js-line-number" data-line-number="274"></td>
        <td id="LC274" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L275" class="blob-num js-line-number" data-line-number="275"></td>
        <td id="LC275" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">minf</span>(<span class="pl-k">float</span> f1, <span class="pl-k">float</span> f2) {</td>
      </tr>
      <tr>
        <td id="L276" class="blob-num js-line-number" data-line-number="276"></td>
        <td id="LC276" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(f1&lt;f2) <span class="pl-k">return</span> f1;</td>
      </tr>
      <tr>
        <td id="L277" class="blob-num js-line-number" data-line-number="277"></td>
        <td id="LC277" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> <span class="pl-k">return</span> f2;</td>
      </tr>
      <tr>
        <td id="L278" class="blob-num js-line-number" data-line-number="278"></td>
        <td id="LC278" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L279" class="blob-num js-line-number" data-line-number="279"></td>
        <td id="LC279" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">int</span> <span class="pl-en">min</span>(<span class="pl-k">int</span> i1, <span class="pl-k">int</span> i2) {</td>
      </tr>
      <tr>
        <td id="L280" class="blob-num js-line-number" data-line-number="280"></td>
        <td id="LC280" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(i1&lt;i2) <span class="pl-k">return</span> i1;</td>
      </tr>
      <tr>
        <td id="L281" class="blob-num js-line-number" data-line-number="281"></td>
        <td id="LC281" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> <span class="pl-k">return</span> i2;</td>
      </tr>
      <tr>
        <td id="L282" class="blob-num js-line-number" data-line-number="282"></td>
        <td id="LC282" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L283" class="blob-num js-line-number" data-line-number="283"></td>
        <td id="LC283" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">int</span> <span class="pl-en">max</span>(<span class="pl-k">int</span> i1, <span class="pl-k">int</span> i2) {</td>
      </tr>
      <tr>
        <td id="L284" class="blob-num js-line-number" data-line-number="284"></td>
        <td id="LC284" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(i1&gt;i2) <span class="pl-k">return</span> i1;</td>
      </tr>
      <tr>
        <td id="L285" class="blob-num js-line-number" data-line-number="285"></td>
        <td id="LC285" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> <span class="pl-k">return</span> i2;</td>
      </tr>
      <tr>
        <td id="L286" class="blob-num js-line-number" data-line-number="286"></td>
        <td id="LC286" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L287" class="blob-num js-line-number" data-line-number="287"></td>
        <td id="LC287" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">int</span> <span class="pl-en">sgn</span>(<span class="pl-k">float</span> f) {</td>
      </tr>
      <tr>
        <td id="L288" class="blob-num js-line-number" data-line-number="288"></td>
        <td id="LC288" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(f&gt;<span class="pl-c1">0.0</span>) <span class="pl-k">return</span> <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L289" class="blob-num js-line-number" data-line-number="289"></td>
        <td id="LC289" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> <span class="pl-k">return</span> -<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L290" class="blob-num js-line-number" data-line-number="290"></td>
        <td id="LC290" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L291" class="blob-num js-line-number" data-line-number="291"></td>
        <td id="LC291" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L292" class="blob-num js-line-number" data-line-number="292"></td>
        <td id="LC292" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L293" class="blob-num js-line-number" data-line-number="293"></td>
        <td id="LC293" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>############################################</span></td>
      </tr>
      <tr>
        <td id="L294" class="blob-num js-line-number" data-line-number="294"></td>
        <td id="LC294" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################################</span></td>
      </tr>
      <tr>
        <td id="L295" class="blob-num js-line-number" data-line-number="295"></td>
        <td id="LC295" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###########     Species  class   ###########</span></td>
      </tr>
      <tr>
        <td id="L296" class="blob-num js-line-number" data-line-number="296"></td>
        <td id="LC296" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################################</span></td>
      </tr>
      <tr>
        <td id="L297" class="blob-num js-line-number" data-line-number="297"></td>
        <td id="LC297" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L298" class="blob-num js-line-number" data-line-number="298"></td>
        <td id="LC298" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L299" class="blob-num js-line-number" data-line-number="299"></td>
        <td id="LC299" class="blob-code blob-code-inner js-file-line"><span class="pl-k">class</span> <span class="pl-en">Species</span> {</td>
      </tr>
      <tr>
        <td id="L300" class="blob-num js-line-number" data-line-number="300"></td>
        <td id="LC300" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L301" class="blob-num js-line-number" data-line-number="301"></td>
        <td id="LC301" class="blob-code blob-code-inner js-file-line"><span class="pl-k">public:</span></td>
      </tr>
      <tr>
        <td id="L302" class="blob-num js-line-number" data-line-number="302"></td>
        <td id="LC302" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>    s_nbind,			<span class="pl-c"><span class="pl-c">/*</span> nb of individuals per species <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L303" class="blob-num js-line-number" data-line-number="303"></td>
        <td id="LC303" class="blob-code blob-code-inner js-file-line">    s_dormDuration,         <span class="pl-c"><span class="pl-c">/*</span> seed dormancy duration -- not used in v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L304" class="blob-num js-line-number" data-line-number="304"></td>
        <td id="LC304" class="blob-code blob-code-inner js-file-line">    s_nbext;                <span class="pl-c"><span class="pl-c">/*</span> total number of incoming seeds in the simulated plot at each timestep (seed rain) -- v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L305" class="blob-num js-line-number" data-line-number="305"></td>
        <td id="LC305" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">char</span>	s_name[<span class="pl-c1">256</span>];	<span class="pl-c"><span class="pl-c">/*</span> species name <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L306" class="blob-num js-line-number" data-line-number="306"></td>
        <td id="LC306" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>  s_LCP,			<span class="pl-c"><span class="pl-c">/*</span> light compensation point  (in micromol photon/m^2/s) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L307" class="blob-num js-line-number" data-line-number="307"></td>
        <td id="LC307" class="blob-code blob-code-inner js-file-line">    s_Rdark,                <span class="pl-c"><span class="pl-c">/*</span> dark respiration rate (at PPFD = 0) in micromol C/m^2/s) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L308" class="blob-num js-line-number" data-line-number="308"></td>
        <td id="LC308" class="blob-code blob-code-inner js-file-line">    s_ds,                   <span class="pl-c"><span class="pl-c">/*</span> average dispersal distance <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L309" class="blob-num js-line-number" data-line-number="309"></td>
        <td id="LC309" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  de1,                /* (crown depth) - height slope deprecated v.2.1 */</span></td>
      </tr>
      <tr>
        <td id="L310" class="blob-num js-line-number" data-line-number="310"></td>
        <td id="LC310" class="blob-code blob-code-inner js-file-line">    s_dmax,                 <span class="pl-c"><span class="pl-c">/*</span> maximal dbh (given in m) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L311" class="blob-num js-line-number" data-line-number="311"></td>
        <td id="LC311" class="blob-code blob-code-inner js-file-line">    s_hmax,                 <span class="pl-c"><span class="pl-c">/*</span> maximal height (given in m) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L312" class="blob-num js-line-number" data-line-number="312"></td>
        <td id="LC312" class="blob-code blob-code-inner js-file-line">    s_Vcmax,                <span class="pl-c"><span class="pl-c">/*</span> maximal rate of carboxylation, on an area basis (in micromolC/m^2/s) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L313" class="blob-num js-line-number" data-line-number="313"></td>
        <td id="LC313" class="blob-code blob-code-inner js-file-line">    s_Vcmaxm,               <span class="pl-c"><span class="pl-c">/*</span> maximal rate of carboxylation, on a mass basis (in micromolC/g-1/s) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L314" class="blob-num js-line-number" data-line-number="314"></td>
        <td id="LC314" class="blob-code blob-code-inner js-file-line">    s_Jmax,                 <span class="pl-c"><span class="pl-c">/*</span> maximal rate of electron transport, on an area basis (in micromol/m^2/s) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L315" class="blob-num js-line-number" data-line-number="315"></td>
        <td id="LC315" class="blob-code blob-code-inner js-file-line">    s_Jmaxm,                <span class="pl-c"><span class="pl-c">/*</span> maximal rate of electron transport, on a mass basis (in micromol/g-1/s) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L316" class="blob-num js-line-number" data-line-number="316"></td>
        <td id="LC316" class="blob-code blob-code-inner js-file-line">    s_g1,                   <span class="pl-c"><span class="pl-c">/*</span> parameter of the stomatal conductance model of Medlyn et al 2011 -- V.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L317" class="blob-num js-line-number" data-line-number="317"></td>
        <td id="LC317" class="blob-code blob-code-inner js-file-line">    s_fci,                  <span class="pl-c"><span class="pl-c">/*</span> fraction of CO2 partial pressure in intercellular spaces divided by ambiant CO2 partial pressure (both in microbar, or ppm = micromol/mol) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L318" class="blob-num js-line-number" data-line-number="318"></td>
        <td id="LC318" class="blob-code blob-code-inner js-file-line">    s_Gamma,                <span class="pl-c"><span class="pl-c">/*</span> compensation point for the carboxylation rate, here NORMALIZED by atm CO2 concentration (Cair) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L319" class="blob-num js-line-number" data-line-number="319"></td>
        <td id="LC319" class="blob-code blob-code-inner js-file-line">    s_Km,                   <span class="pl-c"><span class="pl-c">/*</span> apparent kinetic constant for the rubiscco = Kc*(1+[O]/Ko), here normalized by atm CO2 concentration (Cair) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L320" class="blob-num js-line-number" data-line-number="320"></td>
        <td id="LC320" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>s_d13C,                 /* isotopic carbon discrimination NOW normalized at zero height -- deprecated v.2.2 */</span></td>
      </tr>
      <tr>
        <td id="L321" class="blob-num js-line-number" data-line-number="321"></td>
        <td id="LC321" class="blob-code blob-code-inner js-file-line">    s_LMA,                  <span class="pl-c"><span class="pl-c">/*</span> leaf mass per area (in g/m^2) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L322" class="blob-num js-line-number" data-line-number="322"></td>
        <td id="LC322" class="blob-code blob-code-inner js-file-line">    s_Nmass,                <span class="pl-c"><span class="pl-c">/*</span> leaf nitrogen concentration (in g/g) v.2.01 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L323" class="blob-num js-line-number" data-line-number="323"></td>
        <td id="LC323" class="blob-code blob-code-inner js-file-line">    s_Pmass,                <span class="pl-c"><span class="pl-c">/*</span> leaf phosphorous concentration (in g/g) v.2.01 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L324" class="blob-num js-line-number" data-line-number="324"></td>
        <td id="LC324" class="blob-code blob-code-inner js-file-line">    s_wsg,                  <span class="pl-c"><span class="pl-c">/*</span> wood specific gravity (in g/cm^3) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L325" class="blob-num js-line-number" data-line-number="325"></td>
        <td id="LC325" class="blob-code blob-code-inner js-file-line">    s_ah,                   <span class="pl-c"><span class="pl-c">/*</span> parameter for allometric height-dbh equation <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L326" class="blob-num js-line-number" data-line-number="326"></td>
        <td id="LC326" class="blob-code blob-code-inner js-file-line">    s_seedmass,             <span class="pl-c"><span class="pl-c">/*</span> seed mass, in g (from Baraloto &amp; Forget 2007 dataset, in classes) v.2.3: seeminlgy deprecated in v.2.2, but still necessary for SEEDTRADEOFF <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L327" class="blob-num js-line-number" data-line-number="327"></td>
        <td id="LC327" class="blob-code blob-code-inner js-file-line">    s_iseedmass,            <span class="pl-c"><span class="pl-c">/*</span> inverse of seed mass, v.2.3: seeminlgy deprecated in v.2.2, but still necessary for SEEDTRADEOFF <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L328" class="blob-num js-line-number" data-line-number="328"></td>
        <td id="LC328" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>s_factord13Ca,        /* deprecated v.2.2 -- factor used for a previous version of ci/ca ratio computation, from d13C value */</span></td>
      </tr>
      <tr>
        <td id="L329" class="blob-num js-line-number" data-line-number="329"></td>
        <td id="LC329" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>s_factord13Cb,        /* deprecated v.2.2 -- factor used for a previous version of ci/ca ratio computation, from d13C value */</span></td>
      </tr>
      <tr>
        <td id="L330" class="blob-num js-line-number" data-line-number="330"></td>
        <td id="LC330" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Below: new in v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L331" class="blob-num js-line-number" data-line-number="331"></td>
        <td id="LC331" class="blob-code blob-code-inner js-file-line">    s_leaflifespan,         <span class="pl-c"><span class="pl-c">/*</span> average leaf lifespan, in month <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L332" class="blob-num js-line-number" data-line-number="332"></td>
        <td id="LC332" class="blob-code blob-code-inner js-file-line">    s_time_young,           <span class="pl-c"><span class="pl-c">/*</span> leaf resident time in the young leaf class <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L333" class="blob-num js-line-number" data-line-number="333"></td>
        <td id="LC333" class="blob-code blob-code-inner js-file-line">    s_time_mature,          <span class="pl-c"><span class="pl-c">/*</span> leaf resident time in the mature leaf class <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L334" class="blob-num js-line-number" data-line-number="334"></td>
        <td id="LC334" class="blob-code blob-code-inner js-file-line">    s_time_old,             <span class="pl-c"><span class="pl-c">/*</span> leaf resident time in the old leaf class <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L335" class="blob-num js-line-number" data-line-number="335"></td>
        <td id="LC335" class="blob-code blob-code-inner js-file-line">    s_output_field[<span class="pl-c1">24</span>];         <span class="pl-c"><span class="pl-c">/*</span> scalar output fields per species (&lt;24) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L336" class="blob-num js-line-number" data-line-number="336"></td>
        <td id="LC336" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L337" class="blob-num js-line-number" data-line-number="337"></td>
        <td id="LC337" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">char</span> *s_Seed;	<span class="pl-c"><span class="pl-c">/*</span> presence/absence of seeds; if def SEEDTRADEOFF, the number of seeds <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L338" class="blob-num js-line-number" data-line-number="338"></td>
        <td id="LC338" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L339" class="blob-num js-line-number" data-line-number="339"></td>
        <td id="LC339" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">char</span> *s_Gc[<span class="pl-c1">4</span>]; <span class="pl-c"><span class="pl-c">/*</span> MPI: seeds on neighboring procs <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L340" class="blob-num js-line-number" data-line-number="340"></td>
        <td id="LC340" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L341" class="blob-num js-line-number" data-line-number="341"></td>
        <td id="LC341" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L342" class="blob-num js-line-number" data-line-number="342"></td>
        <td id="LC342" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L343" class="blob-num js-line-number" data-line-number="343"></td>
        <td id="LC343" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">Species</span>() {</td>
      </tr>
      <tr>
        <td id="L344" class="blob-num js-line-number" data-line-number="344"></td>
        <td id="LC344" class="blob-code blob-code-inner js-file-line">        s_nbind=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L345" class="blob-num js-line-number" data-line-number="345"></td>
        <td id="LC345" class="blob-code blob-code-inner js-file-line">        s_Seed=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L346" class="blob-num js-line-number" data-line-number="346"></td>
        <td id="LC346" class="blob-code blob-code-inner js-file-line">    };                              <span class="pl-c"><span class="pl-c">/*</span> constructor <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L347" class="blob-num js-line-number" data-line-number="347"></td>
        <td id="LC347" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L348" class="blob-num js-line-number" data-line-number="348"></td>
        <td id="LC348" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">virtual</span> <span class="pl-en">~Species</span>() {</td>
      </tr>
      <tr>
        <td id="L349" class="blob-num js-line-number" data-line-number="349"></td>
        <td id="LC349" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">delete []</span> s_Seed;</td>
      </tr>
      <tr>
        <td id="L350" class="blob-num js-line-number" data-line-number="350"></td>
        <td id="LC350" class="blob-code blob-code-inner js-file-line">    };                              <span class="pl-c"><span class="pl-c">/*</span> destructor <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L351" class="blob-num js-line-number" data-line-number="351"></td>
        <td id="LC351" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L352" class="blob-num js-line-number" data-line-number="352"></td>
        <td id="LC352" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">Init</span>(<span class="pl-k">int</span>,fstream&amp;);        <span class="pl-c"><span class="pl-c">/*</span> init Species class <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L353" class="blob-num js-line-number" data-line-number="353"></td>
        <td id="LC353" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">FillSeed</span>(<span class="pl-k">int</span>,<span class="pl-k">int</span>);         <span class="pl-c"><span class="pl-c">/*</span> fills s_Seed field (and s_Gc (MPI)) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L354" class="blob-num js-line-number" data-line-number="354"></td>
        <td id="LC354" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">UpdateSeed</span>(<span class="pl-k">void</span>);       <span class="pl-c"><span class="pl-c">/*</span> Updates s_Seed field <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L355" class="blob-num js-line-number" data-line-number="355"></td>
        <td id="LC355" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L356" class="blob-num js-line-number" data-line-number="356"></td>
        <td id="LC356" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">AddSeed</span>(<span class="pl-k">void</span>);             <span class="pl-c"><span class="pl-c">/*</span> MPI: adds fields s_Gc  to field s_Seed <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L357" class="blob-num js-line-number" data-line-number="357"></td>
        <td id="LC357" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L358" class="blob-num js-line-number" data-line-number="358"></td>
        <td id="LC358" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">DeathRate</span>(<span class="pl-k">float</span>, <span class="pl-k">float</span>, <span class="pl-k">float</span>); <span class="pl-c"><span class="pl-c">/*</span> _NDD, overloading with function in following line <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L359" class="blob-num js-line-number" data-line-number="359"></td>
        <td id="LC359" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">DeathRate</span>(<span class="pl-k">float</span>, <span class="pl-k">float</span>, <span class="pl-k">int</span>);  <span class="pl-c"><span class="pl-c">/*</span> actual death rate -- new argument int v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L360" class="blob-num js-line-number" data-line-number="360"></td>
        <td id="LC360" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">GPPleaf</span>(<span class="pl-k">float</span>, <span class="pl-k">float</span>, <span class="pl-k">float</span>);    <span class="pl-c"><span class="pl-c">/*</span> Computation of the light-limited leaf-level NPP per m^2 (in micromol/m^2/s) -- two new arguments float v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L361" class="blob-num js-line-number" data-line-number="361"></td>
        <td id="LC361" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Farquhar von Caemmerer Berry model <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L362" class="blob-num js-line-number" data-line-number="362"></td>
        <td id="LC362" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">dailyGPPleaf</span>(<span class="pl-k">float</span>, <span class="pl-k">float</span>, <span class="pl-k">float</span>);    <span class="pl-c"><span class="pl-c">/*</span> computation of the daily average assimilation rate, taking into account the daily variation in light, VPD and temperature two new arguments float v.2.2, _DAILYLIGHT <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L363" class="blob-num js-line-number" data-line-number="363"></td>
        <td id="LC363" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L364" class="blob-num js-line-number" data-line-number="364"></td>
        <td id="LC364" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L365" class="blob-num js-line-number" data-line-number="365"></td>
        <td id="LC365" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L366" class="blob-num js-line-number" data-line-number="366"></td>
        <td id="LC366" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>############################</span></td>
      </tr>
      <tr>
        <td id="L367" class="blob-num js-line-number" data-line-number="367"></td>
        <td id="LC367" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###  Initialize Species  ###</span></td>
      </tr>
      <tr>
        <td id="L368" class="blob-num js-line-number" data-line-number="368"></td>
        <td id="LC368" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###    Species::Init     ###</span></td>
      </tr>
      <tr>
        <td id="L369" class="blob-num js-line-number" data-line-number="369"></td>
        <td id="LC369" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L370" class="blob-num js-line-number" data-line-number="370"></td>
        <td id="LC370" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L371" class="blob-num js-line-number" data-line-number="371"></td>
        <td id="LC371" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Species::Init</span>(<span class="pl-k">int</span> nesp,fstream&amp; is) {</td>
      </tr>
      <tr>
        <td id="L372" class="blob-num js-line-number" data-line-number="372"></td>
        <td id="LC372" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L373" class="blob-num js-line-number" data-line-number="373"></td>
        <td id="LC373" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> site;</td>
      </tr>
      <tr>
        <td id="L374" class="blob-num js-line-number" data-line-number="374"></td>
        <td id="LC374" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> regionalfreq;     <span class="pl-c"><span class="pl-c">//</span> &quot;regional&quot; relative abundance of the species -- new name v.2.2</span></td>
      </tr>
      <tr>
        <td id="L375" class="blob-num js-line-number" data-line-number="375"></td>
        <td id="LC375" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> SLA;              <span class="pl-c"><span class="pl-c">//</span> specific leaf area = 1/LMA</span></td>
      </tr>
      <tr>
        <td id="L376" class="blob-num js-line-number" data-line-number="376"></td>
        <td id="LC376" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L377" class="blob-num js-line-number" data-line-number="377"></td>
        <td id="LC377" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** Read parameters **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L378" class="blob-num js-line-number" data-line-number="378"></td>
        <td id="LC378" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L379" class="blob-num js-line-number" data-line-number="379"></td>
        <td id="LC379" class="blob-code blob-code-inner js-file-line">    is  &gt;&gt; s_name &gt;&gt; s_Nmass  &gt;&gt; s_LMA &gt;&gt; s_wsg &gt;&gt; s_dmax &gt;&gt; s_hmax  &gt;&gt; s_ah</td>
      </tr>
      <tr>
        <td id="L380" class="blob-num js-line-number" data-line-number="380"></td>
        <td id="LC380" class="blob-code blob-code-inner js-file-line">    &gt;&gt; s_dormDuration &gt;&gt; regionalfreq &gt;&gt; s_ds &gt;&gt;  s_Pmass &gt;&gt;  s_g1 &gt;&gt; s_seedmass ; <span class="pl-c"><span class="pl-c">/*</span> Narea =&gt; Nmass v.2.0 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L381" class="blob-num js-line-number" data-line-number="381"></td>
        <td id="LC381" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L382" class="blob-num js-line-number" data-line-number="382"></td>
        <td id="LC382" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> instead of seedmass we are given seedvolume</span></td>
      </tr>
      <tr>
        <td id="L383" class="blob-num js-line-number" data-line-number="383"></td>
        <td id="LC383" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> from this we assume a conversion factor of 1 to wet mass (~density of water, makes seeds float)</span></td>
      </tr>
      <tr>
        <td id="L384" class="blob-num js-line-number" data-line-number="384"></td>
        <td id="LC384" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> to convert to drymass we use a conversion factor of 0.4 (~40% of the seed are water)</span></td>
      </tr>
      <tr>
        <td id="L385" class="blob-num js-line-number" data-line-number="385"></td>
        <td id="LC385" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L386" class="blob-num js-line-number" data-line-number="386"></td>
        <td id="LC386" class="blob-code blob-code-inner js-file-line">    s_seedmass *= <span class="pl-c1">0.4</span>;</td>
      </tr>
      <tr>
        <td id="L387" class="blob-num js-line-number" data-line-number="387"></td>
        <td id="LC387" class="blob-code blob-code-inner js-file-line">    s_iseedmass=<span class="pl-c1">1</span>/s_seedmass;</td>
      </tr>
      <tr>
        <td id="L388" class="blob-num js-line-number" data-line-number="388"></td>
        <td id="LC388" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L389" class="blob-num js-line-number" data-line-number="389"></td>
        <td id="LC389" class="blob-code blob-code-inner js-file-line">    s_nbext = <span class="pl-c1">int</span>(regionalfreq*Cseedrain*(sites*LH*LH/<span class="pl-c1">10000</span>));</td>
      </tr>
      <tr>
        <td id="L390" class="blob-num js-line-number" data-line-number="390"></td>
        <td id="LC390" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L391" class="blob-num js-line-number" data-line-number="391"></td>
        <td id="LC391" class="blob-code blob-code-inner js-file-line">    s_leaflifespan=<span class="pl-c1">1.5</span>+<span class="pl-c1">pow</span>(<span class="pl-c1">10</span>,(<span class="pl-c1">7.18</span>+<span class="pl-c1">3.03</span>*<span class="pl-c1">log10</span>(s_LMA*<span class="pl-c1">0.0001</span>)));           <span class="pl-c"><span class="pl-c">//</span>this is the expression from Reich et al 1991 Oecologia (San Carlos Rio Negro).</span></td>
      </tr>
      <tr>
        <td id="L392" class="blob-num js-line-number" data-line-number="392"></td>
        <td id="LC392" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>s_leaflifespan=0.5+pow(10,(-2.509+1.71*log10(s_LMA)));    //this is the expression from Wright et al 2004 Nature (leaf economics spectrum).</span></td>
      </tr>
      <tr>
        <td id="L393" class="blob-num js-line-number" data-line-number="393"></td>
        <td id="LC393" class="blob-code blob-code-inner js-file-line">    s_time_young=<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L394" class="blob-num js-line-number" data-line-number="394"></td>
        <td id="LC394" class="blob-code blob-code-inner js-file-line">    s_time_mature=s_leaflifespan/<span class="pl-c1">3</span>;</td>
      </tr>
      <tr>
        <td id="L395" class="blob-num js-line-number" data-line-number="395"></td>
        <td id="LC395" class="blob-code blob-code-inner js-file-line">    s_time_old=s_leaflifespan-s_time_mature-s_time_young;</td>
      </tr>
      <tr>
        <td id="L396" class="blob-num js-line-number" data-line-number="396"></td>
        <td id="LC396" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L397" class="blob-num js-line-number" data-line-number="397"></td>
        <td id="LC397" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** Normalization of the parameters **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L398" class="blob-num js-line-number" data-line-number="398"></td>
        <td id="LC398" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> vertical (NV) and horizontal (NH) scales <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L399" class="blob-num js-line-number" data-line-number="399"></td>
        <td id="LC399" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L400" class="blob-num js-line-number" data-line-number="400"></td>
        <td id="LC400" class="blob-code blob-code-inner js-file-line">    s_ah *= NV*LH;</td>
      </tr>
      <tr>
        <td id="L401" class="blob-num js-line-number" data-line-number="401"></td>
        <td id="LC401" class="blob-code blob-code-inner js-file-line">    s_ds *= NH;</td>
      </tr>
      <tr>
        <td id="L402" class="blob-num js-line-number" data-line-number="402"></td>
        <td id="LC402" class="blob-code blob-code-inner js-file-line">    s_hmax *= NV;</td>
      </tr>
      <tr>
        <td id="L403" class="blob-num js-line-number" data-line-number="403"></td>
        <td id="LC403" class="blob-code blob-code-inner js-file-line">    s_dmax *= NH;</td>
      </tr>
      <tr>
        <td id="L404" class="blob-num js-line-number" data-line-number="404"></td>
        <td id="LC404" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L405" class="blob-num js-line-number" data-line-number="405"></td>
        <td id="LC405" class="blob-code blob-code-inner js-file-line">    s_nbind=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L406" class="blob-num js-line-number" data-line-number="406"></td>
        <td id="LC406" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L407" class="blob-num js-line-number" data-line-number="407"></td>
        <td id="LC407" class="blob-code blob-code-inner js-file-line">    SLA=<span class="pl-c1">10000</span>/s_LMA;    <span class="pl-c"><span class="pl-c">//</span> computation of specific leaf area in cm^2/g for use in Domingues et al 2010 model of photosynthetic capacities</span></td>
      </tr>
      <tr>
        <td id="L408" class="blob-num js-line-number" data-line-number="408"></td>
        <td id="LC408" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L409" class="blob-num js-line-number" data-line-number="409"></td>
        <td id="LC409" class="blob-code blob-code-inner js-file-line">    s_fci = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L410" class="blob-num js-line-number" data-line-number="410"></td>
        <td id="LC410" class="blob-code blob-code-inner js-file-line">    s_g1=<span class="pl-c1">3.77</span>;</td>
      </tr>
      <tr>
        <td id="L411" class="blob-num js-line-number" data-line-number="411"></td>
        <td id="LC411" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>in relation to wsg: s_g1=-3.97*s_wsg+6.53;</span></td>
      </tr>
      <tr>
        <td id="L412" class="blob-num js-line-number" data-line-number="412"></td>
        <td id="LC412" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L413" class="blob-num js-line-number" data-line-number="413"></td>
        <td id="LC413" class="blob-code blob-code-inner js-file-line">    s_Vcmaxm=<span class="pl-c1">pow</span>(<span class="pl-c1">10</span>, <span class="pl-c1">minf</span>((-<span class="pl-c1">1.56</span>+<span class="pl-c1">0.43</span>*<span class="pl-c1">log10</span>(s_Nmass*<span class="pl-c1">1000</span>)+<span class="pl-c1">0.37</span>*<span class="pl-c1">log10</span>(SLA)), (-<span class="pl-c1">0.80</span>+<span class="pl-c1">0.45</span>*<span class="pl-c1">log10</span>(s_Pmass*<span class="pl-c1">1000</span>)+<span class="pl-c1">0.25</span>*<span class="pl-c1">log10</span>(SLA))));</td>
      </tr>
      <tr>
        <td id="L414" class="blob-num js-line-number" data-line-number="414"></td>
        <td id="LC414" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> this is equation 2 in Domingues et al 2010 PCE (coefficients from fig7) which made better fits than equation 1 (without LMA)</span></td>
      </tr>
      <tr>
        <td id="L415" class="blob-num js-line-number" data-line-number="415"></td>
        <td id="LC415" class="blob-code blob-code-inner js-file-line">    s_Jmaxm=<span class="pl-c1">pow</span>(<span class="pl-c1">10</span>, <span class="pl-c1">minf</span>((-<span class="pl-c1">1.50</span>+<span class="pl-c1">0.41</span>*<span class="pl-c1">log10</span>(s_Nmass*<span class="pl-c1">1000</span>)+<span class="pl-c1">0.45</span>*<span class="pl-c1">log10</span>(SLA)), (-<span class="pl-c1">0.74</span>+<span class="pl-c1">0.44</span>*<span class="pl-c1">log10</span>(s_Pmass*<span class="pl-c1">1000</span>)+<span class="pl-c1">0.32</span>*<span class="pl-c1">log10</span>(SLA))));</td>
      </tr>
      <tr>
        <td id="L416" class="blob-num js-line-number" data-line-number="416"></td>
        <td id="LC416" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> added as a Species member variable 14-04-2015; this is equ 2 in Domingues et al 2010 PCE (coefficients from fig7)</span></td>
      </tr>
      <tr>
        <td id="L417" class="blob-num js-line-number" data-line-number="417"></td>
        <td id="LC417" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L418" class="blob-num js-line-number" data-line-number="418"></td>
        <td id="LC418" class="blob-code blob-code-inner js-file-line">    s_Vcmax=s_Vcmaxm*s_LMA;</td>
      </tr>
      <tr>
        <td id="L419" class="blob-num js-line-number" data-line-number="419"></td>
        <td id="LC419" class="blob-code blob-code-inner js-file-line">    s_Jmax=s_Jmaxm*s_LMA;</td>
      </tr>
      <tr>
        <td id="L420" class="blob-num js-line-number" data-line-number="420"></td>
        <td id="LC420" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L421" class="blob-num js-line-number" data-line-number="421"></td>
        <td id="LC421" class="blob-code blob-code-inner js-file-line">    s_Rdark=s_LMA*(<span class="pl-c1">8.5341</span>-<span class="pl-c1">130.6</span>*s_Nmass-<span class="pl-c1">567.0</span>*s_Pmass-<span class="pl-c1">0.0137</span>*s_LMA+<span class="pl-c1">11.1</span>*s_Vcmaxm+<span class="pl-c1">187600</span>*s_Nmass*s_Pmass)*<span class="pl-c1">0.001</span>;</td>
      </tr>
      <tr>
        <td id="L422" class="blob-num js-line-number" data-line-number="422"></td>
        <td id="LC422" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L423" class="blob-num js-line-number" data-line-number="423"></td>
        <td id="LC423" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>s_Rdark corresponds to leaf maintenance respiration. From Table 6 in Atkin et al 2015 New phytologist v.2.0 */</span></td>
      </tr>
      <tr>
        <td id="L424" class="blob-num js-line-number" data-line-number="424"></td>
        <td id="LC424" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L425" class="blob-num js-line-number" data-line-number="425"></td>
        <td id="LC425" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>s_Rdark=(82.36*(s_LMA*1e-3)-0.1561)*(s_LMA*1e-3);                 /* from Domingues et al 2007 */</span></td>
      </tr>
      <tr>
        <td id="L426" class="blob-num js-line-number" data-line-number="426"></td>
        <td id="LC426" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>s_Rdark=0.01*s_Vcmax;                                             /* parameterization of Rdark commonly used in vegetation models */</span></td>
      </tr>
      <tr>
        <td id="L427" class="blob-num js-line-number" data-line-number="427"></td>
        <td id="LC427" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>s_Rdark=0.02*s_Vcmax-0.01;                                        /* parameterization of von Caemmerer 2000 Table 2.3 page 45 */</span></td>
      </tr>
      <tr>
        <td id="L428" class="blob-num js-line-number" data-line-number="428"></td>
        <td id="LC428" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L429" class="blob-num js-line-number" data-line-number="429"></td>
        <td id="LC429" class="blob-code blob-code-inner js-file-line">    s_Gamma = <span class="pl-c1">38</span>*iCair;</td>
      </tr>
      <tr>
        <td id="L430" class="blob-num js-line-number" data-line-number="430"></td>
        <td id="LC430" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L431" class="blob-num js-line-number" data-line-number="431"></td>
        <td id="LC431" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> s_Gamma computed according to von Caemmerer 2000 formula: gamma=Kc*O*0.25/(2*Ko), with Kc=260 microbar, Ko=179mbar and O=210 mbar (the last value is from Fraquhar et al 1980, the first two one are from von Caemmerer 2000 table 2.3 page 45). gamma is set to 36.9 on Atkin et al 2015. Could be a global variable. v.2.0</span></td>
      </tr>
      <tr>
        <td id="L432" class="blob-num js-line-number" data-line-number="432"></td>
        <td id="LC432" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L433" class="blob-num js-line-number" data-line-number="433"></td>
        <td id="LC433" class="blob-code blob-code-inner js-file-line">    s_LCP = s_Rdark/phi;    <span class="pl-c"><span class="pl-c">/*</span> Computation of the light compensation point from dark respiration and the quantum yield phi. By definition, Rdark is in micromolC/m^2/s and it is used in the Species::NPP() routine <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L434" class="blob-num js-line-number" data-line-number="434"></td>
        <td id="LC434" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L435" class="blob-num js-line-number" data-line-number="435"></td>
        <td id="LC435" class="blob-code blob-code-inner js-file-line">    cerr &lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>s_Rdark for spp<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt;s_name &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>&lt;&lt; s_Rdark&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>s_LCP<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>&lt;&lt; s_LCP &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>s_nbext<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>&lt;&lt; s_nbext &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>s_Vcmax<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; s_Vcmax &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>s_leaflifespan<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; s_leaflifespan &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>s_time_young<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; s_time_young &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>s_time_mature<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; s_time_mature &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>s_time_old<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; s_time_old &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L436" class="blob-num js-line-number" data-line-number="436"></td>
        <td id="LC436" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L437" class="blob-num js-line-number" data-line-number="437"></td>
        <td id="LC437" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L438" class="blob-num js-line-number" data-line-number="438"></td>
        <td id="LC438" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** s_Seed field initialization **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L439" class="blob-num js-line-number" data-line-number="439"></td>
        <td id="LC439" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(s_Seed = <span class="pl-k">new</span> <span class="pl-k">unsigned</span> <span class="pl-k">char</span>[sites])) cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L440" class="blob-num js-line-number" data-line-number="440"></td>
        <td id="LC440" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++) s_Seed[site]=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L441" class="blob-num js-line-number" data-line-number="441"></td>
        <td id="LC441" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L442" class="blob-num js-line-number" data-line-number="442"></td>
        <td id="LC442" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L443" class="blob-num js-line-number" data-line-number="443"></td>
        <td id="LC443" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(<span class="pl-k">int</span> i=<span class="pl-c1">0</span>;i&lt;<span class="pl-c1">4</span>;i++) {</td>
      </tr>
      <tr>
        <td id="L444" class="blob-num js-line-number" data-line-number="444"></td>
        <td id="LC444" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(s_Gc[i] = <span class="pl-k">new</span> <span class="pl-k">unsigned</span> <span class="pl-k">char</span>[sites])) cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L445" class="blob-num js-line-number" data-line-number="445"></td>
        <td id="LC445" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++) s_Gc[i][site]=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L446" class="blob-num js-line-number" data-line-number="446"></td>
        <td id="LC446" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L447" class="blob-num js-line-number" data-line-number="447"></td>
        <td id="LC447" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L448" class="blob-num js-line-number" data-line-number="448"></td>
        <td id="LC448" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L449" class="blob-num js-line-number" data-line-number="449"></td>
        <td id="LC449" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L450" class="blob-num js-line-number" data-line-number="450"></td>
        <td id="LC450" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L451" class="blob-num js-line-number" data-line-number="451"></td>
        <td id="LC451" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>############################</span></td>
      </tr>
      <tr>
        <td id="L452" class="blob-num js-line-number" data-line-number="452"></td>
        <td id="LC452" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###     Species Seeds     ###</span></td>
      </tr>
      <tr>
        <td id="L453" class="blob-num js-line-number" data-line-number="453"></td>
        <td id="LC453" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###   Species::FillSeed   ###</span></td>
      </tr>
      <tr>
        <td id="L454" class="blob-num js-line-number" data-line-number="454"></td>
        <td id="LC454" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###  Species::UpdateSeed  ###</span></td>
      </tr>
      <tr>
        <td id="L455" class="blob-num js-line-number" data-line-number="455"></td>
        <td id="LC455" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###   Species::AddSeed    ###</span></td>
      </tr>
      <tr>
        <td id="L456" class="blob-num js-line-number" data-line-number="456"></td>
        <td id="LC456" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> #############################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L457" class="blob-num js-line-number" data-line-number="457"></td>
        <td id="LC457" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L458" class="blob-num js-line-number" data-line-number="458"></td>
        <td id="LC458" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>###  Species::FillSeed  ###<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L459" class="blob-num js-line-number" data-line-number="459"></td>
        <td id="LC459" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> creates one seed at point (col,row) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L460" class="blob-num js-line-number" data-line-number="460"></td>
        <td id="LC460" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L461" class="blob-num js-line-number" data-line-number="461"></td>
        <td id="LC461" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L462" class="blob-num js-line-number" data-line-number="462"></td>
        <td id="LC462" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Species::FillSeed</span>(<span class="pl-k">int</span> col, <span class="pl-k">int</span> row) {</td>
      </tr>
      <tr>
        <td id="L463" class="blob-num js-line-number" data-line-number="463"></td>
        <td id="LC463" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> site;</td>
      </tr>
      <tr>
        <td id="L464" class="blob-num js-line-number" data-line-number="464"></td>
        <td id="LC464" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(col &lt; cols) {</td>
      </tr>
      <tr>
        <td id="L465" class="blob-num js-line-number" data-line-number="465"></td>
        <td id="LC465" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>((row &gt;=<span class="pl-c1">0</span>) &amp;&amp; (row &lt; rows)) {</td>
      </tr>
      <tr>
        <td id="L466" class="blob-num js-line-number" data-line-number="466"></td>
        <td id="LC466" class="blob-code blob-code-inner js-file-line">            site=col+cols*row;</td>
      </tr>
      <tr>
        <td id="L467" class="blob-num js-line-number" data-line-number="467"></td>
        <td id="LC467" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(_SEEDTRADEOFF){</td>
      </tr>
      <tr>
        <td id="L468" class="blob-num js-line-number" data-line-number="468"></td>
        <td id="LC468" class="blob-code blob-code-inner js-file-line">                s_Seed[site]++;                         <span class="pl-c"><span class="pl-c">/*</span> ifdef SEEDTRADEOFF, s_Seed[site] is the number of seeds of this species at that site <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L469" class="blob-num js-line-number" data-line-number="469"></td>
        <td id="LC469" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L470" class="blob-num js-line-number" data-line-number="470"></td>
        <td id="LC470" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L471" class="blob-num js-line-number" data-line-number="471"></td>
        <td id="LC471" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(s_Seed[site]!=<span class="pl-c1">1</span>) s_Seed[site]=<span class="pl-c1">1</span>;     <span class="pl-c"><span class="pl-c">/*</span> If s_Seed[site] = 0, site is not occupied, if s_Seed[site] &gt; 1, s_Seed[site] is the age of the youngest seed  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L472" class="blob-num js-line-number" data-line-number="472"></td>
        <td id="LC472" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L473" class="blob-num js-line-number" data-line-number="473"></td>
        <td id="LC473" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L474" class="blob-num js-line-number" data-line-number="474"></td>
        <td id="LC474" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L475" class="blob-num js-line-number" data-line-number="475"></td>
        <td id="LC475" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI                                       <span class="pl-c"><span class="pl-c">/*</span> on each processor a stripe of forest is simulated.</span></td>
      </tr>
      <tr>
        <td id="L476" class="blob-num js-line-number" data-line-number="476"></td>
        <td id="LC476" class="blob-code blob-code-inner js-file-line"><span class="pl-c">Nearest neighboring stripes are shared. Rque, this version is not valid ifdef SEEDTRADEOFF <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L477" class="blob-num js-line-number" data-line-number="477"></td>
        <td id="LC477" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span>((row+rows &gt;=<span class="pl-c1">0</span>) &amp;&amp; (row &lt; <span class="pl-c1">0</span>)) {</td>
      </tr>
      <tr>
        <td id="L478" class="blob-num js-line-number" data-line-number="478"></td>
        <td id="LC478" class="blob-code blob-code-inner js-file-line">            site=col+cols*(row+rows);</td>
      </tr>
      <tr>
        <td id="L479" class="blob-num js-line-number" data-line-number="479"></td>
        <td id="LC479" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(s_Gc[<span class="pl-c1">0</span>][site]!=<span class="pl-c1">1</span>) s_Gc[<span class="pl-c1">0</span>][site]=<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L480" class="blob-num js-line-number" data-line-number="480"></td>
        <td id="LC480" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L481" class="blob-num js-line-number" data-line-number="481"></td>
        <td id="LC481" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span>((row &gt;=rows) &amp;&amp; (row &lt; <span class="pl-c1">2</span>*rows)) {</td>
      </tr>
      <tr>
        <td id="L482" class="blob-num js-line-number" data-line-number="482"></td>
        <td id="LC482" class="blob-code blob-code-inner js-file-line">            site=col+cols*(row-rows);</td>
      </tr>
      <tr>
        <td id="L483" class="blob-num js-line-number" data-line-number="483"></td>
        <td id="LC483" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(s_Gc[<span class="pl-c1">1</span>][site]!=<span class="pl-c1">1</span>) s_Gc[<span class="pl-c1">1</span>][site]=<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L484" class="blob-num js-line-number" data-line-number="484"></td>
        <td id="LC484" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L485" class="blob-num js-line-number" data-line-number="485"></td>
        <td id="LC485" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L486" class="blob-num js-line-number" data-line-number="486"></td>
        <td id="LC486" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L487" class="blob-num js-line-number" data-line-number="487"></td>
        <td id="LC487" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L488" class="blob-num js-line-number" data-line-number="488"></td>
        <td id="LC488" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L489" class="blob-num js-line-number" data-line-number="489"></td>
        <td id="LC489" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L490" class="blob-num js-line-number" data-line-number="490"></td>
        <td id="LC490" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>### Species::UpdateSeed ###<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L491" class="blob-num js-line-number" data-line-number="491"></td>
        <td id="LC491" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> updates s_Seed field <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L492" class="blob-num js-line-number" data-line-number="492"></td>
        <td id="LC492" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> new in v.2.3: not called within loop over sites, instead includes loop --&gt; less function calling, BUT: no check of site occupation anymore, cf. below <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L493" class="blob-num js-line-number" data-line-number="493"></td>
        <td id="LC493" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L494" class="blob-num js-line-number" data-line-number="494"></td>
        <td id="LC494" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Species::UpdateSeed</span>() {</td>
      </tr>
      <tr>
        <td id="L495" class="blob-num js-line-number" data-line-number="495"></td>
        <td id="LC495" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L496" class="blob-num js-line-number" data-line-number="496"></td>
        <td id="LC496" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> should probably be modified, since as implemented now seeds are erased every timestep (i.e. month in default mode)--&gt; to be discussed <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L497" class="blob-num js-line-number" data-line-number="497"></td>
        <td id="LC497" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L498" class="blob-num js-line-number" data-line-number="498"></td>
        <td id="LC498" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_SEEDTRADEOFF){</td>
      </tr>
      <tr>
        <td id="L499" class="blob-num js-line-number" data-line-number="499"></td>
        <td id="LC499" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(<span class="pl-k">int</span> site=<span class="pl-c1">0</span>;site&lt;sites;site++){</td>
      </tr>
      <tr>
        <td id="L500" class="blob-num js-line-number" data-line-number="500"></td>
        <td id="LC500" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L501" class="blob-num js-line-number" data-line-number="501"></td>
        <td id="LC501" class="blob-code blob-code-inner js-file-line">            s_Gc[<span class="pl-c1">0</span>][site]=s_Gc[<span class="pl-c1">1</span>][site]=s_Gc[<span class="pl-c1">2</span>][site]=s_Gc[<span class="pl-c1">3</span>][site]=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L502" class="blob-num js-line-number" data-line-number="502"></td>
        <td id="LC502" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L503" class="blob-num js-line-number" data-line-number="503"></td>
        <td id="LC503" class="blob-code blob-code-inner js-file-line">            s_Seed[site]=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L504" class="blob-num js-line-number" data-line-number="504"></td>
        <td id="LC504" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L505" class="blob-num js-line-number" data-line-number="505"></td>
        <td id="LC505" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L506" class="blob-num js-line-number" data-line-number="506"></td>
        <td id="LC506" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L507" class="blob-num js-line-number" data-line-number="507"></td>
        <td id="LC507" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L508" class="blob-num js-line-number" data-line-number="508"></td>
        <td id="LC508" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> new in v.2.3: version 2.2 checked whether site was occupied by tree: T[site].t_age&gt;0) s_Seed[site]=0;     <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L509" class="blob-num js-line-number" data-line-number="509"></td>
        <td id="LC509" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> v.2.3 does not do this within UpdateSeed() anymore. Instead, it sets all occupied sites to zero directly within UpdateTree() <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L510" class="blob-num js-line-number" data-line-number="510"></td>
        <td id="LC510" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(<span class="pl-k">int</span> site=<span class="pl-c1">0</span>;site&lt;sites;site++){</td>
      </tr>
      <tr>
        <td id="L511" class="blob-num js-line-number" data-line-number="511"></td>
        <td id="LC511" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L512" class="blob-num js-line-number" data-line-number="512"></td>
        <td id="LC512" class="blob-code blob-code-inner js-file-line"># <span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L513" class="blob-num js-line-number" data-line-number="513"></td>
        <td id="LC513" class="blob-code blob-code-inner js-file-line">            s_Gc[<span class="pl-c1">0</span>][site]=s_Gc[<span class="pl-c1">1</span>][site]=s_Gc[<span class="pl-c1">2</span>][site]=s_Gc[<span class="pl-c1">3</span>][site]=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L514" class="blob-num js-line-number" data-line-number="514"></td>
        <td id="LC514" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L515" class="blob-num js-line-number" data-line-number="515"></td>
        <td id="LC515" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">/*</span> seed bank ages or disappears <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L516" class="blob-num js-line-number" data-line-number="516"></td>
        <td id="LC516" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(s_Seed[site]==s_dormDuration) s_Seed[site]=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L517" class="blob-num js-line-number" data-line-number="517"></td>
        <td id="LC517" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">else</span> <span class="pl-k">if</span>(s_Seed[site]!=<span class="pl-c1">0</span>) s_Seed[site]++;            <span class="pl-c"><span class="pl-c">//</span> v.2.3: bug fix: before, procedure was not restricted to existing seeds, therefore creation of seeds</span></td>
      </tr>
      <tr>
        <td id="L518" class="blob-num js-line-number" data-line-number="518"></td>
        <td id="LC518" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L519" class="blob-num js-line-number" data-line-number="519"></td>
        <td id="LC519" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L520" class="blob-num js-line-number" data-line-number="520"></td>
        <td id="LC520" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L521" class="blob-num js-line-number" data-line-number="521"></td>
        <td id="LC521" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L522" class="blob-num js-line-number" data-line-number="522"></td>
        <td id="LC522" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L523" class="blob-num js-line-number" data-line-number="523"></td>
        <td id="LC523" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L524" class="blob-num js-line-number" data-line-number="524"></td>
        <td id="LC524" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>########################################</span></td>
      </tr>
      <tr>
        <td id="L525" class="blob-num js-line-number" data-line-number="525"></td>
        <td id="LC525" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###  Calculation of shared fields s_Gc ###</span></td>
      </tr>
      <tr>
        <td id="L526" class="blob-num js-line-number" data-line-number="526"></td>
        <td id="LC526" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ########################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L527" class="blob-num js-line-number" data-line-number="527"></td>
        <td id="LC527" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Species::AddSeed</span>() {</td>
      </tr>
      <tr>
        <td id="L528" class="blob-num js-line-number" data-line-number="528"></td>
        <td id="LC528" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Stripes shared by several processors are redefined <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L529" class="blob-num js-line-number" data-line-number="529"></td>
        <td id="LC529" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(<span class="pl-k">int</span> site=<span class="pl-c1">0</span>;site&lt;sites;site++) {</td>
      </tr>
      <tr>
        <td id="L530" class="blob-num js-line-number" data-line-number="530"></td>
        <td id="LC530" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(p_rank){</td>
      </tr>
      <tr>
        <td id="L531" class="blob-num js-line-number" data-line-number="531"></td>
        <td id="LC531" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(!s_Seed[site]) s_Seed[site] = s_Gc[<span class="pl-c1">2</span>][site];</td>
      </tr>
      <tr>
        <td id="L532" class="blob-num js-line-number" data-line-number="532"></td>
        <td id="LC532" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(s_Seed[site]&gt;<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L533" class="blob-num js-line-number" data-line-number="533"></td>
        <td id="LC533" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(s_Gc[<span class="pl-c1">2</span>][site]) s_Seed[site] = <span class="pl-c1">min</span>(s_Seed[site],s_Gc[<span class="pl-c1">2</span>][site]);</td>
      </tr>
      <tr>
        <td id="L534" class="blob-num js-line-number" data-line-number="534"></td>
        <td id="LC534" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L535" class="blob-num js-line-number" data-line-number="535"></td>
        <td id="LC535" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(p_rank&lt;size-<span class="pl-c1">1</span>){</td>
      </tr>
      <tr>
        <td id="L536" class="blob-num js-line-number" data-line-number="536"></td>
        <td id="LC536" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(!s_Seed[site]) s_Seed[site] = s_Gc[<span class="pl-c1">3</span>][site];</td>
      </tr>
      <tr>
        <td id="L537" class="blob-num js-line-number" data-line-number="537"></td>
        <td id="LC537" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(s_Seed[site]&gt;<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L538" class="blob-num js-line-number" data-line-number="538"></td>
        <td id="LC538" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(s_Gc[<span class="pl-c1">3</span>][site]) s_Seed[site] = <span class="pl-c1">min</span>(s_Seed[site],s_Gc[<span class="pl-c1">3</span>][site]);</td>
      </tr>
      <tr>
        <td id="L539" class="blob-num js-line-number" data-line-number="539"></td>
        <td id="LC539" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L540" class="blob-num js-line-number" data-line-number="540"></td>
        <td id="LC540" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L541" class="blob-num js-line-number" data-line-number="541"></td>
        <td id="LC541" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L542" class="blob-num js-line-number" data-line-number="542"></td>
        <td id="LC542" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L543" class="blob-num js-line-number" data-line-number="543"></td>
        <td id="LC543" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L544" class="blob-num js-line-number" data-line-number="544"></td>
        <td id="LC544" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L545" class="blob-num js-line-number" data-line-number="545"></td>
        <td id="LC545" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>############################</span></td>
      </tr>
      <tr>
        <td id="L546" class="blob-num js-line-number" data-line-number="546"></td>
        <td id="LC546" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###   Species::DeathRate  ###</span></td>
      </tr>
      <tr>
        <td id="L547" class="blob-num js-line-number" data-line-number="547"></td>
        <td id="LC547" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> #############################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L548" class="blob-num js-line-number" data-line-number="548"></td>
        <td id="LC548" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L549" class="blob-num js-line-number" data-line-number="549"></td>
        <td id="LC549" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Here we assume a light-dependent version of the mortality.</span></td>
      </tr>
      <tr>
        <td id="L550" class="blob-num js-line-number" data-line-number="550"></td>
        <td id="LC550" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> basal is the minimal species death rate, depending on the species wood density.</span></td>
      </tr>
      <tr>
        <td id="L551" class="blob-num js-line-number" data-line-number="551"></td>
        <td id="LC551" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> When PPFD is smaller than the light compensation point, mortality risk is increased.</span></td>
      </tr>
      <tr>
        <td id="L552" class="blob-num js-line-number" data-line-number="552"></td>
        <td id="LC552" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> When NDD is defined, this death rate is increased by density-dependence effect that impact survival of trees with a dbh&lt;10cm . <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L553" class="blob-num js-line-number" data-line-number="553"></td>
        <td id="LC553" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L554" class="blob-num js-line-number" data-line-number="554"></td>
        <td id="LC554" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L555" class="blob-num js-line-number" data-line-number="555"></td>
        <td id="LC555" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> v.2.2 Simplify function Species::DeathRate -- JChave <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L556" class="blob-num js-line-number" data-line-number="556"></td>
        <td id="LC556" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L557" class="blob-num js-line-number" data-line-number="557"></td>
        <td id="LC557" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Changed v.2.2, _NDD <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L558" class="blob-num js-line-number" data-line-number="558"></td>
        <td id="LC558" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">Species::DeathRate</span>(<span class="pl-k">float</span> PPFD, <span class="pl-k">float</span> dbh, <span class="pl-k">float</span> ndd) {</td>
      </tr>
      <tr>
        <td id="L559" class="blob-num js-line-number" data-line-number="559"></td>
        <td id="LC559" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L560" class="blob-num js-line-number" data-line-number="560"></td>
        <td id="LC560" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> dr=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L561" class="blob-num js-line-number" data-line-number="561"></td>
        <td id="LC561" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> basal=<span class="pl-c1">0.001</span>+m*(<span class="pl-c1">1</span>-s_wsg/<span class="pl-c1">0.85</span>);</td>
      </tr>
      <tr>
        <td id="L562" class="blob-num js-line-number" data-line-number="562"></td>
        <td id="LC562" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>float densdepend;</span></td>
      </tr>
      <tr>
        <td id="L563" class="blob-num js-line-number" data-line-number="563"></td>
        <td id="LC563" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>float lightlimit = 1.0-PPFD/s_LCP;</span></td>
      </tr>
      <tr>
        <td id="L564" class="blob-num js-line-number" data-line-number="564"></td>
        <td id="LC564" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> add=<span class="pl-c1">2</span>/(<span class="pl-c1">0.01</span>-<span class="pl-c1">0.3</span>*s_dmax);</td>
      </tr>
      <tr>
        <td id="L565" class="blob-num js-line-number" data-line-number="565"></td>
        <td id="LC565" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> bdd=-add*<span class="pl-c1">0.3</span>*s_dmax;</td>
      </tr>
      <tr>
        <td id="L566" class="blob-num js-line-number" data-line-number="566"></td>
        <td id="LC566" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> dd=ndd*(add*dbh+bdd);        <span class="pl-c"><span class="pl-c">//</span>the death rate is incremented by a negative density dependance term, which effect decreases whith the focal tree size (cf. Zhu et al 2015 Journal of Ecology) (size factor so that equals 0 at dbh=30cm and equals 2.5 at dbh=1 cm)</span></td>
      </tr>
      <tr>
        <td id="L567" class="blob-num js-line-number" data-line-number="567"></td>
        <td id="LC567" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>float senescent=0.01*dbh/s_dmax;</span></td>
      </tr>
      <tr>
        <td id="L568" class="blob-num js-line-number" data-line-number="568"></td>
        <td id="LC568" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L569" class="blob-num js-line-number" data-line-number="569"></td>
        <td id="LC569" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>if (nblivetrees &gt; 0 &amp;&amp; dbh&lt;0.1*LH)</span></td>
      </tr>
      <tr>
        <td id="L570" class="blob-num js-line-number" data-line-number="570"></td>
        <td id="LC570" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     densdepend=float(s_nbind)/float(nblivetrees);</span></td>
      </tr>
      <tr>
        <td id="L571" class="blob-num js-line-number" data-line-number="571"></td>
        <td id="LC571" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     if (nblivetrees &gt; 0)</span></td>
      </tr>
      <tr>
        <td id="L572" class="blob-num js-line-number" data-line-number="572"></td>
        <td id="LC572" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     densdepend=float(s_nbind)/float(nblivetrees)*0.05*LH/dbh;                       // other try to make the density-dependance effect vary with tree size. 20-04-2015</span></td>
      </tr>
      <tr>
        <td id="L573" class="blob-num js-line-number" data-line-number="573"></td>
        <td id="LC573" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     else densdepend=0;<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L574" class="blob-num js-line-number" data-line-number="574"></td>
        <td id="LC574" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L575" class="blob-num js-line-number" data-line-number="575"></td>
        <td id="LC575" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>dr=0.01*(1-s_wsg);                  // 5/08/2015: try with a basal rate function of wood density</span></td>
      </tr>
      <tr>
        <td id="L576" class="blob-num js-line-number" data-line-number="576"></td>
        <td id="LC576" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L577" class="blob-num js-line-number" data-line-number="577"></td>
        <td id="LC577" class="blob-code blob-code-inner js-file-line">    dr=basal;</td>
      </tr>
      <tr>
        <td id="L578" class="blob-num js-line-number" data-line-number="578"></td>
        <td id="LC578" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (dbh&lt;<span class="pl-c1">0.3</span>*s_dmax) dr += dd;</td>
      </tr>
      <tr>
        <td id="L579" class="blob-num js-line-number" data-line-number="579"></td>
        <td id="LC579" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>if(lightlimit&gt;0) dr += lightlimit;</span></td>
      </tr>
      <tr>
        <td id="L580" class="blob-num js-line-number" data-line-number="580"></td>
        <td id="LC580" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>if (dbh&gt;s_dmax) dr += senescent;</span></td>
      </tr>
      <tr>
        <td id="L581" class="blob-num js-line-number" data-line-number="581"></td>
        <td id="LC581" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L582" class="blob-num js-line-number" data-line-number="582"></td>
        <td id="LC582" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> v.2.2  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L583" class="blob-num js-line-number" data-line-number="583"></td>
        <td id="LC583" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (iter == <span class="pl-c1">int</span>(nbiter-<span class="pl-c1">1</span>))  {</td>
      </tr>
      <tr>
        <td id="L584" class="blob-num js-line-number" data-line-number="584"></td>
        <td id="LC584" class="blob-code blob-code-inner js-file-line">        output[<span class="pl-c1">26</span>]&lt;&lt; s_wsg &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; basal &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>  &lt;&lt; ndd &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; dd &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>  &lt;&lt; dr   &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L585" class="blob-num js-line-number" data-line-number="585"></td>
        <td id="LC585" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L586" class="blob-num js-line-number" data-line-number="586"></td>
        <td id="LC586" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L587" class="blob-num js-line-number" data-line-number="587"></td>
        <td id="LC587" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> dr*timestep;</td>
      </tr>
      <tr>
        <td id="L588" class="blob-num js-line-number" data-line-number="588"></td>
        <td id="LC588" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L589" class="blob-num js-line-number" data-line-number="589"></td>
        <td id="LC589" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L590" class="blob-num js-line-number" data-line-number="590"></td>
        <td id="LC590" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">Species::DeathRate</span>(<span class="pl-k">float</span> PPFD, <span class="pl-k">float</span> dbh, <span class="pl-k">int</span> nppneg) {</td>
      </tr>
      <tr>
        <td id="L591" class="blob-num js-line-number" data-line-number="591"></td>
        <td id="LC591" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L592" class="blob-num js-line-number" data-line-number="592"></td>
        <td id="LC592" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> dr=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L593" class="blob-num js-line-number" data-line-number="593"></td>
        <td id="LC593" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> basal=m-m1*s_wsg;</td>
      </tr>
      <tr>
        <td id="L594" class="blob-num js-line-number" data-line-number="594"></td>
        <td id="LC594" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>float lightlimit = 1.0-PPFD/s_LCP;</span></td>
      </tr>
      <tr>
        <td id="L595" class="blob-num js-line-number" data-line-number="595"></td>
        <td id="LC595" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L596" class="blob-num js-line-number" data-line-number="596"></td>
        <td id="LC596" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>float juvenile=-7.5*dbh+0.75;</span></td>
      </tr>
      <tr>
        <td id="L597" class="blob-num js-line-number" data-line-number="597"></td>
        <td id="LC597" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>float juvenile=-1.67*dbh+0.167;</span></td>
      </tr>
      <tr>
        <td id="L598" class="blob-num js-line-number" data-line-number="598"></td>
        <td id="LC598" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L599" class="blob-num js-line-number" data-line-number="599"></td>
        <td id="LC599" class="blob-code blob-code-inner js-file-line">    dr=basal;</td>
      </tr>
      <tr>
        <td id="L600" class="blob-num js-line-number" data-line-number="600"></td>
        <td id="LC600" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>if(lightlimit&gt;0) dr += lightlimit/timestep;</span></td>
      </tr>
      <tr>
        <td id="L601" class="blob-num js-line-number" data-line-number="601"></td>
        <td id="LC601" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> if (dbh&lt;0.1) dr +=juvenile;</span></td>
      </tr>
      <tr>
        <td id="L602" class="blob-num js-line-number" data-line-number="602"></td>
        <td id="LC602" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L603" class="blob-num js-line-number" data-line-number="603"></td>
        <td id="LC603" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (nppneg &gt; s_leaflifespan) {</td>
      </tr>
      <tr>
        <td id="L604" class="blob-num js-line-number" data-line-number="604"></td>
        <td id="LC604" class="blob-code blob-code-inner js-file-line">        dr+=<span class="pl-c1">1.0</span>/timestep;</td>
      </tr>
      <tr>
        <td id="L605" class="blob-num js-line-number" data-line-number="605"></td>
        <td id="LC605" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L606" class="blob-num js-line-number" data-line-number="606"></td>
        <td id="LC606" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L607" class="blob-num js-line-number" data-line-number="607"></td>
        <td id="LC607" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (iter == <span class="pl-c1">int</span>(nbiter-<span class="pl-c1">1</span>))  {</td>
      </tr>
      <tr>
        <td id="L608" class="blob-num js-line-number" data-line-number="608"></td>
        <td id="LC608" class="blob-code blob-code-inner js-file-line">        output[<span class="pl-c1">26</span>]&lt;&lt; s_wsg &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; basal &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>  &lt;&lt; dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>  &lt;&lt; dr   &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L609" class="blob-num js-line-number" data-line-number="609"></td>
        <td id="LC609" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L610" class="blob-num js-line-number" data-line-number="610"></td>
        <td id="LC610" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L611" class="blob-num js-line-number" data-line-number="611"></td>
        <td id="LC611" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> dr*timestep;</td>
      </tr>
      <tr>
        <td id="L612" class="blob-num js-line-number" data-line-number="612"></td>
        <td id="LC612" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L613" class="blob-num js-line-number" data-line-number="613"></td>
        <td id="LC613" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L614" class="blob-num js-line-number" data-line-number="614"></td>
        <td id="LC614" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L615" class="blob-num js-line-number" data-line-number="615"></td>
        <td id="LC615" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L616" class="blob-num js-line-number" data-line-number="616"></td>
        <td id="LC616" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>#############################################</span></td>
      </tr>
      <tr>
        <td id="L617" class="blob-num js-line-number" data-line-number="617"></td>
        <td id="LC617" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###   Farquhar von Caemmerer Berry model  ###</span></td>
      </tr>
      <tr>
        <td id="L618" class="blob-num js-line-number" data-line-number="618"></td>
        <td id="LC618" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###           Species:: NPP               ###</span></td>
      </tr>
      <tr>
        <td id="L619" class="blob-num js-line-number" data-line-number="619"></td>
        <td id="LC619" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> #############################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L620" class="blob-num js-line-number" data-line-number="620"></td>
        <td id="LC620" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L621" class="blob-num js-line-number" data-line-number="621"></td>
        <td id="LC621" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> This function returns the leaf-level carbon assimilation rate in micromoles C/m^2/s according to Farquhar-von Caemmerer-Berry model <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L622" class="blob-num js-line-number" data-line-number="622"></td>
        <td id="LC622" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L623" class="blob-num js-line-number" data-line-number="623"></td>
        <td id="LC623" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">Species::GPPleaf</span>(<span class="pl-k">float</span> PPFD, <span class="pl-k">float</span> VPD, <span class="pl-k">float</span> T) {</td>
      </tr>
      <tr>
        <td id="L624" class="blob-num js-line-number" data-line-number="624"></td>
        <td id="LC624" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L625" class="blob-num js-line-number" data-line-number="625"></td>
        <td id="LC625" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Parameters for Farquhar model, with temperature dependencies <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L626" class="blob-num js-line-number" data-line-number="626"></td>
        <td id="LC626" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L627" class="blob-num js-line-number" data-line-number="627"></td>
        <td id="LC627" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> A=<span class="pl-c1">0.0</span>;                                    <span class="pl-c"><span class="pl-c">//</span> Assimilation</span></td>
      </tr>
      <tr>
        <td id="L628" class="blob-num js-line-number" data-line-number="628"></td>
        <td id="LC628" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> theta=<span class="pl-c1">0.7</span>;                                <span class="pl-c"><span class="pl-c">//</span> this is the fixed value of theta used by von Caemmerer 2000</span></td>
      </tr>
      <tr>
        <td id="L629" class="blob-num js-line-number" data-line-number="629"></td>
        <td id="LC629" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L630" class="blob-num js-line-number" data-line-number="630"></td>
        <td id="LC630" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>float theta=0.76+0.018*T-0.00037*T*T;         // theta, but temperature dependent cf. Bernacchi et al 2003 PCE</span></td>
      </tr>
      <tr>
        <td id="L631" class="blob-num js-line-number" data-line-number="631"></td>
        <td id="LC631" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L632" class="blob-num js-line-number" data-line-number="632"></td>
        <td id="LC632" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> denTB=<span class="pl-c1">1</span>/(<span class="pl-c1">0.00831</span>*(T+<span class="pl-c1">273.15</span>));             <span class="pl-c"><span class="pl-c">//</span> denominator of the exponential term used for temp dep cf. Bernacchi et al 2003 PCE</span></td>
      </tr>
      <tr>
        <td id="L633" class="blob-num js-line-number" data-line-number="633"></td>
        <td id="LC633" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> vCfactor=(<span class="pl-c1">25</span>-T)/(<span class="pl-c1">298</span>*<span class="pl-c1">8.314</span>*(<span class="pl-c1">273</span>+T));      <span class="pl-c"><span class="pl-c">//</span> factor of the exponential term used for temp dep cf. von Caemmerer 2000</span></td>
      </tr>
      <tr>
        <td id="L634" class="blob-num js-line-number" data-line-number="634"></td>
        <td id="LC634" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> KcT=<span class="pl-c1">404</span>*<span class="pl-c1">exp</span>(vCfactor*<span class="pl-c1">59.36</span>);</td>
      </tr>
      <tr>
        <td id="L635" class="blob-num js-line-number" data-line-number="635"></td>
        <td id="LC635" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> iKoT=<span class="pl-c1">1</span>/<span class="pl-c1">248</span>*<span class="pl-c1">exp</span>(-vCfactor*<span class="pl-c1">35.94</span>);</td>
      </tr>
      <tr>
        <td id="L636" class="blob-num js-line-number" data-line-number="636"></td>
        <td id="LC636" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> KmT=KcT*(<span class="pl-c1">1</span>+<span class="pl-c1">210</span>*iKoT)*iCair;                <span class="pl-c"><span class="pl-c">//</span> KmT, adjusted to include ambient CO2 concentration (needed due to use of s_fci)</span></td>
      </tr>
      <tr>
        <td id="L637" class="blob-num js-line-number" data-line-number="637"></td>
        <td id="LC637" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> GammaT=<span class="pl-c1">37</span>*<span class="pl-c1">exp</span>(vCfactor*<span class="pl-c1">23.4</span>)*iCair;        <span class="pl-c"><span class="pl-c">//</span> VcmaxT, adjusted to include ambient CO2 concentration</span></td>
      </tr>
      <tr>
        <td id="L638" class="blob-num js-line-number" data-line-number="638"></td>
        <td id="LC638" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> VcmaxT=s_Vcmax*<span class="pl-c1">exp</span>(<span class="pl-c1">26.35</span>-<span class="pl-c1">65.33</span>*denTB);</td>
      </tr>
      <tr>
        <td id="L639" class="blob-num js-line-number" data-line-number="639"></td>
        <td id="LC639" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> JmaxT=s_Jmax*<span class="pl-c1">exp</span>(<span class="pl-c1">17.57</span>-<span class="pl-c1">43.54</span>*denTB);</td>
      </tr>
      <tr>
        <td id="L640" class="blob-num js-line-number" data-line-number="640"></td>
        <td id="LC640" class="blob-code blob-code-inner js-file-line">    tempRday+=s_Rdark*<span class="pl-c1">exp</span>((T-<span class="pl-c1">25</span>)*<span class="pl-c1">0.1</span>*<span class="pl-c1">log</span>(<span class="pl-c1">3.09</span>-<span class="pl-c1">0.0215</span>*(<span class="pl-c1">25</span>+T)));</td>
      </tr>
      <tr>
        <td id="L641" class="blob-num js-line-number" data-line-number="641"></td>
        <td id="LC641" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L642" class="blob-num js-line-number" data-line-number="642"></td>
        <td id="LC642" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> derivation of s_fci (ci/ca) according to Medlyn et al 2011, see also Prentice et al 2014 Ecology Letters and Lin et al 2015 Nature Climate Change <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L643" class="blob-num js-line-number" data-line-number="643"></td>
        <td id="LC643" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> initial version: s_fci = minf(-0.04*s_d13C-0.3*(log(PPFD)-s_factord13Cb)*s_factord13Ca-0.57, 1.0); // from d13C (see cernusak et al 2013) without explicit model of stomatal conductance; min added in order to prevent ci:ca bigger than 1 (even though Ehleringer et al 1986 reported some values above 1 (Fig3) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L644" class="blob-num js-line-number" data-line-number="644"></td>
        <td id="LC644" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L645" class="blob-num js-line-number" data-line-number="645"></td>
        <td id="LC645" class="blob-code blob-code-inner js-file-line">    s_fci=s_g1/(s_g1+<span class="pl-c1">sqrt</span>(VPD));</td>
      </tr>
      <tr>
        <td id="L646" class="blob-num js-line-number" data-line-number="646"></td>
        <td id="LC646" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L647" class="blob-num js-line-number" data-line-number="647"></td>
        <td id="LC647" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> FvCB model <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L648" class="blob-num js-line-number" data-line-number="648"></td>
        <td id="LC648" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L649" class="blob-num js-line-number" data-line-number="649"></td>
        <td id="LC649" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> I=alpha*PPFD;</td>
      </tr>
      <tr>
        <td id="L650" class="blob-num js-line-number" data-line-number="650"></td>
        <td id="LC650" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> J = (I+JmaxT-<span class="pl-c1">sqrt</span>((JmaxT+I)*(JmaxT+I)-<span class="pl-c1">4</span>*theta*JmaxT*I))*<span class="pl-c1">0.5</span>/theta;</td>
      </tr>
      <tr>
        <td id="L651" class="blob-num js-line-number" data-line-number="651"></td>
        <td id="LC651" class="blob-code blob-code-inner js-file-line">    A = <span class="pl-c1">minf</span>(VcmaxT/(s_fci+KmT),<span class="pl-c1">0.25</span>*J/(s_fci+<span class="pl-c1">2.0</span>*GammaT))*(s_fci-GammaT);</td>
      </tr>
      <tr>
        <td id="L652" class="blob-num js-line-number" data-line-number="652"></td>
        <td id="LC652" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L653" class="blob-num js-line-number" data-line-number="653"></td>
        <td id="LC653" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> A;</td>
      </tr>
      <tr>
        <td id="L654" class="blob-num js-line-number" data-line-number="654"></td>
        <td id="LC654" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L655" class="blob-num js-line-number" data-line-number="655"></td>
        <td id="LC655" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L656" class="blob-num js-line-number" data-line-number="656"></td>
        <td id="LC656" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> dailyGPPleaf returns the assimilation rate (computed from Species::GPPleaf) averaged across the daily fluctuations in climatic conditions (light, VPD and T), in micromoles C/m^2/s <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L657" class="blob-num js-line-number" data-line-number="657"></td>
        <td id="LC657" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L658" class="blob-num js-line-number" data-line-number="658"></td>
        <td id="LC658" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> used only by _DAILYLIGHT <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L659" class="blob-num js-line-number" data-line-number="659"></td>
        <td id="LC659" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">Species::dailyGPPleaf</span>(<span class="pl-k">float</span> PPFD, <span class="pl-k">float</span> VPD, <span class="pl-k">float</span> T) {</td>
      </tr>
      <tr>
        <td id="L660" class="blob-num js-line-number" data-line-number="660"></td>
        <td id="LC660" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> dailyA=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L661" class="blob-num js-line-number" data-line-number="661"></td>
        <td id="LC661" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;<span class="pl-c1">24</span>; i++) {</td>
      </tr>
      <tr>
        <td id="L662" class="blob-num js-line-number" data-line-number="662"></td>
        <td id="LC662" class="blob-code blob-code-inner js-file-line">        dailyA+=<span class="pl-c1">GPPleaf</span>(PPFD*daily_light[i], VPD*daily_vpd[i], T*daily_T[i]);</td>
      </tr>
      <tr>
        <td id="L663" class="blob-num js-line-number" data-line-number="663"></td>
        <td id="LC663" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L664" class="blob-num js-line-number" data-line-number="664"></td>
        <td id="LC664" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span>daily_light is the averaged (across one year, meteo station Nouragues DZ) and normalized (from 0 to 1) daily fluctuation of light, with half-hour time step, during the day time (from 7am to 7pm, ie 12 hours in total), same for daily_vpd and daily_T. Taking into account these daily variation is necessary considering the non-linearity of FvCB model</span></td>
      </tr>
      <tr>
        <td id="L665" class="blob-num js-line-number" data-line-number="665"></td>
        <td id="LC665" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L666" class="blob-num js-line-number" data-line-number="666"></td>
        <td id="LC666" class="blob-code blob-code-inner js-file-line">    dailyA*=<span class="pl-c1">0.0417</span>;         <span class="pl-c"><span class="pl-c">//</span> 0.0417=1/24 (24=12*2 = number of half hours in the 12 hours of daily light)</span></td>
      </tr>
      <tr>
        <td id="L667" class="blob-num js-line-number" data-line-number="667"></td>
        <td id="LC667" class="blob-code blob-code-inner js-file-line">    tempRday*=<span class="pl-c1">0.0417</span>;</td>
      </tr>
      <tr>
        <td id="L668" class="blob-num js-line-number" data-line-number="668"></td>
        <td id="LC668" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> dailyA;</td>
      </tr>
      <tr>
        <td id="L669" class="blob-num js-line-number" data-line-number="669"></td>
        <td id="LC669" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L670" class="blob-num js-line-number" data-line-number="670"></td>
        <td id="LC670" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L671" class="blob-num js-line-number" data-line-number="671"></td>
        <td id="LC671" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L672" class="blob-num js-line-number" data-line-number="672"></td>
        <td id="LC672" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>############################################</span></td>
      </tr>
      <tr>
        <td id="L673" class="blob-num js-line-number" data-line-number="673"></td>
        <td id="LC673" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################################</span></td>
      </tr>
      <tr>
        <td id="L674" class="blob-num js-line-number" data-line-number="674"></td>
        <td id="LC674" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############     Tree  class    ############</span></td>
      </tr>
      <tr>
        <td id="L675" class="blob-num js-line-number" data-line-number="675"></td>
        <td id="LC675" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################################</span></td>
      </tr>
      <tr>
        <td id="L676" class="blob-num js-line-number" data-line-number="676"></td>
        <td id="LC676" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L677" class="blob-num js-line-number" data-line-number="677"></td>
        <td id="LC677" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L678" class="blob-num js-line-number" data-line-number="678"></td>
        <td id="LC678" class="blob-code blob-code-inner js-file-line"><span class="pl-k">class</span> <span class="pl-en">Tree</span> {</td>
      </tr>
      <tr>
        <td id="L679" class="blob-num js-line-number" data-line-number="679"></td>
        <td id="LC679" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L680" class="blob-num js-line-number" data-line-number="680"></td>
        <td id="LC680" class="blob-code blob-code-inner js-file-line"><span class="pl-k">private:</span></td>
      </tr>
      <tr>
        <td id="L681" class="blob-num js-line-number" data-line-number="681"></td>
        <td id="LC681" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> t_C;                    <span class="pl-c"><span class="pl-c">/*</span> flexural force intensity, _TREEFALL, float? <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L682" class="blob-num js-line-number" data-line-number="682"></td>
        <td id="LC682" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L683" class="blob-num js-line-number" data-line-number="683"></td>
        <td id="LC683" class="blob-code blob-code-inner js-file-line"><span class="pl-k">public:</span></td>
      </tr>
      <tr>
        <td id="L684" class="blob-num js-line-number" data-line-number="684"></td>
        <td id="LC684" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>   t_site,           <span class="pl-c"><span class="pl-c">/*</span> location <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L685" class="blob-num js-line-number" data-line-number="685"></td>
        <td id="LC685" class="blob-code blob-code-inner js-file-line">    t_NPPneg;               <span class="pl-c"><span class="pl-c">/*</span> diagnostic variable: number of consecutive timesteps with NPP&lt;0 -- V.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L686" class="blob-num js-line-number" data-line-number="686"></td>
        <td id="LC686" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> t_dbh_thresh,       <span class="pl-c"><span class="pl-c">/*</span> dbh threshold <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L687" class="blob-num js-line-number" data-line-number="687"></td>
        <td id="LC687" class="blob-code blob-code-inner js-file-line">    t_hmax,                 <span class="pl-c"><span class="pl-c">/*</span> hmax, but not real maximum <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L688" class="blob-num js-line-number" data-line-number="688"></td>
        <td id="LC688" class="blob-code blob-code-inner js-file-line">    t_angle,                <span class="pl-c"><span class="pl-c">/*</span> orientation of applied force, _TREEFALL <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L689" class="blob-num js-line-number" data-line-number="689"></td>
        <td id="LC689" class="blob-code blob-code-inner js-file-line">    t_hmature,              <span class="pl-c"><span class="pl-c">/*</span> reproductive size threshold <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L690" class="blob-num js-line-number" data-line-number="690"></td>
        <td id="LC690" class="blob-code blob-code-inner js-file-line">    t_dbh,                  <span class="pl-c"><span class="pl-c">/*</span> diameter at breast height (in m, but used in number of horizontal cells throughout all the code) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L691" class="blob-num js-line-number" data-line-number="691"></td>
        <td id="LC691" class="blob-code blob-code-inner js-file-line">    t_Tree_Height,          <span class="pl-c"><span class="pl-c">/*</span> total tree height (in m, but used in number of vertical cells throughout all the code) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L692" class="blob-num js-line-number" data-line-number="692"></td>
        <td id="LC692" class="blob-code blob-code-inner js-file-line">    t_Crown_Depth,          <span class="pl-c"><span class="pl-c">/*</span> crown depth (in m, but used in number of vertical cells throughout all the code) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L693" class="blob-num js-line-number" data-line-number="693"></td>
        <td id="LC693" class="blob-code blob-code-inner js-file-line">    t_Crown_Radius,         <span class="pl-c"><span class="pl-c">/*</span> crown radius (in m, but used in number of horizontal cells throughout all the code)<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L694" class="blob-num js-line-number" data-line-number="694"></td>
        <td id="LC694" class="blob-code blob-code-inner js-file-line">    t_Ct,                   <span class="pl-c"><span class="pl-c">/*</span> flexural force threshold, _BASICTREEFALL <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L695" class="blob-num js-line-number" data-line-number="695"></td>
        <td id="LC695" class="blob-code blob-code-inner js-file-line">    t_GPP,                  <span class="pl-c"><span class="pl-c">/*</span> tree gross primary productivity <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L696" class="blob-num js-line-number" data-line-number="696"></td>
        <td id="LC696" class="blob-code blob-code-inner js-file-line">    t_NPP,                  <span class="pl-c"><span class="pl-c">/*</span> tree net primary productivity (in gC/timestep) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L697" class="blob-num js-line-number" data-line-number="697"></td>
        <td id="LC697" class="blob-code blob-code-inner js-file-line">    t_Rday,                 <span class="pl-c"><span class="pl-c">/*</span> leaf respiration during day <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L698" class="blob-num js-line-number" data-line-number="698"></td>
        <td id="LC698" class="blob-code blob-code-inner js-file-line">    t_Rnight,               <span class="pl-c"><span class="pl-c">/*</span> leaf respiration during night <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L699" class="blob-num js-line-number" data-line-number="699"></td>
        <td id="LC699" class="blob-code blob-code-inner js-file-line">    t_Rstem,                <span class="pl-c"><span class="pl-c">/*</span> stem respiration <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L700" class="blob-num js-line-number" data-line-number="700"></td>
        <td id="LC700" class="blob-code blob-code-inner js-file-line">    t_PPFD,                 <span class="pl-c"><span class="pl-c">/*</span> light intensity received by the tree (computed by Tree::Flux, depending of the LAI at the tree height) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L701" class="blob-num js-line-number" data-line-number="701"></td>
        <td id="LC701" class="blob-code blob-code-inner js-file-line">    t_VPD,                    <span class="pl-c"><span class="pl-c">/*</span> VPD at tree height -- v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L702" class="blob-num js-line-number" data-line-number="702"></td>
        <td id="LC702" class="blob-code blob-code-inner js-file-line">    t_T,                    <span class="pl-c"><span class="pl-c">/*</span> Temperature at tree height -- v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L703" class="blob-num js-line-number" data-line-number="703"></td>
        <td id="LC703" class="blob-code blob-code-inner js-file-line">    t_ddbh,                 <span class="pl-c"><span class="pl-c">/*</span> increment of dbh per timestep <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L704" class="blob-num js-line-number" data-line-number="704"></td>
        <td id="LC704" class="blob-code blob-code-inner js-file-line">    t_age,                  <span class="pl-c"><span class="pl-c">/*</span> tree age <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L705" class="blob-num js-line-number" data-line-number="705"></td>
        <td id="LC705" class="blob-code blob-code-inner js-file-line">    t_youngLA,              <span class="pl-c"><span class="pl-c">/*</span> total young leaf area, in m2 -- v.2.2  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L706" class="blob-num js-line-number" data-line-number="706"></td>
        <td id="LC706" class="blob-code blob-code-inner js-file-line">    t_matureLA,             <span class="pl-c"><span class="pl-c">/*</span> total mature leaf area, in m2 -- v.2.2  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L707" class="blob-num js-line-number" data-line-number="707"></td>
        <td id="LC707" class="blob-code blob-code-inner js-file-line">    t_oldLA,                <span class="pl-c"><span class="pl-c">/*</span> total old leaf area, in m2 -- v.2.2  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L708" class="blob-num js-line-number" data-line-number="708"></td>
        <td id="LC708" class="blob-code blob-code-inner js-file-line">    t_leafarea,             <span class="pl-c"><span class="pl-c">/*</span> total crown leaf area in m2 -- v.2.2  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L709" class="blob-num js-line-number" data-line-number="709"></td>
        <td id="LC709" class="blob-code blob-code-inner js-file-line">    t_dens,                 <span class="pl-c"><span class="pl-c">/*</span> tree crown average leaf density in m2/m2 -- v.2.2  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L710" class="blob-num js-line-number" data-line-number="710"></td>
        <td id="LC710" class="blob-code blob-code-inner js-file-line">    t_litter;               <span class="pl-c"><span class="pl-c">/*</span> tree litterfall at each timestep, in g (of dry mass) -- v.2.2  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L711" class="blob-num js-line-number" data-line-number="711"></td>
        <td id="LC711" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> *t_NDDfield;      <span class="pl-c"><span class="pl-c">/*</span> _NDD <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L712" class="blob-num js-line-number" data-line-number="712"></td>
        <td id="LC712" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L713" class="blob-num js-line-number" data-line-number="713"></td>
        <td id="LC713" class="blob-code blob-code-inner js-file-line">    Species *t_s;</td>
      </tr>
      <tr>
        <td id="L714" class="blob-num js-line-number" data-line-number="714"></td>
        <td id="LC714" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L715" class="blob-num js-line-number" data-line-number="715"></td>
        <td id="LC715" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">short</span></td>
      </tr>
      <tr>
        <td id="L716" class="blob-num js-line-number" data-line-number="716"></td>
        <td id="LC716" class="blob-code blob-code-inner js-file-line">    t_from_Data,            <span class="pl-c"><span class="pl-c">/*</span> indicator of whether tree is born through initialisation or through simulation routine <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L717" class="blob-num js-line-number" data-line-number="717"></td>
        <td id="LC717" class="blob-code blob-code-inner js-file-line">    t_sp_lab,               <span class="pl-c"><span class="pl-c">/*</span> species label <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L718" class="blob-num js-line-number" data-line-number="718"></td>
        <td id="LC718" class="blob-code blob-code-inner js-file-line">    t_hurt;                 <span class="pl-c"><span class="pl-c">/*</span> treefall index <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L719" class="blob-num js-line-number" data-line-number="719"></td>
        <td id="LC719" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L720" class="blob-num js-line-number" data-line-number="720"></td>
        <td id="LC720" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">Tree</span>(){					<span class="pl-c"><span class="pl-c">/*</span> constructor <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L721" class="blob-num js-line-number" data-line-number="721"></td>
        <td id="LC721" class="blob-code blob-code-inner js-file-line">        t_from_Data = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L722" class="blob-num js-line-number" data-line-number="722"></td>
        <td id="LC722" class="blob-code blob-code-inner js-file-line">        t_sp_lab = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L723" class="blob-num js-line-number" data-line-number="723"></td>
        <td id="LC723" class="blob-code blob-code-inner js-file-line">        t_age = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L724" class="blob-num js-line-number" data-line-number="724"></td>
        <td id="LC724" class="blob-code blob-code-inner js-file-line">        t_hurt = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L725" class="blob-num js-line-number" data-line-number="725"></td>
        <td id="LC725" class="blob-code blob-code-inner js-file-line">        t_NPP=t_GPP=t_Rday=t_Rnight=t_Rstem=t_PPFD=t_VPD=t_T=<span class="pl-c1">0.0</span>; <span class="pl-c"><span class="pl-c">/*</span> new v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L726" class="blob-num js-line-number" data-line-number="726"></td>
        <td id="LC726" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L727" class="blob-num js-line-number" data-line-number="727"></td>
        <td id="LC727" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(_TREEFALL){</td>
      </tr>
      <tr>
        <td id="L728" class="blob-num js-line-number" data-line-number="728"></td>
        <td id="LC728" class="blob-code blob-code-inner js-file-line">            t_C  = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L729" class="blob-num js-line-number" data-line-number="729"></td>
        <td id="LC729" class="blob-code blob-code-inner js-file-line">            t_angle = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L730" class="blob-num js-line-number" data-line-number="730"></td>
        <td id="LC730" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L731" class="blob-num js-line-number" data-line-number="731"></td>
        <td id="LC731" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(_BASICTREEFALL) t_Ct = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L732" class="blob-num js-line-number" data-line-number="732"></td>
        <td id="LC732" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L733" class="blob-num js-line-number" data-line-number="733"></td>
        <td id="LC733" class="blob-code blob-code-inner js-file-line">        t_dbh = t_Tree_Height = t_Crown_Radius = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L734" class="blob-num js-line-number" data-line-number="734"></td>
        <td id="LC734" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L735" class="blob-num js-line-number" data-line-number="735"></td>
        <td id="LC735" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L736" class="blob-num js-line-number" data-line-number="736"></td>
        <td id="LC736" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L737" class="blob-num js-line-number" data-line-number="737"></td>
        <td id="LC737" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">virtual</span> <span class="pl-en">~Tree</span>() {</td>
      </tr>
      <tr>
        <td id="L738" class="blob-num js-line-number" data-line-number="738"></td>
        <td id="LC738" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">delete []</span> t_NDDfield;   <span class="pl-c"><span class="pl-c">/*</span> _NDD <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L739" class="blob-num js-line-number" data-line-number="739"></td>
        <td id="LC739" class="blob-code blob-code-inner js-file-line">    };	<span class="pl-c"><span class="pl-c">/*</span> destructor <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L740" class="blob-num js-line-number" data-line-number="740"></td>
        <td id="LC740" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L741" class="blob-num js-line-number" data-line-number="741"></td>
        <td id="LC741" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L742" class="blob-num js-line-number" data-line-number="742"></td>
        <td id="LC742" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">Birth</span>(Species*,<span class="pl-k">int</span>,<span class="pl-k">int</span>);	<span class="pl-c"><span class="pl-c">/*</span> tree birth <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L743" class="blob-num js-line-number" data-line-number="743"></td>
        <td id="LC743" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L744" class="blob-num js-line-number" data-line-number="744"></td>
        <td id="LC744" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L745" class="blob-num js-line-number" data-line-number="745"></td>
        <td id="LC745" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">BirthFromData</span>(Species *S, <span class="pl-k">int</span> nume, <span class="pl-k">int</span> site0, <span class="pl-k">float</span> dbh_measured); <span class="pl-c"><span class="pl-c">/*</span> tree initialisation from field data <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L746" class="blob-num js-line-number" data-line-number="746"></td>
        <td id="LC746" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">Death</span>();                   <span class="pl-c"><span class="pl-c">/*</span> tree death <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L747" class="blob-num js-line-number" data-line-number="747"></td>
        <td id="LC747" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">Growth</span>();                  <span class="pl-c"><span class="pl-c">/*</span> tree growth <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L748" class="blob-num js-line-number" data-line-number="748"></td>
        <td id="LC748" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> <span class="pl-en">Fluxh</span>(<span class="pl-k">int</span> h);             <span class="pl-c"><span class="pl-c">/*</span> compute mean light flux received by the tree crown layer at height h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L749" class="blob-num js-line-number" data-line-number="749"></td>
        <td id="LC749" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>   <span class="pl-en">Couple</span>();                 <span class="pl-c"><span class="pl-c">/*</span> force exerted by other trees, _TREEFALL <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L750" class="blob-num js-line-number" data-line-number="750"></td>
        <td id="LC750" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L751" class="blob-num js-line-number" data-line-number="751"></td>
        <td id="LC751" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">DisperseSeed</span>();            <span class="pl-c"><span class="pl-c">/*</span> update Seed field <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L752" class="blob-num js-line-number" data-line-number="752"></td>
        <td id="LC752" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">FallTree</span>();                <span class="pl-c"><span class="pl-c">/*</span> tree falling routine, _TREEFALL <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L753" class="blob-num js-line-number" data-line-number="753"></td>
        <td id="LC753" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L754" class="blob-num js-line-number" data-line-number="754"></td>
        <td id="LC754" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">Update</span>();                  <span class="pl-c"><span class="pl-c">/*</span> tree evolution at each timestep <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L755" class="blob-num js-line-number" data-line-number="755"></td>
        <td id="LC755" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">Average</span>();                 <span class="pl-c"><span class="pl-c">/*</span> local computation of the averages <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L756" class="blob-num js-line-number" data-line-number="756"></td>
        <td id="LC756" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">CalcLAI</span>();</td>
      </tr>
      <tr>
        <td id="L757" class="blob-num js-line-number" data-line-number="757"></td>
        <td id="LC757" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>void TrunkLAI();              /* computation  of trunk LAI -- deprecated v.2.2 */</span></td>
      </tr>
      <tr>
        <td id="L758" class="blob-num js-line-number" data-line-number="758"></td>
        <td id="LC758" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">histdbh</span>();                 <span class="pl-c"><span class="pl-c">/*</span> computation of dbh histograms <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L759" class="blob-num js-line-number" data-line-number="759"></td>
        <td id="LC759" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">OutputTreeStandard</span>();  <span class="pl-c"><span class="pl-c">/*</span> creates standard output for trees, writes directly to cout stream <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L760" class="blob-num js-line-number" data-line-number="760"></td>
        <td id="LC760" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">OutputTreeStandard</span>(fstream&amp; output, <span class="pl-k">float</span> *addedinfo[<span class="pl-c1">5</span>]);         <span class="pl-c"><span class="pl-c">/*</span> overloading of function, creates standard output for trees and allows user to add 5 variables in floating point format (either global variables or locally defined ones), then writes to file specified in argument <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L761" class="blob-num js-line-number" data-line-number="761"></td>
        <td id="LC761" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L762" class="blob-num js-line-number" data-line-number="762"></td>
        <td id="LC762" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L763" class="blob-num js-line-number" data-line-number="763"></td>
        <td id="LC763" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L764" class="blob-num js-line-number" data-line-number="764"></td>
        <td id="LC764" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L765" class="blob-num js-line-number" data-line-number="765"></td>
        <td id="LC765" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>##############################################</span></td>
      </tr>
      <tr>
        <td id="L766" class="blob-num js-line-number" data-line-number="766"></td>
        <td id="LC766" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####	            Tree birth              ####</span></td>
      </tr>
      <tr>
        <td id="L767" class="blob-num js-line-number" data-line-number="767"></td>
        <td id="LC767" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####  called by BirthInit and UpdateTree   ####</span></td>
      </tr>
      <tr>
        <td id="L768" class="blob-num js-line-number" data-line-number="768"></td>
        <td id="LC768" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ##############################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L769" class="blob-num js-line-number" data-line-number="769"></td>
        <td id="LC769" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L770" class="blob-num js-line-number" data-line-number="770"></td>
        <td id="LC770" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L771" class="blob-num js-line-number" data-line-number="771"></td>
        <td id="LC771" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Tree::Birth</span>(Species *S, <span class="pl-k">int</span> nume, <span class="pl-k">int</span> site0) {</td>
      </tr>
      <tr>
        <td id="L772" class="blob-num js-line-number" data-line-number="772"></td>
        <td id="LC772" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L773" class="blob-num js-line-number" data-line-number="773"></td>
        <td id="LC773" class="blob-code blob-code-inner js-file-line">    t_site = site0;</td>
      </tr>
      <tr>
        <td id="L774" class="blob-num js-line-number" data-line-number="774"></td>
        <td id="LC774" class="blob-code blob-code-inner js-file-line">    t_sp_lab = nume;            <span class="pl-c"><span class="pl-c">/*</span> t_sp_lab is the species label of a site. Can be defined even if the site is empty (cf. persistence function defined in Chave, Am Nat. 2001) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L775" class="blob-num js-line-number" data-line-number="775"></td>
        <td id="LC775" class="blob-code blob-code-inner js-file-line">    t_NPPneg=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L776" class="blob-num js-line-number" data-line-number="776"></td>
        <td id="LC776" class="blob-code blob-code-inner js-file-line">    t_s = S+t_sp_lab;</td>
      </tr>
      <tr>
        <td id="L777" class="blob-num js-line-number" data-line-number="777"></td>
        <td id="LC777" class="blob-code blob-code-inner js-file-line">    t_age = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L778" class="blob-num js-line-number" data-line-number="778"></td>
        <td id="LC778" class="blob-code blob-code-inner js-file-line">    t_hurt = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L779" class="blob-num js-line-number" data-line-number="779"></td>
        <td id="LC779" class="blob-code blob-code-inner js-file-line">    t_dbh = DBH0;</td>
      </tr>
      <tr>
        <td id="L780" class="blob-num js-line-number" data-line-number="780"></td>
        <td id="LC780" class="blob-code blob-code-inner js-file-line">    t_ddbh=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L781" class="blob-num js-line-number" data-line-number="781"></td>
        <td id="LC781" class="blob-code blob-code-inner js-file-line">    t_dbh_thresh = ((t_s-&gt;s_dmax)-t_dbh)*<span class="pl-c1">flor</span>(<span class="pl-c1">1.0</span>+<span class="pl-c1">log</span>(<span class="pl-c1">genrand2</span>())*<span class="pl-c1">0.01</span>)+t_dbh;</td>
      </tr>
      <tr>
        <td id="L782" class="blob-num js-line-number" data-line-number="782"></td>
        <td id="LC782" class="blob-code blob-code-inner js-file-line">    t_hmax = (t_s-&gt;s_hmax);</td>
      </tr>
      <tr>
        <td id="L783" class="blob-num js-line-number" data-line-number="783"></td>
        <td id="LC783" class="blob-code blob-code-inner js-file-line">    t_Tree_Height = H0;</td>
      </tr>
      <tr>
        <td id="L784" class="blob-num js-line-number" data-line-number="784"></td>
        <td id="LC784" class="blob-code blob-code-inner js-file-line">    t_Crown_Radius  = ra0;</td>
      </tr>
      <tr>
        <td id="L785" class="blob-num js-line-number" data-line-number="785"></td>
        <td id="LC785" class="blob-code blob-code-inner js-file-line">    t_Crown_Depth = de0;</td>
      </tr>
      <tr>
        <td id="L786" class="blob-num js-line-number" data-line-number="786"></td>
        <td id="LC786" class="blob-code blob-code-inner js-file-line">    t_dens=dens;</td>
      </tr>
      <tr>
        <td id="L787" class="blob-num js-line-number" data-line-number="787"></td>
        <td id="LC787" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L788" class="blob-num js-line-number" data-line-number="788"></td>
        <td id="LC788" class="blob-code blob-code-inner js-file-line">    t_youngLA=t_dens*PI*t_Crown_Radius*LH*t_Crown_Radius*LH*t_Crown_Depth*LV;</td>
      </tr>
      <tr>
        <td id="L789" class="blob-num js-line-number" data-line-number="789"></td>
        <td id="LC789" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> initially, all stems have only young leaves -- LA stands for leaf area <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L790" class="blob-num js-line-number" data-line-number="790"></td>
        <td id="LC790" class="blob-code blob-code-inner js-file-line">    t_matureLA=<span class="pl-c1">0</span>;           <span class="pl-c"><span class="pl-c">/*</span> this is the amount of leaf area at maturity <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L791" class="blob-num js-line-number" data-line-number="791"></td>
        <td id="LC791" class="blob-code blob-code-inner js-file-line">    t_oldLA=<span class="pl-c1">0</span>;              <span class="pl-c"><span class="pl-c">/*</span> leaf area of senescing leaves <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L792" class="blob-num js-line-number" data-line-number="792"></td>
        <td id="LC792" class="blob-code blob-code-inner js-file-line">    t_leafarea=t_youngLA;   <span class="pl-c"><span class="pl-c">/*</span> should be sum of LA young+mature+old, but the equation is correct initially <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L793" class="blob-num js-line-number" data-line-number="793"></td>
        <td id="LC793" class="blob-code blob-code-inner js-file-line">    t_PPFD = <span class="pl-c1">Fluxh</span>(<span class="pl-c1">int</span>(t_Tree_Height)+<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L794" class="blob-num js-line-number" data-line-number="794"></td>
        <td id="LC794" class="blob-code blob-code-inner js-file-line">    tempRday=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L795" class="blob-num js-line-number" data-line-number="795"></td>
        <td id="LC795" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L796" class="blob-num js-line-number" data-line-number="796"></td>
        <td id="LC796" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L797" class="blob-num js-line-number" data-line-number="797"></td>
        <td id="LC797" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> The function Species::dailyGPPleaf returns the primary productivity per unit leaf area, i.e. in micromoles C/m^2/s.</span></td>
      </tr>
      <tr>
        <td id="L798" class="blob-num js-line-number" data-line-number="798"></td>
        <td id="LC798" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     It is converted into gC per m^2 of leaf per timestep by &quot;*189.3*timestep&quot; accounting only for the light hours (12 hours instead of 24): 189.3=12*3600*365.25*12/1000000</span></td>
      </tr>
      <tr>
        <td id="L799" class="blob-num js-line-number" data-line-number="799"></td>
        <td id="LC799" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     BEWARE: 12 is the molar mass of C, and also the number of light hours in a day</span></td>
      </tr>
      <tr>
        <td id="L800" class="blob-num js-line-number" data-line-number="800"></td>
        <td id="LC800" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     BEWARE: timestep is given as fraction of a year, so what is computed is actually the full assimilation per year which, in turn, is multiplied by the fraction per year that is under consideration</span></td>
      </tr>
      <tr>
        <td id="L801" class="blob-num js-line-number" data-line-number="801"></td>
        <td id="LC801" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     BEWARE: slight inconsistency through use of 365.25 when daily timestep is likely to be given as 365, but not incorrect <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L802" class="blob-num js-line-number" data-line-number="802"></td>
        <td id="LC802" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L803" class="blob-num js-line-number" data-line-number="803"></td>
        <td id="LC803" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_DAILYLIGHT){</td>
      </tr>
      <tr>
        <td id="L804" class="blob-num js-line-number" data-line-number="804"></td>
        <td id="LC804" class="blob-code blob-code-inner js-file-line">        t_GPP=t_s-&gt;<span class="pl-c1">dailyGPPleaf</span>(t_PPFD, t_VPD, t_T)*<span class="pl-c1">0.5</span>*t_youngLA*<span class="pl-c1">189.3</span>*timestep;</td>
      </tr>
      <tr>
        <td id="L805" class="blob-num js-line-number" data-line-number="805"></td>
        <td id="LC805" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L806" class="blob-num js-line-number" data-line-number="806"></td>
        <td id="LC806" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L807" class="blob-num js-line-number" data-line-number="807"></td>
        <td id="LC807" class="blob-code blob-code-inner js-file-line">        t_GPP=t_s-&gt;<span class="pl-c1">GPPleaf</span>(t_PPFD, t_VPD, t_T)*(<span class="pl-c1">0.5</span>*t_youngLA)*<span class="pl-c1">189.3</span>*timestep;</td>
      </tr>
      <tr>
        <td id="L808" class="blob-num js-line-number" data-line-number="808"></td>
        <td id="LC808" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L809" class="blob-num js-line-number" data-line-number="809"></td>
        <td id="LC809" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L810" class="blob-num js-line-number" data-line-number="810"></td>
        <td id="LC810" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Compute respiration terms <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L811" class="blob-num js-line-number" data-line-number="811"></td>
        <td id="LC811" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> at the beginning only young leaves! <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L812" class="blob-num js-line-number" data-line-number="812"></td>
        <td id="LC812" class="blob-code blob-code-inner js-file-line">    t_Rnight=t_s-&gt;s_Rdark*<span class="pl-c1">exp</span>((tnight-<span class="pl-c1">25</span>)*<span class="pl-c1">0.1</span>*<span class="pl-c1">log</span>(<span class="pl-c1">3.09</span>-<span class="pl-c1">0.0215</span>*(<span class="pl-c1">25</span>+tnight)))*<span class="pl-c1">0.5</span>*t_youngLA*<span class="pl-c1">189.3</span>*timestep;                   <span class="pl-c"><span class="pl-c">//</span> exp((tnight-25)*0.1*log(3.09-0.0215*(25+tnight))) is the temperature dependencies used by Atkin 2015 (equation 1)</span></td>
      </tr>
      <tr>
        <td id="L813" class="blob-num js-line-number" data-line-number="813"></td>
        <td id="LC813" class="blob-code blob-code-inner js-file-line">    t_Rday=tempRday*<span class="pl-c1">0.5</span>*t_youngLA*<span class="pl-c1">189.3</span>*timestep*<span class="pl-c1">0.40</span>;</td>
      </tr>
      <tr>
        <td id="L814" class="blob-num js-line-number" data-line-number="814"></td>
        <td id="LC814" class="blob-code blob-code-inner js-file-line">    tempRday=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L815" class="blob-num js-line-number" data-line-number="815"></td>
        <td id="LC815" class="blob-code blob-code-inner js-file-line">    t_Rstem=<span class="pl-c1">39.6</span>*PI*<span class="pl-c1">0.5</span>*t_dbh*(t_dbh-<span class="pl-c1">0.5</span>*t_dbh)*(t_Tree_Height-t_Crown_Depth)*<span class="pl-c1">exp</span>((temp-<span class="pl-c1">25</span>)/<span class="pl-c1">10</span>*<span class="pl-c1">log</span>(<span class="pl-c1">2</span>))*<span class="pl-c1">378.7</span>*timestep;          <span class="pl-c"><span class="pl-c">//</span>this is the computation of Rstem for dbh&lt;0.2 (see Tree::Growth); exp((temp-25)/10*log(2)) is the temperature dependency of Rstem, supposing a constant Q10=2, according to Ryan et al 1994 and Meir &amp; Grace 2002</span></td>
      </tr>
      <tr>
        <td id="L816" class="blob-num js-line-number" data-line-number="816"></td>
        <td id="LC816" class="blob-code blob-code-inner js-file-line">    t_NPP = <span class="pl-c1">0.75</span>*(t_GPP- <span class="pl-c1">1.5</span>*(t_Rday+t_Rnight)- <span class="pl-c1">1.5</span>*t_Rstem);                <span class="pl-c"><span class="pl-c">//</span> 0.75 is to account for growth respiration (Thornley &amp; canadell 2000,</span></td>
      </tr>
      <tr>
        <td id="L817" class="blob-num js-line-number" data-line-number="817"></td>
        <td id="LC817" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L818" class="blob-num js-line-number" data-line-number="818"></td>
        <td id="LC818" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> hrealmax=t_hmax*t_dbh_thresh/(t_dbh_thresh+t_s-&gt;s_ah);</td>
      </tr>
      <tr>
        <td id="L819" class="blob-num js-line-number" data-line-number="819"></td>
        <td id="LC819" class="blob-code blob-code-inner js-file-line">    t_hmature= (-<span class="pl-c1">11.47</span>+<span class="pl-c1">0.90</span>*hrealmax*LV)*NV*<span class="pl-c1">flor</span>(<span class="pl-c1">1.0</span>+<span class="pl-c1">log</span>(<span class="pl-c1">genrand2</span>())*<span class="pl-c1">0.01</span>);  <span class="pl-c"><span class="pl-c">//</span> this expression (hmature function of hmax, linear regression) is drawn from Wright et al 2005 JTE (from data on 22 species; 11 of which from BCI, Panama from Wright et al 2005; 11 of which from Thomas 1996 Oikos, Pasoh, Malaysia; all of which with hmax&gt;20m)</span></td>
      </tr>
      <tr>
        <td id="L820" class="blob-num js-line-number" data-line-number="820"></td>
        <td id="LC820" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_BASICTREEFALL) t_Ct = hrealmax*<span class="pl-c1">flor</span>(<span class="pl-c1">1.0</span>-vC*<span class="pl-c1">sqrt</span>(-<span class="pl-c1">log</span>(<span class="pl-c1">genrand2</span>())));</td>
      </tr>
      <tr>
        <td id="L821" class="blob-num js-line-number" data-line-number="821"></td>
        <td id="LC821" class="blob-code blob-code-inner js-file-line">    (t_s-&gt;s_nbind)++;</td>
      </tr>
      <tr>
        <td id="L822" class="blob-num js-line-number" data-line-number="822"></td>
        <td id="LC822" class="blob-code blob-code-inner js-file-line">    nblivetrees++;</td>
      </tr>
      <tr>
        <td id="L823" class="blob-num js-line-number" data-line-number="823"></td>
        <td id="LC823" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L824" class="blob-num js-line-number" data-line-number="824"></td>
        <td id="LC824" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> setting diagnostic variables <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L825" class="blob-num js-line-number" data-line-number="825"></td>
        <td id="LC825" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L826" class="blob-num js-line-number" data-line-number="826"></td>
        <td id="LC826" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L827" class="blob-num js-line-number" data-line-number="827"></td>
        <td id="LC827" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L828" class="blob-num js-line-number" data-line-number="828"></td>
        <td id="LC828" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>##############################################</span></td>
      </tr>
      <tr>
        <td id="L829" class="blob-num js-line-number" data-line-number="829"></td>
        <td id="LC829" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####   Tree Initialization from Data       ####</span></td>
      </tr>
      <tr>
        <td id="L830" class="blob-num js-line-number" data-line-number="830"></td>
        <td id="LC830" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ##############################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L831" class="blob-num js-line-number" data-line-number="831"></td>
        <td id="LC831" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L832" class="blob-num js-line-number" data-line-number="832"></td>
        <td id="LC832" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Tree::BirthFromData</span>(Species *S, <span class="pl-k">int</span> nume, <span class="pl-k">int</span> site0, <span class="pl-k">float</span> dbh_measured) {</td>
      </tr>
      <tr>
        <td id="L833" class="blob-num js-line-number" data-line-number="833"></td>
        <td id="LC833" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L834" class="blob-num js-line-number" data-line-number="834"></td>
        <td id="LC834" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> entirely modelled following Tree::Birth</span></td>
      </tr>
      <tr>
        <td id="L835" class="blob-num js-line-number" data-line-number="835"></td>
        <td id="LC835" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> main differences: dbh is given, related parameters are not set to fixed initial values, but derived through allometries</span></td>
      </tr>
      <tr>
        <td id="L836" class="blob-num js-line-number" data-line-number="836"></td>
        <td id="LC836" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> for comments regarding allometries and t_leafarea cf. Tree::Growth</span></td>
      </tr>
      <tr>
        <td id="L837" class="blob-num js-line-number" data-line-number="837"></td>
        <td id="LC837" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> for comments regarding everything else cf. Tree::Birth</span></td>
      </tr>
      <tr>
        <td id="L838" class="blob-num js-line-number" data-line-number="838"></td>
        <td id="LC838" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L839" class="blob-num js-line-number" data-line-number="839"></td>
        <td id="LC839" class="blob-code blob-code-inner js-file-line">    t_site = site0;</td>
      </tr>
      <tr>
        <td id="L840" class="blob-num js-line-number" data-line-number="840"></td>
        <td id="LC840" class="blob-code blob-code-inner js-file-line">    t_sp_lab = nume;</td>
      </tr>
      <tr>
        <td id="L841" class="blob-num js-line-number" data-line-number="841"></td>
        <td id="LC841" class="blob-code blob-code-inner js-file-line">    t_NPPneg=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L842" class="blob-num js-line-number" data-line-number="842"></td>
        <td id="LC842" class="blob-code blob-code-inner js-file-line">    t_s = S+t_sp_lab;</td>
      </tr>
      <tr>
        <td id="L843" class="blob-num js-line-number" data-line-number="843"></td>
        <td id="LC843" class="blob-code blob-code-inner js-file-line">    t_age = <span class="pl-c1">1</span>;          <span class="pl-c"><span class="pl-c">//</span>value not correct, but generally not problematic, used mainly as diagnostic variable and as indicator of whether tree is alive or not (death itself is independent of age), BUT: use as diagnostic variable cannot be ensured anymore and be careful if conditioning on t_age (e.g. for maturation)</span></td>
      </tr>
      <tr>
        <td id="L844" class="blob-num js-line-number" data-line-number="844"></td>
        <td id="LC844" class="blob-code blob-code-inner js-file-line">    t_from_Data = <span class="pl-c1">1</span>;    <span class="pl-c"><span class="pl-c">//</span>indicates that tree stems from data (and therefore t_age could not be used, etc.)</span></td>
      </tr>
      <tr>
        <td id="L845" class="blob-num js-line-number" data-line-number="845"></td>
        <td id="LC845" class="blob-code blob-code-inner js-file-line">    t_hurt = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L846" class="blob-num js-line-number" data-line-number="846"></td>
        <td id="LC846" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L847" class="blob-num js-line-number" data-line-number="847"></td>
        <td id="LC847" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>((t_s-&gt;s_dmax)*<span class="pl-c1">1.5</span> &gt; dbh_measured) t_dbh = dbh_measured;                          <span class="pl-c"><span class="pl-c">//</span> force dbh to be within limits of TROLL specifications</span></td>
      </tr>
      <tr>
        <td id="L848" class="blob-num js-line-number" data-line-number="848"></td>
        <td id="LC848" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L849" class="blob-num js-line-number" data-line-number="849"></td>
        <td id="LC849" class="blob-code blob-code-inner js-file-line">        t_dbh = (t_s-&gt;s_dmax);</td>
      </tr>
      <tr>
        <td id="L850" class="blob-num js-line-number" data-line-number="850"></td>
        <td id="LC850" class="blob-code blob-code-inner js-file-line">        cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>Warning: DBH_measured &gt; 1.5*DBH_max for species. DBH set to DBH_max for species <span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L851" class="blob-num js-line-number" data-line-number="851"></td>
        <td id="LC851" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L852" class="blob-num js-line-number" data-line-number="852"></td>
        <td id="LC852" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L853" class="blob-num js-line-number" data-line-number="853"></td>
        <td id="LC853" class="blob-code blob-code-inner js-file-line">    t_ddbh=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L854" class="blob-num js-line-number" data-line-number="854"></td>
        <td id="LC854" class="blob-code blob-code-inner js-file-line">    t_dbh_thresh = (t_s-&gt;s_dmax);</td>
      </tr>
      <tr>
        <td id="L855" class="blob-num js-line-number" data-line-number="855"></td>
        <td id="LC855" class="blob-code blob-code-inner js-file-line">    t_hmax = (t_s-&gt;s_hmax);</td>
      </tr>
      <tr>
        <td id="L856" class="blob-num js-line-number" data-line-number="856"></td>
        <td id="LC856" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L857" class="blob-num js-line-number" data-line-number="857"></td>
        <td id="LC857" class="blob-code blob-code-inner js-file-line">    t_Tree_Height = t_hmax * t_dbh/(t_dbh + (t_s-&gt;s_ah));</td>
      </tr>
      <tr>
        <td id="L858" class="blob-num js-line-number" data-line-number="858"></td>
        <td id="LC858" class="blob-code blob-code-inner js-file-line">    t_Crown_Radius  = <span class="pl-c1">0.80</span>+<span class="pl-c1">10.47</span>*t_dbh-<span class="pl-c1">3.33</span>*t_dbh*t_dbh;;</td>
      </tr>
      <tr>
        <td id="L859" class="blob-num js-line-number" data-line-number="859"></td>
        <td id="LC859" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (t_Tree_Height&lt;<span class="pl-c1">5.0</span>) t_Crown_Depth = <span class="pl-c1">0.133</span>+<span class="pl-c1">0.168</span>*t_Tree_Height;</td>
      </tr>
      <tr>
        <td id="L860" class="blob-num js-line-number" data-line-number="860"></td>
        <td id="LC860" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> t_Crown_Depth = -<span class="pl-c1">0.48</span>+<span class="pl-c1">0.26</span>*t_Tree_Height;</td>
      </tr>
      <tr>
        <td id="L861" class="blob-num js-line-number" data-line-number="861"></td>
        <td id="LC861" class="blob-code blob-code-inner js-file-line">    t_dens=dens;</td>
      </tr>
      <tr>
        <td id="L862" class="blob-num js-line-number" data-line-number="862"></td>
        <td id="LC862" class="blob-code blob-code-inner js-file-line">    t_leafarea=t_dens*PI*t_Crown_Radius*LH*t_Crown_Radius*LH*t_Crown_Depth;</td>
      </tr>
      <tr>
        <td id="L863" class="blob-num js-line-number" data-line-number="863"></td>
        <td id="LC863" class="blob-code blob-code-inner js-file-line">    t_youngLA=<span class="pl-c1">0.25</span>*t_leafarea;</td>
      </tr>
      <tr>
        <td id="L864" class="blob-num js-line-number" data-line-number="864"></td>
        <td id="LC864" class="blob-code blob-code-inner js-file-line">    t_matureLA=<span class="pl-c1">0.5</span>*t_leafarea;</td>
      </tr>
      <tr>
        <td id="L865" class="blob-num js-line-number" data-line-number="865"></td>
        <td id="LC865" class="blob-code blob-code-inner js-file-line">    t_oldLA=<span class="pl-c1">0.25</span>*t_leafarea;</td>
      </tr>
      <tr>
        <td id="L866" class="blob-num js-line-number" data-line-number="866"></td>
        <td id="LC866" class="blob-code blob-code-inner js-file-line">    t_PPFD = <span class="pl-c1">Fluxh</span>(<span class="pl-c1">int</span>(t_Tree_Height)+<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L867" class="blob-num js-line-number" data-line-number="867"></td>
        <td id="LC867" class="blob-code blob-code-inner js-file-line">    tempRday=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L868" class="blob-num js-line-number" data-line-number="868"></td>
        <td id="LC868" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L869" class="blob-num js-line-number" data-line-number="869"></td>
        <td id="LC869" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_DAILYLIGHT){</td>
      </tr>
      <tr>
        <td id="L870" class="blob-num js-line-number" data-line-number="870"></td>
        <td id="LC870" class="blob-code blob-code-inner js-file-line">        t_GPP=t_s-&gt;<span class="pl-c1">dailyGPPleaf</span>(t_PPFD, t_VPD, t_T)*(<span class="pl-c1">0.5</span>*t_youngLA+t_matureLA+<span class="pl-c1">0.5</span>*t_oldLA)*<span class="pl-c1">189.3</span>*timestep;</td>
      </tr>
      <tr>
        <td id="L871" class="blob-num js-line-number" data-line-number="871"></td>
        <td id="LC871" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L872" class="blob-num js-line-number" data-line-number="872"></td>
        <td id="LC872" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L873" class="blob-num js-line-number" data-line-number="873"></td>
        <td id="LC873" class="blob-code blob-code-inner js-file-line">        t_GPP=t_s-&gt;<span class="pl-c1">GPPleaf</span>(t_PPFD, t_VPD, t_T)*(<span class="pl-c1">0.5</span>*t_youngLA+t_matureLA+<span class="pl-c1">0.5</span>*t_oldLA)*<span class="pl-c1">189.3</span>*timestep;</td>
      </tr>
      <tr>
        <td id="L874" class="blob-num js-line-number" data-line-number="874"></td>
        <td id="LC874" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L875" class="blob-num js-line-number" data-line-number="875"></td>
        <td id="LC875" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L876" class="blob-num js-line-number" data-line-number="876"></td>
        <td id="LC876" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> sapthick=<span class="pl-c1">0.04</span>;</td>
      </tr>
      <tr>
        <td id="L877" class="blob-num js-line-number" data-line-number="877"></td>
        <td id="LC877" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (t_dbh &lt; <span class="pl-c1">0.08</span>) sapthick=<span class="pl-c1">0.5</span>*t_dbh;</td>
      </tr>
      <tr>
        <td id="L878" class="blob-num js-line-number" data-line-number="878"></td>
        <td id="LC878" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L879" class="blob-num js-line-number" data-line-number="879"></td>
        <td id="LC879" class="blob-code blob-code-inner js-file-line">    t_Rnight=t_s-&gt;s_Rdark*<span class="pl-c1">exp</span>((tnight-<span class="pl-c1">25</span>)*<span class="pl-c1">0.1</span>*<span class="pl-c1">log</span>(<span class="pl-c1">3.09</span>-<span class="pl-c1">0.0215</span>*(<span class="pl-c1">25</span>+tnight)))*(<span class="pl-c1">0.5</span>*t_youngLA+t_matureLA+<span class="pl-c1">0.5</span>*t_oldLA)*<span class="pl-c1">189.3</span>*timestep;</td>
      </tr>
      <tr>
        <td id="L880" class="blob-num js-line-number" data-line-number="880"></td>
        <td id="LC880" class="blob-code blob-code-inner js-file-line">    t_Rday=tempRday*(<span class="pl-c1">0.5</span>*t_youngLA+t_matureLA+<span class="pl-c1">0.5</span>*t_oldLA)*<span class="pl-c1">189.3</span>*timestep*<span class="pl-c1">0.40</span>;</td>
      </tr>
      <tr>
        <td id="L881" class="blob-num js-line-number" data-line-number="881"></td>
        <td id="LC881" class="blob-code blob-code-inner js-file-line">    tempRday=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L882" class="blob-num js-line-number" data-line-number="882"></td>
        <td id="LC882" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L883" class="blob-num js-line-number" data-line-number="883"></td>
        <td id="LC883" class="blob-code blob-code-inner js-file-line">    t_Rstem=<span class="pl-c1">39.6</span>*sapthick*PI*(t_dbh-sapthick)*(t_Tree_Height-t_Crown_Depth)*<span class="pl-c1">378.7</span>*timestep;</td>
      </tr>
      <tr>
        <td id="L884" class="blob-num js-line-number" data-line-number="884"></td>
        <td id="LC884" class="blob-code blob-code-inner js-file-line">    t_Rstem*=<span class="pl-c1">exp</span>((temp-<span class="pl-c1">25</span>)/<span class="pl-c1">10</span>*<span class="pl-c1">log</span>(<span class="pl-c1">2</span>));</td>
      </tr>
      <tr>
        <td id="L885" class="blob-num js-line-number" data-line-number="885"></td>
        <td id="LC885" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L886" class="blob-num js-line-number" data-line-number="886"></td>
        <td id="LC886" class="blob-code blob-code-inner js-file-line">    t_NPP = <span class="pl-c1">0.75</span>*(t_GPP- <span class="pl-c1">1.5</span>*(t_Rday+t_Rnight)- <span class="pl-c1">1.50</span>*t_Rstem);</td>
      </tr>
      <tr>
        <td id="L887" class="blob-num js-line-number" data-line-number="887"></td>
        <td id="LC887" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L888" class="blob-num js-line-number" data-line-number="888"></td>
        <td id="LC888" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> hrealmax;</td>
      </tr>
      <tr>
        <td id="L889" class="blob-num js-line-number" data-line-number="889"></td>
        <td id="LC889" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L890" class="blob-num js-line-number" data-line-number="890"></td>
        <td id="LC890" class="blob-code blob-code-inner js-file-line">    hrealmax = t_hmax * t_dbh_thresh/(t_dbh_thresh + t_s-&gt;s_ah);</td>
      </tr>
      <tr>
        <td id="L891" class="blob-num js-line-number" data-line-number="891"></td>
        <td id="LC891" class="blob-code blob-code-inner js-file-line">    t_hmature= (-<span class="pl-c1">11.47</span>+<span class="pl-c1">0.90</span>*hrealmax*LV)*NV*<span class="pl-c1">flor</span>(<span class="pl-c1">1.0</span>+<span class="pl-c1">log</span>(<span class="pl-c1">genrand2</span>())*<span class="pl-c1">0.01</span>);</td>
      </tr>
      <tr>
        <td id="L892" class="blob-num js-line-number" data-line-number="892"></td>
        <td id="LC892" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_BASICTREEFALL) t_Ct = hrealmax*<span class="pl-c1">flor</span>(<span class="pl-c1">1.0</span>-vC*<span class="pl-c1">sqrt</span>(-<span class="pl-c1">log</span>(<span class="pl-c1">genrand2</span>())));</td>
      </tr>
      <tr>
        <td id="L893" class="blob-num js-line-number" data-line-number="893"></td>
        <td id="LC893" class="blob-code blob-code-inner js-file-line">    (t_s-&gt;s_nbind)++;</td>
      </tr>
      <tr>
        <td id="L894" class="blob-num js-line-number" data-line-number="894"></td>
        <td id="LC894" class="blob-code blob-code-inner js-file-line">    nblivetrees++;</td>
      </tr>
      <tr>
        <td id="L895" class="blob-num js-line-number" data-line-number="895"></td>
        <td id="LC895" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L896" class="blob-num js-line-number" data-line-number="896"></td>
        <td id="LC896" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L897" class="blob-num js-line-number" data-line-number="897"></td>
        <td id="LC897" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L898" class="blob-num js-line-number" data-line-number="898"></td>
        <td id="LC898" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L899" class="blob-num js-line-number" data-line-number="899"></td>
        <td id="LC899" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L900" class="blob-num js-line-number" data-line-number="900"></td>
        <td id="LC900" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>################################################</span></td>
      </tr>
      <tr>
        <td id="L901" class="blob-num js-line-number" data-line-number="901"></td>
        <td id="LC901" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> #### Contribution of each tree in LAI field  ####</span></td>
      </tr>
      <tr>
        <td id="L902" class="blob-num js-line-number" data-line-number="902"></td>
        <td id="LC902" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####          called by UpdateField          ####</span></td>
      </tr>
      <tr>
        <td id="L903" class="blob-num js-line-number" data-line-number="903"></td>
        <td id="LC903" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> #################################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L904" class="blob-num js-line-number" data-line-number="904"></td>
        <td id="LC904" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L905" class="blob-num js-line-number" data-line-number="905"></td>
        <td id="LC905" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> modified in v.2.3: additional contribution to voxels that are not fully occupied by the tree crown</span></td>
      </tr>
      <tr>
        <td id="L906" class="blob-num js-line-number" data-line-number="906"></td>
        <td id="LC906" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> be aware: this does not calculate LAI3D directly, this only calculates the density in each voxel belonging to a tree</span></td>
      </tr>
      <tr>
        <td id="L907" class="blob-num js-line-number" data-line-number="907"></td>
        <td id="LC907" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> the final LAI field is calculated outside of the class Tree</span></td>
      </tr>
      <tr>
        <td id="L908" class="blob-num js-line-number" data-line-number="908"></td>
        <td id="LC908" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L909" class="blob-num js-line-number" data-line-number="909"></td>
        <td id="LC909" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L910" class="blob-num js-line-number" data-line-number="910"></td>
        <td id="LC910" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Tree::CalcLAI</span>() {</td>
      </tr>
      <tr>
        <td id="L911" class="blob-num js-line-number" data-line-number="911"></td>
        <td id="LC911" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(t_age&gt;<span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L912" class="blob-num js-line-number" data-line-number="912"></td>
        <td id="LC912" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">int</span> crown_base,</td>
      </tr>
      <tr>
        <td id="L913" class="blob-num js-line-number" data-line-number="913"></td>
        <td id="LC913" class="blob-code blob-code-inner js-file-line">        crown_top,</td>
      </tr>
      <tr>
        <td id="L914" class="blob-num js-line-number" data-line-number="914"></td>
        <td id="LC914" class="blob-code blob-code-inner js-file-line">        crown_r,</td>
      </tr>
      <tr>
        <td id="L915" class="blob-num js-line-number" data-line-number="915"></td>
        <td id="LC915" class="blob-code blob-code-inner js-file-line">        row_trunc,</td>
      </tr>
      <tr>
        <td id="L916" class="blob-num js-line-number" data-line-number="916"></td>
        <td id="LC916" class="blob-code blob-code-inner js-file-line">        col_trunc,</td>
      </tr>
      <tr>
        <td id="L917" class="blob-num js-line-number" data-line-number="917"></td>
        <td id="LC917" class="blob-code blob-code-inner js-file-line">        xx,</td>
      </tr>
      <tr>
        <td id="L918" class="blob-num js-line-number" data-line-number="918"></td>
        <td id="LC918" class="blob-code blob-code-inner js-file-line">        yy,</td>
      </tr>
      <tr>
        <td id="L919" class="blob-num js-line-number" data-line-number="919"></td>
        <td id="LC919" class="blob-code blob-code-inner js-file-line">        site;</td>
      </tr>
      <tr>
        <td id="L920" class="blob-num js-line-number" data-line-number="920"></td>
        <td id="LC920" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L921" class="blob-num js-line-number" data-line-number="921"></td>
        <td id="LC921" class="blob-code blob-code-inner js-file-line">        crown_r=<span class="pl-c1">int</span>(t_Crown_Radius);</td>
      </tr>
      <tr>
        <td id="L922" class="blob-num js-line-number" data-line-number="922"></td>
        <td id="LC922" class="blob-code blob-code-inner js-file-line">        row_trunc=t_site/cols;</td>
      </tr>
      <tr>
        <td id="L923" class="blob-num js-line-number" data-line-number="923"></td>
        <td id="LC923" class="blob-code blob-code-inner js-file-line">        col_trunc=t_site%cols;</td>
      </tr>
      <tr>
        <td id="L924" class="blob-num js-line-number" data-line-number="924"></td>
        <td id="LC924" class="blob-code blob-code-inner js-file-line">        crown_base = <span class="pl-c1">int</span>(t_Tree_Height-t_Crown_Depth);</td>
      </tr>
      <tr>
        <td id="L925" class="blob-num js-line-number" data-line-number="925"></td>
        <td id="LC925" class="blob-code blob-code-inner js-file-line">        crown_top = <span class="pl-c1">int</span>(t_Tree_Height);</td>
      </tr>
      <tr>
        <td id="L926" class="blob-num js-line-number" data-line-number="926"></td>
        <td id="LC926" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(<span class="pl-k">int</span> col=<span class="pl-c1">max</span>(<span class="pl-c1">0</span>,col_trunc-crown_r);col&lt;=<span class="pl-c1">min</span>(cols-<span class="pl-c1">1</span>,col_trunc+crown_r);col++) {                      <span class="pl-c"><span class="pl-c">//</span> loop over the tree crown</span></td>
      </tr>
      <tr>
        <td id="L927" class="blob-num js-line-number" data-line-number="927"></td>
        <td id="LC927" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(<span class="pl-k">int</span> row=<span class="pl-c1">max</span>(<span class="pl-c1">0</span>,row_trunc-crown_r);row&lt;=<span class="pl-c1">min</span>(rows-<span class="pl-c1">1</span>,row_trunc+crown_r);row++) {                  <span class="pl-c"><span class="pl-c">//</span> loop over the tree crown</span></td>
      </tr>
      <tr>
        <td id="L928" class="blob-num js-line-number" data-line-number="928"></td>
        <td id="LC928" class="blob-code blob-code-inner js-file-line">                xx=col_trunc-col;</td>
      </tr>
      <tr>
        <td id="L929" class="blob-num js-line-number" data-line-number="929"></td>
        <td id="LC929" class="blob-code blob-code-inner js-file-line">                yy=row_trunc-row;</td>
      </tr>
      <tr>
        <td id="L930" class="blob-num js-line-number" data-line-number="930"></td>
        <td id="LC930" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(xx*xx+yy*yy&lt;=crown_r*crown_r){                                                        <span class="pl-c"><span class="pl-c">//</span> check whether voxel is within crown</span></td>
      </tr>
      <tr>
        <td id="L931" class="blob-num js-line-number" data-line-number="931"></td>
        <td id="LC931" class="blob-code blob-code-inner js-file-line">                    site=col+cols*row+SBORD;</td>
      </tr>
      <tr>
        <td id="L932" class="blob-num js-line-number" data-line-number="932"></td>
        <td id="LC932" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span> (crown_top-crown_base == <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L933" class="blob-num js-line-number" data-line-number="933"></td>
        <td id="LC933" class="blob-code blob-code-inner js-file-line">                        LAI3D[crown_top][site] += t_dens*t_Crown_Depth;</td>
      </tr>
      <tr>
        <td id="L934" class="blob-num js-line-number" data-line-number="934"></td>
        <td id="LC934" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L935" class="blob-num js-line-number" data-line-number="935"></td>
        <td id="LC935" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L936" class="blob-num js-line-number" data-line-number="936"></td>
        <td id="LC936" class="blob-code blob-code-inner js-file-line">                        LAI3D[crown_top][site] += t_dens*(t_Tree_Height-crown_top);</td>
      </tr>
      <tr>
        <td id="L937" class="blob-num js-line-number" data-line-number="937"></td>
        <td id="LC937" class="blob-code blob-code-inner js-file-line">                        LAI3D[crown_base][site] += t_dens*(crown_base+<span class="pl-c1">1</span>-(t_Tree_Height-t_Crown_Depth));</td>
      </tr>
      <tr>
        <td id="L938" class="blob-num js-line-number" data-line-number="938"></td>
        <td id="LC938" class="blob-code blob-code-inner js-file-line">                        <span class="pl-k">if</span>(crown_top-crown_base&gt;=<span class="pl-c1">2</span>){</td>
      </tr>
      <tr>
        <td id="L939" class="blob-num js-line-number" data-line-number="939"></td>
        <td id="LC939" class="blob-code blob-code-inner js-file-line">                            <span class="pl-k">for</span>(<span class="pl-k">int</span> h=crown_base+<span class="pl-c1">1</span>;h &lt;= crown_top-<span class="pl-c1">1</span>;h++)LAI3D[h][site] += t_dens;    <span class="pl-c"><span class="pl-c">//</span> loop over the crown depth</span></td>
      </tr>
      <tr>
        <td id="L940" class="blob-num js-line-number" data-line-number="940"></td>
        <td id="LC940" class="blob-code blob-code-inner js-file-line">                        }</td>
      </tr>
      <tr>
        <td id="L941" class="blob-num js-line-number" data-line-number="941"></td>
        <td id="LC941" class="blob-code blob-code-inner js-file-line">                        </td>
      </tr>
      <tr>
        <td id="L942" class="blob-num js-line-number" data-line-number="942"></td>
        <td id="LC942" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L943" class="blob-num js-line-number" data-line-number="943"></td>
        <td id="LC943" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L944" class="blob-num js-line-number" data-line-number="944"></td>
        <td id="LC944" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L945" class="blob-num js-line-number" data-line-number="945"></td>
        <td id="LC945" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L946" class="blob-num js-line-number" data-line-number="946"></td>
        <td id="LC946" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L947" class="blob-num js-line-number" data-line-number="947"></td>
        <td id="LC947" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L948" class="blob-num js-line-number" data-line-number="948"></td>
        <td id="LC948" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L949" class="blob-num js-line-number" data-line-number="949"></td>
        <td id="LC949" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L950" class="blob-num js-line-number" data-line-number="950"></td>
        <td id="LC950" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L951" class="blob-num js-line-number" data-line-number="951"></td>
        <td id="LC951" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>###################################################</span></td>
      </tr>
      <tr>
        <td id="L952" class="blob-num js-line-number" data-line-number="952"></td>
        <td id="LC952" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####  Computation of PPFD right above the tree  ####</span></td>
      </tr>
      <tr>
        <td id="L953" class="blob-num js-line-number" data-line-number="953"></td>
        <td id="LC953" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####    called by Tree::Birth and Growth   in     ####</span></td>
      </tr>
      <tr>
        <td id="L954" class="blob-num js-line-number" data-line-number="954"></td>
        <td id="LC954" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####################################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L955" class="blob-num js-line-number" data-line-number="955"></td>
        <td id="LC955" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L956" class="blob-num js-line-number" data-line-number="956"></td>
        <td id="LC956" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> v.2.3.: Tree::Fluxh() computes the average light flux received by a tree crown layer at height h , and also the average VPD and T it is thriving in (modified 1/02/2016)<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L957" class="blob-num js-line-number" data-line-number="957"></td>
        <td id="LC957" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L958" class="blob-num js-line-number" data-line-number="958"></td>
        <td id="LC958" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> <span class="pl-en">Tree::Fluxh</span>(<span class="pl-k">int</span> h) {</td>
      </tr>
      <tr>
        <td id="L959" class="blob-num js-line-number" data-line-number="959"></td>
        <td id="LC959" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> count=<span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L960" class="blob-num js-line-number" data-line-number="960"></td>
        <td id="LC960" class="blob-code blob-code-inner js-file-line">    xx,yy,radius_int;</td>
      </tr>
      <tr>
        <td id="L961" class="blob-num js-line-number" data-line-number="961"></td>
        <td id="LC961" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> absorb=<span class="pl-c1">0.0</span>,flux = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L962" class="blob-num js-line-number" data-line-number="962"></td>
        <td id="LC962" class="blob-code blob-code-inner js-file-line">    t_VPD=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L963" class="blob-num js-line-number" data-line-number="963"></td>
        <td id="LC963" class="blob-code blob-code-inner js-file-line">    t_T=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L964" class="blob-num js-line-number" data-line-number="964"></td>
        <td id="LC964" class="blob-code blob-code-inner js-file-line">    radius_int = <span class="pl-c1">int</span>(t_Crown_Radius);</td>
      </tr>
      <tr>
        <td id="L965" class="blob-num js-line-number" data-line-number="965"></td>
        <td id="LC965" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(radius_int == <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L966" class="blob-num js-line-number" data-line-number="966"></td>
        <td id="LC966" class="blob-code blob-code-inner js-file-line">        count=<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L967" class="blob-num js-line-number" data-line-number="967"></td>
        <td id="LC967" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (h &lt; HEIGHT) absorb = LAI3D[h][t_site+SBORD];            <span class="pl-c"><span class="pl-c">//</span> absorb = 0.0 by default</span></td>
      </tr>
      <tr>
        <td id="L968" class="blob-num js-line-number" data-line-number="968"></td>
        <td id="LC968" class="blob-code blob-code-inner js-file-line">        flux = <span class="pl-c1">exp</span>(-absorb*klight);</td>
      </tr>
      <tr>
        <td id="L969" class="blob-num js-line-number" data-line-number="969"></td>
        <td id="LC969" class="blob-code blob-code-inner js-file-line">        t_VPD = <span class="pl-c1">0.25</span>+<span class="pl-c1">sqrt</span>(<span class="pl-c1">maxf</span>(<span class="pl-c1">0.0</span> , <span class="pl-c1">0.08035714</span>*(<span class="pl-c1">7</span>-absorb)));</td>
      </tr>
      <tr>
        <td id="L970" class="blob-num js-line-number" data-line-number="970"></td>
        <td id="LC970" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> this expressions results from fit of observations of relationships between VPD and height within dense canopy (HOBO data on COPAS tower, Shuttleworth et al 1985; Camargo &amp; Kapos 1995 journal of Tropical Ecology)</span></td>
      </tr>
      <tr>
        <td id="L971" class="blob-num js-line-number" data-line-number="971"></td>
        <td id="LC971" class="blob-code blob-code-inner js-file-line">        t_T = tmax-<span class="pl-c1">0.4285714</span>*(<span class="pl-c1">minf</span>(<span class="pl-c1">7</span>,absorb));</td>
      </tr>
      <tr>
        <td id="L972" class="blob-num js-line-number" data-line-number="972"></td>
        <td id="LC972" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> 0.4285714=3/7, assuming deltaT between the top canopy and dense understorey is constant = 3°C, could be refined.</span></td>
      </tr>
      <tr>
        <td id="L973" class="blob-num js-line-number" data-line-number="973"></td>
        <td id="LC973" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L974" class="blob-num js-line-number" data-line-number="974"></td>
        <td id="LC974" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L975" class="blob-num js-line-number" data-line-number="975"></td>
        <td id="LC975" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">int</span> row0,col0;</td>
      </tr>
      <tr>
        <td id="L976" class="blob-num js-line-number" data-line-number="976"></td>
        <td id="LC976" class="blob-code blob-code-inner js-file-line">        row0=t_site/cols;</td>
      </tr>
      <tr>
        <td id="L977" class="blob-num js-line-number" data-line-number="977"></td>
        <td id="LC977" class="blob-code blob-code-inner js-file-line">        col0=t_site%cols;</td>
      </tr>
      <tr>
        <td id="L978" class="blob-num js-line-number" data-line-number="978"></td>
        <td id="LC978" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(<span class="pl-k">int</span> col=<span class="pl-c1">max</span>(<span class="pl-c1">0</span>,col0-radius_int);col&lt;<span class="pl-c1">min</span>(cols,col0+radius_int+<span class="pl-c1">1</span>);col++) {</td>
      </tr>
      <tr>
        <td id="L979" class="blob-num js-line-number" data-line-number="979"></td>
        <td id="LC979" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(<span class="pl-k">int</span> row=<span class="pl-c1">max</span>(<span class="pl-c1">0</span>,row0-radius_int);row&lt;<span class="pl-c1">min</span>(rows,row0+radius_int+<span class="pl-c1">1</span>);row++) {                     <span class="pl-c"><span class="pl-c">//</span>loop over the tree crown</span></td>
      </tr>
      <tr>
        <td id="L980" class="blob-num js-line-number" data-line-number="980"></td>
        <td id="LC980" class="blob-code blob-code-inner js-file-line">                xx=col0-col;</td>
      </tr>
      <tr>
        <td id="L981" class="blob-num js-line-number" data-line-number="981"></td>
        <td id="LC981" class="blob-code blob-code-inner js-file-line">                yy=row0-row;</td>
      </tr>
      <tr>
        <td id="L982" class="blob-num js-line-number" data-line-number="982"></td>
        <td id="LC982" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(xx*xx+yy*yy &lt;= radius_int*radius_int) {                                                  <span class="pl-c"><span class="pl-c">//</span>is the voxel within crown?</span></td>
      </tr>
      <tr>
        <td id="L983" class="blob-num js-line-number" data-line-number="983"></td>
        <td id="LC983" class="blob-code blob-code-inner js-file-line">                    count++;</td>
      </tr>
      <tr>
        <td id="L984" class="blob-num js-line-number" data-line-number="984"></td>
        <td id="LC984" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span> (h &lt; HEIGHT) absorb = LAI3D[h][col+cols*row+SBORD];</td>
      </tr>
      <tr>
        <td id="L985" class="blob-num js-line-number" data-line-number="985"></td>
        <td id="LC985" class="blob-code blob-code-inner js-file-line">                    flux += <span class="pl-c1">exp</span>(-absorb*klight);</td>
      </tr>
      <tr>
        <td id="L986" class="blob-num js-line-number" data-line-number="986"></td>
        <td id="LC986" class="blob-code blob-code-inner js-file-line">                    t_VPD+=<span class="pl-c1">0.25</span>+<span class="pl-c1">sqrt</span>(<span class="pl-c1">maxf</span>(<span class="pl-c1">0.0</span> , <span class="pl-c1">0.08035714</span>*(<span class="pl-c1">7</span>-absorb)));</td>
      </tr>
      <tr>
        <td id="L987" class="blob-num js-line-number" data-line-number="987"></td>
        <td id="LC987" class="blob-code blob-code-inner js-file-line">                    t_T+=tmax-<span class="pl-c1">0.4285714</span>*(<span class="pl-c1">minf</span>(<span class="pl-c1">7</span>,absorb));</td>
      </tr>
      <tr>
        <td id="L988" class="blob-num js-line-number" data-line-number="988"></td>
        <td id="LC988" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L989" class="blob-num js-line-number" data-line-number="989"></td>
        <td id="LC989" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L990" class="blob-num js-line-number" data-line-number="990"></td>
        <td id="LC990" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L991" class="blob-num js-line-number" data-line-number="991"></td>
        <td id="LC991" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L992" class="blob-num js-line-number" data-line-number="992"></td>
        <td id="LC992" class="blob-code blob-code-inner js-file-line">    flux*=Wmax/<span class="pl-c1">float</span>(count);</td>
      </tr>
      <tr>
        <td id="L993" class="blob-num js-line-number" data-line-number="993"></td>
        <td id="LC993" class="blob-code blob-code-inner js-file-line">    t_VPD*=VPDmax/<span class="pl-c1">float</span>(count);</td>
      </tr>
      <tr>
        <td id="L994" class="blob-num js-line-number" data-line-number="994"></td>
        <td id="LC994" class="blob-code blob-code-inner js-file-line">    t_T*=<span class="pl-c1">1</span>/<span class="pl-c1">float</span>(count);</td>
      </tr>
      <tr>
        <td id="L995" class="blob-num js-line-number" data-line-number="995"></td>
        <td id="LC995" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> flux;</td>
      </tr>
      <tr>
        <td id="L996" class="blob-num js-line-number" data-line-number="996"></td>
        <td id="LC996" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L997" class="blob-num js-line-number" data-line-number="997"></td>
        <td id="LC997" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L998" class="blob-num js-line-number" data-line-number="998"></td>
        <td id="LC998" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L999" class="blob-num js-line-number" data-line-number="999"></td>
        <td id="LC999" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>############################################</span></td>
      </tr>
      <tr>
        <td id="L1000" class="blob-num js-line-number" data-line-number="1000"></td>
        <td id="LC1000" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####            Tree growth              ####</span></td>
      </tr>
      <tr>
        <td id="L1001" class="blob-num js-line-number" data-line-number="1001"></td>
        <td id="LC1001" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####         called by UpdateTree        ####</span></td>
      </tr>
      <tr>
        <td id="L1002" class="blob-num js-line-number" data-line-number="1002"></td>
        <td id="LC1002" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> #############################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1003" class="blob-num js-line-number" data-line-number="1003"></td>
        <td id="LC1003" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1004" class="blob-num js-line-number" data-line-number="1004"></td>
        <td id="LC1004" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Tree::Growth</span>() {</td>
      </tr>
      <tr>
        <td id="L1005" class="blob-num js-line-number" data-line-number="1005"></td>
        <td id="LC1005" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1006" class="blob-num js-line-number" data-line-number="1006"></td>
        <td id="LC1006" class="blob-code blob-code-inner js-file-line">    t_GPP=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1007" class="blob-num js-line-number" data-line-number="1007"></td>
        <td id="LC1007" class="blob-code blob-code-inner js-file-line">    t_NPP=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1008" class="blob-num js-line-number" data-line-number="1008"></td>
        <td id="LC1008" class="blob-code blob-code-inner js-file-line">    t_PPFD=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1009" class="blob-num js-line-number" data-line-number="1009"></td>
        <td id="LC1009" class="blob-code blob-code-inner js-file-line">    t_Rday=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1010" class="blob-num js-line-number" data-line-number="1010"></td>
        <td id="LC1010" class="blob-code blob-code-inner js-file-line">    t_Rnight=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1011" class="blob-num js-line-number" data-line-number="1011"></td>
        <td id="LC1011" class="blob-code blob-code-inner js-file-line">    t_Rstem=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1012" class="blob-num js-line-number" data-line-number="1012"></td>
        <td id="LC1012" class="blob-code blob-code-inner js-file-line">    t_VPD=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1013" class="blob-num js-line-number" data-line-number="1013"></td>
        <td id="LC1013" class="blob-code blob-code-inner js-file-line">    t_T=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1014" class="blob-num js-line-number" data-line-number="1014"></td>
        <td id="LC1014" class="blob-code blob-code-inner js-file-line">    tempRday=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1015" class="blob-num js-line-number" data-line-number="1015"></td>
        <td id="LC1015" class="blob-code blob-code-inner js-file-line">    t_ddbh=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1016" class="blob-num js-line-number" data-line-number="1016"></td>
        <td id="LC1016" class="blob-code blob-code-inner js-file-line">    t_litter=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1017" class="blob-num js-line-number" data-line-number="1017"></td>
        <td id="LC1017" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> flush=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1018" class="blob-num js-line-number" data-line-number="1018"></td>
        <td id="LC1018" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> VPDmean=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1019" class="blob-num js-line-number" data-line-number="1019"></td>
        <td id="LC1019" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> Tmean=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1020" class="blob-num js-line-number" data-line-number="1020"></td>
        <td id="LC1020" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> PPFDmean=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1021" class="blob-num js-line-number" data-line-number="1021"></td>
        <td id="LC1021" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> crownvolume=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1022" class="blob-num js-line-number" data-line-number="1022"></td>
        <td id="LC1022" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1023" class="blob-num js-line-number" data-line-number="1023"></td>
        <td id="LC1023" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> new v.2.2. sapwood thickness <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1024" class="blob-num js-line-number" data-line-number="1024"></td>
        <td id="LC1024" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> sapthick=<span class="pl-c1">0.04</span>;</td>
      </tr>
      <tr>
        <td id="L1025" class="blob-num js-line-number" data-line-number="1025"></td>
        <td id="LC1025" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (t_dbh &lt; <span class="pl-c1">0.08</span>) sapthick=<span class="pl-c1">0.5</span>*t_dbh;</td>
      </tr>
      <tr>
        <td id="L1026" class="blob-num js-line-number" data-line-number="1026"></td>
        <td id="LC1026" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1027" class="blob-num js-line-number" data-line-number="1027"></td>
        <td id="LC1027" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> added information to be written to output files <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1028" class="blob-num js-line-number" data-line-number="1028"></td>
        <td id="LC1028" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1029" class="blob-num js-line-number" data-line-number="1029"></td>
        <td id="LC1029" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> *addedinfo[<span class="pl-c1">5</span>] = {&amp;flush, &amp;VPDmean, &amp;Tmean, &amp;PPFDmean, &amp;crownvolume};</td>
      </tr>
      <tr>
        <td id="L1030" class="blob-num js-line-number" data-line-number="1030"></td>
        <td id="LC1030" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1031" class="blob-num js-line-number" data-line-number="1031"></td>
        <td id="LC1031" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> variables for flux computations <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1032" class="blob-num js-line-number" data-line-number="1032"></td>
        <td id="LC1032" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1033" class="blob-num js-line-number" data-line-number="1033"></td>
        <td id="LC1033" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> crown_base, crown_top;</td>
      </tr>
      <tr>
        <td id="L1034" class="blob-num js-line-number" data-line-number="1034"></td>
        <td id="LC1034" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> f;</td>
      </tr>
      <tr>
        <td id="L1035" class="blob-num js-line-number" data-line-number="1035"></td>
        <td id="LC1035" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1036" class="blob-num js-line-number" data-line-number="1036"></td>
        <td id="LC1036" class="blob-code blob-code-inner js-file-line">    crown_base=<span class="pl-c1">int</span>(t_Tree_Height-t_Crown_Depth)+<span class="pl-c1">1</span>;                  <span class="pl-c"><span class="pl-c">//</span> for flux above crown base</span></td>
      </tr>
      <tr>
        <td id="L1037" class="blob-num js-line-number" data-line-number="1037"></td>
        <td id="LC1037" class="blob-code blob-code-inner js-file-line">    crown_top=<span class="pl-c1">int</span>(t_Tree_Height)+<span class="pl-c1">1</span>;                                 <span class="pl-c"><span class="pl-c">//</span> for flux above crown top</span></td>
      </tr>
      <tr>
        <td id="L1038" class="blob-num js-line-number" data-line-number="1038"></td>
        <td id="LC1038" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1039" class="blob-num js-line-number" data-line-number="1039"></td>
        <td id="LC1039" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Updating tree</span></td>
      </tr>
      <tr>
        <td id="L1040" class="blob-num js-line-number" data-line-number="1040"></td>
        <td id="LC1040" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1041" class="blob-num js-line-number" data-line-number="1041"></td>
        <td id="LC1041" class="blob-code blob-code-inner js-file-line">    t_PPFD=<span class="pl-c1">Fluxh</span>(crown_top);</td>
      </tr>
      <tr>
        <td id="L1042" class="blob-num js-line-number" data-line-number="1042"></td>
        <td id="LC1042" class="blob-code blob-code-inner js-file-line">    t_age+= timestep;                               <span class="pl-c"><span class="pl-c">/*</span> new v.2.2: increments are not 1 yr, but the duration of the timestep (usually 1 or &lt;1, i.e. 1/12 if monthly, 1/365 if daily <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1043" class="blob-num js-line-number" data-line-number="1043"></td>
        <td id="LC1043" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1044" class="blob-num js-line-number" data-line-number="1044"></td>
        <td id="LC1044" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> computation of average t_GPP (per area) from the sum of GPP of each tree crown layer:</span></td>
      </tr>
      <tr>
        <td id="L1045" class="blob-num js-line-number" data-line-number="1045"></td>
        <td id="LC1045" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1046" class="blob-num js-line-number" data-line-number="1046"></td>
        <td id="LC1046" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_DAILYLIGHT){</td>
      </tr>
      <tr>
        <td id="L1047" class="blob-num js-line-number" data-line-number="1047"></td>
        <td id="LC1047" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(<span class="pl-k">int</span> h=crown_base; h&lt;=crown_top; h++) {</td>
      </tr>
      <tr>
        <td id="L1048" class="blob-num js-line-number" data-line-number="1048"></td>
        <td id="LC1048" class="blob-code blob-code-inner js-file-line">            f=<span class="pl-c1">Fluxh</span>(h);</td>
      </tr>
      <tr>
        <td id="L1049" class="blob-num js-line-number" data-line-number="1049"></td>
        <td id="LC1049" class="blob-code blob-code-inner js-file-line">            VPDmean+=t_VPD;</td>
      </tr>
      <tr>
        <td id="L1050" class="blob-num js-line-number" data-line-number="1050"></td>
        <td id="LC1050" class="blob-code blob-code-inner js-file-line">            Tmean+=t_T;</td>
      </tr>
      <tr>
        <td id="L1051" class="blob-num js-line-number" data-line-number="1051"></td>
        <td id="LC1051" class="blob-code blob-code-inner js-file-line">            PPFDmean+=f;</td>
      </tr>
      <tr>
        <td id="L1052" class="blob-num js-line-number" data-line-number="1052"></td>
        <td id="LC1052" class="blob-code blob-code-inner js-file-line">            t_GPP+=t_s-&gt;<span class="pl-c1">dailyGPPleaf</span>(f, t_VPD, t_T);</td>
      </tr>
      <tr>
        <td id="L1053" class="blob-num js-line-number" data-line-number="1053"></td>
        <td id="LC1053" class="blob-code blob-code-inner js-file-line">            t_Rday+=tempRday;</td>
      </tr>
      <tr>
        <td id="L1054" class="blob-num js-line-number" data-line-number="1054"></td>
        <td id="LC1054" class="blob-code blob-code-inner js-file-line">            tempRday=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1055" class="blob-num js-line-number" data-line-number="1055"></td>
        <td id="LC1055" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1056" class="blob-num js-line-number" data-line-number="1056"></td>
        <td id="LC1056" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1057" class="blob-num js-line-number" data-line-number="1057"></td>
        <td id="LC1057" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L1058" class="blob-num js-line-number" data-line-number="1058"></td>
        <td id="LC1058" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(<span class="pl-k">int</span> h=crown_base; h&lt;=crown_top; h++) {</td>
      </tr>
      <tr>
        <td id="L1059" class="blob-num js-line-number" data-line-number="1059"></td>
        <td id="LC1059" class="blob-code blob-code-inner js-file-line">            f=<span class="pl-c1">Fluxh</span>(h);</td>
      </tr>
      <tr>
        <td id="L1060" class="blob-num js-line-number" data-line-number="1060"></td>
        <td id="LC1060" class="blob-code blob-code-inner js-file-line">            VPDmean+=t_VPD;</td>
      </tr>
      <tr>
        <td id="L1061" class="blob-num js-line-number" data-line-number="1061"></td>
        <td id="LC1061" class="blob-code blob-code-inner js-file-line">            Tmean+=t_T;</td>
      </tr>
      <tr>
        <td id="L1062" class="blob-num js-line-number" data-line-number="1062"></td>
        <td id="LC1062" class="blob-code blob-code-inner js-file-line">            PPFDmean+=f;</td>
      </tr>
      <tr>
        <td id="L1063" class="blob-num js-line-number" data-line-number="1063"></td>
        <td id="LC1063" class="blob-code blob-code-inner js-file-line">            t_GPP+=t_s-&gt;<span class="pl-c1">GPPleaf</span>(f, t_VPD, t_T);</td>
      </tr>
      <tr>
        <td id="L1064" class="blob-num js-line-number" data-line-number="1064"></td>
        <td id="LC1064" class="blob-code blob-code-inner js-file-line">            t_Rday+=tempRday;</td>
      </tr>
      <tr>
        <td id="L1065" class="blob-num js-line-number" data-line-number="1065"></td>
        <td id="LC1065" class="blob-code blob-code-inner js-file-line">            tempRday=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1066" class="blob-num js-line-number" data-line-number="1066"></td>
        <td id="LC1066" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1067" class="blob-num js-line-number" data-line-number="1067"></td>
        <td id="LC1067" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1068" class="blob-num js-line-number" data-line-number="1068"></td>
        <td id="LC1068" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1069" class="blob-num js-line-number" data-line-number="1069"></td>
        <td id="LC1069" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> inb_layer=<span class="pl-c1">1</span>/<span class="pl-c1">float</span>(crown_top-crown_base+<span class="pl-c1">1</span>);                <span class="pl-c"><span class="pl-c">//</span> for averaging procedure</span></td>
      </tr>
      <tr>
        <td id="L1070" class="blob-num js-line-number" data-line-number="1070"></td>
        <td id="LC1070" class="blob-code blob-code-inner js-file-line">    t_GPP*=inb_layer;</td>
      </tr>
      <tr>
        <td id="L1071" class="blob-num js-line-number" data-line-number="1071"></td>
        <td id="LC1071" class="blob-code blob-code-inner js-file-line">    t_Rday*=inb_layer;</td>
      </tr>
      <tr>
        <td id="L1072" class="blob-num js-line-number" data-line-number="1072"></td>
        <td id="LC1072" class="blob-code blob-code-inner js-file-line">    VPDmean*=inb_layer;</td>
      </tr>
      <tr>
        <td id="L1073" class="blob-num js-line-number" data-line-number="1073"></td>
        <td id="LC1073" class="blob-code blob-code-inner js-file-line">    Tmean*=inb_layer;</td>
      </tr>
      <tr>
        <td id="L1074" class="blob-num js-line-number" data-line-number="1074"></td>
        <td id="LC1074" class="blob-code blob-code-inner js-file-line">    PPFDmean*=inb_layer;</td>
      </tr>
      <tr>
        <td id="L1075" class="blob-num js-line-number" data-line-number="1075"></td>
        <td id="LC1075" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1076" class="blob-num js-line-number" data-line-number="1076"></td>
        <td id="LC1076" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Computation of GPP. New v.2.2: assumes an efficiency of 0.5 for young and old leaves vs. 1 for mature leaves <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1077" class="blob-num js-line-number" data-line-number="1077"></td>
        <td id="LC1077" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1078" class="blob-num js-line-number" data-line-number="1078"></td>
        <td id="LC1078" class="blob-code blob-code-inner js-file-line">    t_GPP*=(<span class="pl-c1">0.5</span>*t_youngLA+t_matureLA+<span class="pl-c1">0.5</span>*t_oldLA)*<span class="pl-c1">189.3</span>*timestep;</td>
      </tr>
      <tr>
        <td id="L1079" class="blob-num js-line-number" data-line-number="1079"></td>
        <td id="LC1079" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1080" class="blob-num js-line-number" data-line-number="1080"></td>
        <td id="LC1080" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> new v.2.2 stem respiration <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1081" class="blob-num js-line-number" data-line-number="1081"></td>
        <td id="LC1081" class="blob-code blob-code-inner js-file-line">    t_Rstem=<span class="pl-c1">39.6</span>*sapthick*PI*(t_dbh-sapthick)*(t_Tree_Height-t_Crown_Depth)*<span class="pl-c1">378.7</span>*timestep*<span class="pl-c1">exp</span>((temp-<span class="pl-c1">25</span>)/<span class="pl-c1">10</span>*<span class="pl-c1">log</span>(<span class="pl-c1">2</span>));                            <span class="pl-c"><span class="pl-c">/*</span> exp((temp-25)/10*log(2)) is the temperature dependency of Rstem, supposing a constant Q10=2, according to Ryan et al 1994 and Meir &amp; Grace 2002 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1082" class="blob-num js-line-number" data-line-number="1082"></td>
        <td id="LC1082" class="blob-code blob-code-inner js-file-line">    t_Rday*=<span class="pl-c1">0.40</span>*(<span class="pl-c1">0.5</span>*t_youngLA+t_matureLA+<span class="pl-c1">0.5</span>*t_oldLA)*<span class="pl-c1">189.3</span>*timestep;</td>
      </tr>
      <tr>
        <td id="L1083" class="blob-num js-line-number" data-line-number="1083"></td>
        <td id="LC1083" class="blob-code blob-code-inner js-file-line">    t_Rnight=t_s-&gt;s_Rdark*<span class="pl-c1">exp</span>((tnight-<span class="pl-c1">25</span>)*<span class="pl-c1">0.1</span>*<span class="pl-c1">log</span>(<span class="pl-c1">3.09</span>-<span class="pl-c1">0.0215</span>*(<span class="pl-c1">25</span>+tnight)))*(<span class="pl-c1">0.5</span>*t_youngLA+t_matureLA+<span class="pl-c1">0.5</span>*t_oldLA)*<span class="pl-c1">189.3</span>*timestep;              <span class="pl-c"><span class="pl-c">/*</span> exp((tnight-25)*0.1*log(3.09-0.0215*(25+tnight))) is the temperature dependencies used by Atkin 2015 (equ1) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1084" class="blob-num js-line-number" data-line-number="1084"></td>
        <td id="LC1084" class="blob-code blob-code-inner js-file-line">    t_NPP = <span class="pl-c1">0.75</span>*(t_GPP- <span class="pl-c1">1.5</span>*(t_Rday+t_Rnight) - <span class="pl-c1">1.50</span>*t_Rstem);                                                                                 <span class="pl-c"><span class="pl-c">/*</span> Rleaf=Rday+Rnight is multiplied by 1.5 to also account for fine root respiration (cf as in Fyllas et al 2014 and Malhi 2012); Rstem is multliplied by 1.5 to account for coarse root respiration (according to the shoot root biomass ratio of 0.2 - Jérôme&#39;s paper in prep- and also to branch respiration (Meir &amp; Grace 2002, Cavaleri 2006, Asao 2005). <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1085" class="blob-num js-line-number" data-line-number="1085"></td>
        <td id="LC1085" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1086" class="blob-num js-line-number" data-line-number="1086"></td>
        <td id="LC1086" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(t_NPP&lt;<span class="pl-c1">0</span>){</td>
      </tr>
      <tr>
        <td id="L1087" class="blob-num js-line-number" data-line-number="1087"></td>
        <td id="LC1087" class="blob-code blob-code-inner js-file-line">        t_NPPneg++;</td>
      </tr>
      <tr>
        <td id="L1088" class="blob-num js-line-number" data-line-number="1088"></td>
        <td id="LC1088" class="blob-code blob-code-inner js-file-line">        t_NPP=t_GPP- <span class="pl-c1">1.5</span>*(t_Rday+t_Rnight) - <span class="pl-c1">1.50</span>*t_Rstem;</td>
      </tr>
      <tr>
        <td id="L1089" class="blob-num js-line-number" data-line-number="1089"></td>
        <td id="LC1089" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1090" class="blob-num js-line-number" data-line-number="1090"></td>
        <td id="LC1090" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1091" class="blob-num js-line-number" data-line-number="1091"></td>
        <td id="LC1091" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L1092" class="blob-num js-line-number" data-line-number="1092"></td>
        <td id="LC1092" class="blob-code blob-code-inner js-file-line">        t_NPPneg=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1093" class="blob-num js-line-number" data-line-number="1093"></td>
        <td id="LC1093" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>*** NPP allocation to wood and tree size increment ****<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1094" class="blob-num js-line-number" data-line-number="1094"></td>
        <td id="LC1094" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">float</span> volume=<span class="pl-c1">2.0</span>*t_NPP/(t_s-&gt;s_wsg) * fallocwood * <span class="pl-c1">1.0e-6</span>;</td>
      </tr>
      <tr>
        <td id="L1095" class="blob-num js-line-number" data-line-number="1095"></td>
        <td id="LC1095" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1096" class="blob-num js-line-number" data-line-number="1096"></td>
        <td id="LC1096" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> volume in m^3: the first factor of 2 is to convert C into biomass.</span></td>
      </tr>
      <tr>
        <td id="L1097" class="blob-num js-line-number" data-line-number="1097"></td>
        <td id="LC1097" class="blob-code blob-code-inner js-file-line"><span class="pl-c">         the 1/s_wsg to convert biomass into volume.</span></td>
      </tr>
      <tr>
        <td id="L1098" class="blob-num js-line-number" data-line-number="1098"></td>
        <td id="LC1098" class="blob-code blob-code-inner js-file-line"><span class="pl-c">         the 1e-6 term converts cm^3 into m^3 (the sole metric unit in the model).</span></td>
      </tr>
      <tr>
        <td id="L1099" class="blob-num js-line-number" data-line-number="1099"></td>
        <td id="LC1099" class="blob-code blob-code-inner js-file-line"><span class="pl-c">         fallocwood is the fraction of biomass allocated to aboveground wood (stem + branches) growth</span></td>
      </tr>
      <tr>
        <td id="L1100" class="blob-num js-line-number" data-line-number="1100"></td>
        <td id="LC1100" class="blob-code blob-code-inner js-file-line"><span class="pl-c">         For the time being, we shall assume that a fixed proportion of NPP is allocated into AGB production.</span></td>
      </tr>
      <tr>
        <td id="L1101" class="blob-num js-line-number" data-line-number="1101"></td>
        <td id="LC1101" class="blob-code blob-code-inner js-file-line"><span class="pl-c">         Currently, 0.20=%biomasse allocated to stem increment could be a global variable, even though this % allocation could in fact vary with resouce variation/co-limitation<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1102" class="blob-num js-line-number" data-line-number="1102"></td>
        <td id="LC1102" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1103" class="blob-num js-line-number" data-line-number="1103"></td>
        <td id="LC1103" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1104" class="blob-num js-line-number" data-line-number="1104"></td>
        <td id="LC1104" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (t_dbh&gt;t_dbh_thresh) volume*=<span class="pl-c1">flor</span>(<span class="pl-c1">3.0</span>-<span class="pl-c1">2.0</span>*t_dbh/t_dbh_thresh);</td>
      </tr>
      <tr>
        <td id="L1105" class="blob-num js-line-number" data-line-number="1105"></td>
        <td id="LC1105" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> taking into account wood elements recycling (ex. fallen branches etc...) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1106" class="blob-num js-line-number" data-line-number="1106"></td>
        <td id="LC1106" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1107" class="blob-num js-line-number" data-line-number="1107"></td>
        <td id="LC1107" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span>t_ddbh = flor( volume* 4.0/( 3.0*PI*t_dbh*LH*t_Tree_Height*LV ) )* NH;</span></td>
      </tr>
      <tr>
        <td id="L1108" class="blob-num js-line-number" data-line-number="1108"></td>
        <td id="LC1108" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1109" class="blob-num js-line-number" data-line-number="1109"></td>
        <td id="LC1109" class="blob-code blob-code-inner js-file-line">        t_ddbh = <span class="pl-c1">flor</span>( volume/(<span class="pl-c1">0.559</span>*t_dbh*LH*t_Tree_Height*LV*(<span class="pl-c1">3</span>-t_dbh/(t_dbh+t_s-&gt;s_ah))) )* NH;</td>
      </tr>
      <tr>
        <td id="L1110" class="blob-num js-line-number" data-line-number="1110"></td>
        <td id="LC1110" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1111" class="blob-num js-line-number" data-line-number="1111"></td>
        <td id="LC1111" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> With V=pi*r^2*h, increment of volume = dV = 2*pi*r*h*dr + pi*r^2*dh <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1112" class="blob-num js-line-number" data-line-number="1112"></td>
        <td id="LC1112" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> With isometric growth assumption (ddbh/dbh=dh/h)and dbh=2*r: dV=3/4*pi*dbh*h*ddbh, ddbh in m, it follows: ddbh = 4/3 * V = 4/3 * 1/(pi*dbh*h)   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1113" class="blob-num js-line-number" data-line-number="1113"></td>
        <td id="LC1113" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1114" class="blob-num js-line-number" data-line-number="1114"></td>
        <td id="LC1114" class="blob-code blob-code-inner js-file-line">        t_dbh += t_ddbh;</td>
      </tr>
      <tr>
        <td id="L1115" class="blob-num js-line-number" data-line-number="1115"></td>
        <td id="LC1115" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1116" class="blob-num js-line-number" data-line-number="1116"></td>
        <td id="LC1116" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> update of tree height <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1117" class="blob-num js-line-number" data-line-number="1117"></td>
        <td id="LC1117" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1118" class="blob-num js-line-number" data-line-number="1118"></td>
        <td id="LC1118" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> alternative calculation in concordance with isometric growth assumption: dh = h*ddbh/dbh <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1119" class="blob-num js-line-number" data-line-number="1119"></td>
        <td id="LC1119" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> t_Tree_Height += t_Tree_Height*t_ddbh/t_dbh; <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1120" class="blob-num js-line-number" data-line-number="1120"></td>
        <td id="LC1120" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1121" class="blob-num js-line-number" data-line-number="1121"></td>
        <td id="LC1121" class="blob-code blob-code-inner js-file-line">        t_Tree_Height = t_hmax * t_dbh/(t_dbh + (t_s-&gt;s_ah));</td>
      </tr>
      <tr>
        <td id="L1122" class="blob-num js-line-number" data-line-number="1122"></td>
        <td id="LC1122" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1123" class="blob-num js-line-number" data-line-number="1123"></td>
        <td id="LC1123" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> update of tree crown depth <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1124" class="blob-num js-line-number" data-line-number="1124"></td>
        <td id="LC1124" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1125" class="blob-num js-line-number" data-line-number="1125"></td>
        <td id="LC1125" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (t_Tree_Height&lt;<span class="pl-c1">5.0</span>) t_Crown_Depth = <span class="pl-c1">0.17</span> + <span class="pl-c1">0.13</span>*t_Tree_Height;             <span class="pl-c"><span class="pl-c">//</span> allometry deduced from Piste Saint-Elie dataset</span></td>
      </tr>
      <tr>
        <td id="L1126" class="blob-num js-line-number" data-line-number="1126"></td>
        <td id="LC1126" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> t_Crown_Depth = -<span class="pl-c1">0.48</span>+<span class="pl-c1">0.26</span>*t_Tree_Height;</td>
      </tr>
      <tr>
        <td id="L1127" class="blob-num js-line-number" data-line-number="1127"></td>
        <td id="LC1127" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span>t_Crown_Depth=exp(-1.169+1.098*log(t_Tree_Height));                           // 29/04/15: try with allometry used in Fyllas et al 2014 (see SI, from Poorter et al 2006)</span></td>
      </tr>
      <tr>
        <td id="L1128" class="blob-num js-line-number" data-line-number="1128"></td>
        <td id="LC1128" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1129" class="blob-num js-line-number" data-line-number="1129"></td>
        <td id="LC1129" class="blob-code blob-code-inner js-file-line">        t_Crown_Radius  = <span class="pl-c1">0.80</span>+<span class="pl-c1">10.47</span>*t_dbh-<span class="pl-c1">3.33</span>*t_dbh*t_dbh;                            <span class="pl-c"><span class="pl-c">//</span> allometry deduced from Piste Saint-Elie dataset</span></td>
      </tr>
      <tr>
        <td id="L1130" class="blob-num js-line-number" data-line-number="1130"></td>
        <td id="LC1130" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span>t_Crown_Radius=sqrt(iPi*exp(-1.853+1.888*log(t_Tree_Height)));                // 29/04/15: try with allometry used in Fyllas et al 2014 (see SI, from Poorter et al 2006)</span></td>
      </tr>
      <tr>
        <td id="L1131" class="blob-num js-line-number" data-line-number="1131"></td>
        <td id="LC1131" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1132" class="blob-num js-line-number" data-line-number="1132"></td>
        <td id="LC1132" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>*** NPP allocation to leaves ****<span class="pl-c">*/</span></span>                                       <span class="pl-c"><span class="pl-c">/*</span> rk: in this current scheme of leaf demography and phenology in three leaf age classes: only the old leaves generate treefall, and the dynamic of leaves cycle is generated by the dynamic of NPP, with a total leaf biomass varying - as opposed to De Weirdt et al 2012 in ORCHIDEE, but as in Wu et al 2016 but importantly without prescribing litterfall- <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1133" class="blob-num js-line-number" data-line-number="1133"></td>
        <td id="LC1133" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1134" class="blob-num js-line-number" data-line-number="1134"></td>
        <td id="LC1134" class="blob-code blob-code-inner js-file-line">        flush=<span class="pl-c1">2.0</span>*t_NPP*falloccanopy*<span class="pl-c1">0.68</span>/(t_s-&gt;s_LMA);                           <span class="pl-c"><span class="pl-c">/*</span> this is to convert the NPP allocated to leaves (falloccanopy is the fraction of biomass assumed to be alloacted to canopy (leaves+reproductive organs+twigs) at each timestep - Malhi et al 2011-, 68% of which is allocated to leaves - chave et al 2008, Chave et al 2010-), in new leaf area (2 is to convert carbon mass in biomass and LMA to convert leaf biomass into leaf area).<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1135" class="blob-num js-line-number" data-line-number="1135"></td>
        <td id="LC1135" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1136" class="blob-num js-line-number" data-line-number="1136"></td>
        <td id="LC1136" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1137" class="blob-num js-line-number" data-line-number="1137"></td>
        <td id="LC1137" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> litter module <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1138" class="blob-num js-line-number" data-line-number="1138"></td>
        <td id="LC1138" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1139" class="blob-num js-line-number" data-line-number="1139"></td>
        <td id="LC1139" class="blob-code blob-code-inner js-file-line">    t_litter=t_oldLA/(t_s-&gt;s_time_old);</td>
      </tr>
      <tr>
        <td id="L1140" class="blob-num js-line-number" data-line-number="1140"></td>
        <td id="LC1140" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1141" class="blob-num js-line-number" data-line-number="1141"></td>
        <td id="LC1141" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> leaf cycle <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1142" class="blob-num js-line-number" data-line-number="1142"></td>
        <td id="LC1142" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1143" class="blob-num js-line-number" data-line-number="1143"></td>
        <td id="LC1143" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> new_mature=t_youngLA/(t_s-&gt;s_time_young);</td>
      </tr>
      <tr>
        <td id="L1144" class="blob-num js-line-number" data-line-number="1144"></td>
        <td id="LC1144" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> new_old=t_matureLA/(t_s-&gt;s_time_mature);</td>
      </tr>
      <tr>
        <td id="L1145" class="blob-num js-line-number" data-line-number="1145"></td>
        <td id="LC1145" class="blob-code blob-code-inner js-file-line">    t_youngLA+= flush - new_mature;</td>
      </tr>
      <tr>
        <td id="L1146" class="blob-num js-line-number" data-line-number="1146"></td>
        <td id="LC1146" class="blob-code blob-code-inner js-file-line">    t_matureLA+= new_mature - new_old;</td>
      </tr>
      <tr>
        <td id="L1147" class="blob-num js-line-number" data-line-number="1147"></td>
        <td id="LC1147" class="blob-code blob-code-inner js-file-line">    t_oldLA+= new_old - t_litter;</td>
      </tr>
      <tr>
        <td id="L1148" class="blob-num js-line-number" data-line-number="1148"></td>
        <td id="LC1148" class="blob-code blob-code-inner js-file-line">    t_leafarea=t_youngLA + t_matureLA + t_oldLA;</td>
      </tr>
      <tr>
        <td id="L1149" class="blob-num js-line-number" data-line-number="1149"></td>
        <td id="LC1149" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1150" class="blob-num js-line-number" data-line-number="1150"></td>
        <td id="LC1150" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> update t_dens <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1151" class="blob-num js-line-number" data-line-number="1151"></td>
        <td id="LC1151" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1152" class="blob-num js-line-number" data-line-number="1152"></td>
        <td id="LC1152" class="blob-code blob-code-inner js-file-line">    t_litter*=t_s-&gt;s_LMA;</td>
      </tr>
      <tr>
        <td id="L1153" class="blob-num js-line-number" data-line-number="1153"></td>
        <td id="LC1153" class="blob-code blob-code-inner js-file-line">    crownvolume=PI*t_Crown_Radius*LH*t_Crown_Radius*LH*t_Crown_Depth*LV;</td>
      </tr>
      <tr>
        <td id="L1154" class="blob-num js-line-number" data-line-number="1154"></td>
        <td id="LC1154" class="blob-code blob-code-inner js-file-line">    t_dens=t_leafarea/crownvolume;</td>
      </tr>
      <tr>
        <td id="L1155" class="blob-num js-line-number" data-line-number="1155"></td>
        <td id="LC1155" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1156" class="blob-num js-line-number" data-line-number="1156"></td>
        <td id="LC1156" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>if(isnan(t_dens)|isnan(t_leafarea)|isnan(flush)) {</span></td>
      </tr>
      <tr>
        <td id="L1157" class="blob-num js-line-number" data-line-number="1157"></td>
        <td id="LC1157" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     cout&lt;&lt;&quot;problem in growth: nan at &quot; &lt;&lt; t_site &lt;&lt; &quot; Species: &quot; &lt;&lt; t_sp_lab &lt;&lt; &quot; t_dens: &quot; &lt;&lt; t_dens &lt;&lt; &quot; t_leafarea: &quot; &lt;&lt; t_leafarea &lt;&lt; &quot; flush: &quot; &lt;&lt; flush &lt;&lt;  &quot; crown: &quot; &lt;&lt; crownvolume &lt;&lt; &quot; r: &quot; &lt;&lt; t_Crown_Radius &lt;&lt; &quot; d: &quot; &lt;&lt; t_Crown_Depth &lt;&lt; &quot; resp(st,d,n): &quot; &lt;&lt; t_Rstem &lt;&lt; &quot;|&quot; &lt;&lt; t_Rday &lt;&lt; &quot;|&quot; &lt;&lt; t_Rnight &lt;&lt; endl; // diagnostics</span></td>
      </tr>
      <tr>
        <td id="L1158" class="blob-num js-line-number" data-line-number="1158"></td>
        <td id="LC1158" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     }<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1159" class="blob-num js-line-number" data-line-number="1159"></td>
        <td id="LC1159" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1160" class="blob-num js-line-number" data-line-number="1160"></td>
        <td id="LC1160" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Output for control purposes <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1161" class="blob-num js-line-number" data-line-number="1161"></td>
        <td id="LC1161" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1162" class="blob-num js-line-number" data-line-number="1162"></td>
        <td id="LC1162" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(!_OUTPUT_reduced){</td>
      </tr>
      <tr>
        <td id="L1163" class="blob-num js-line-number" data-line-number="1163"></td>
        <td id="LC1163" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (iter == <span class="pl-c1">2</span>) <span class="pl-c1">OutputTreeStandard</span>(output[<span class="pl-c1">28</span>], addedinfo);</td>
      </tr>
      <tr>
        <td id="L1164" class="blob-num js-line-number" data-line-number="1164"></td>
        <td id="LC1164" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (iter == <span class="pl-c1">int</span>(nbiter/<span class="pl-c1">2</span>)) <span class="pl-c1">OutputTreeStandard</span>(output[<span class="pl-c1">29</span>], addedinfo);</td>
      </tr>
      <tr>
        <td id="L1165" class="blob-num js-line-number" data-line-number="1165"></td>
        <td id="LC1165" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (iter == <span class="pl-c1">int</span>(nbiter-<span class="pl-c1">1</span>)) <span class="pl-c1">OutputTreeStandard</span>(output[<span class="pl-c1">30</span>], addedinfo);</td>
      </tr>
      <tr>
        <td id="L1166" class="blob-num js-line-number" data-line-number="1166"></td>
        <td id="LC1166" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1167" class="blob-num js-line-number" data-line-number="1167"></td>
        <td id="LC1167" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (t_site==<span class="pl-c1">2500</span>) <span class="pl-c1">OutputTreeStandard</span>(output[<span class="pl-c1">11</span>], addedinfo);</td>
      </tr>
      <tr>
        <td id="L1168" class="blob-num js-line-number" data-line-number="1168"></td>
        <td id="LC1168" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (t_site==<span class="pl-c1">10380</span>) <span class="pl-c1">OutputTreeStandard</span>(output[<span class="pl-c1">12</span>], addedinfo);</td>
      </tr>
      <tr>
        <td id="L1169" class="blob-num js-line-number" data-line-number="1169"></td>
        <td id="LC1169" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (t_site==<span class="pl-c1">100950</span>) <span class="pl-c1">OutputTreeStandard</span>(output[<span class="pl-c1">13</span>], addedinfo);</td>
      </tr>
      <tr>
        <td id="L1170" class="blob-num js-line-number" data-line-number="1170"></td>
        <td id="LC1170" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (t_site==<span class="pl-c1">12090</span>) <span class="pl-c1">OutputTreeStandard</span>(output[<span class="pl-c1">14</span>], addedinfo);</td>
      </tr>
      <tr>
        <td id="L1171" class="blob-num js-line-number" data-line-number="1171"></td>
        <td id="LC1171" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (t_site==<span class="pl-c1">120090</span>) <span class="pl-c1">OutputTreeStandard</span>(output[<span class="pl-c1">15</span>], addedinfo);</td>
      </tr>
      <tr>
        <td id="L1172" class="blob-num js-line-number" data-line-number="1172"></td>
        <td id="LC1172" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (t_site==<span class="pl-c1">150667</span>) <span class="pl-c1">OutputTreeStandard</span>(output[<span class="pl-c1">16</span>], addedinfo);</td>
      </tr>
      <tr>
        <td id="L1173" class="blob-num js-line-number" data-line-number="1173"></td>
        <td id="LC1173" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1174" class="blob-num js-line-number" data-line-number="1174"></td>
        <td id="LC1174" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1175" class="blob-num js-line-number" data-line-number="1175"></td>
        <td id="LC1175" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1176" class="blob-num js-line-number" data-line-number="1176"></td>
        <td id="LC1176" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1177" class="blob-num js-line-number" data-line-number="1177"></td>
        <td id="LC1177" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1178" class="blob-num js-line-number" data-line-number="1178"></td>
        <td id="LC1178" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>####################################################</span></td>
      </tr>
      <tr>
        <td id="L1179" class="blob-num js-line-number" data-line-number="1179"></td>
        <td id="LC1179" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####           Death of the tree                ####</span></td>
      </tr>
      <tr>
        <td id="L1180" class="blob-num js-line-number" data-line-number="1180"></td>
        <td id="LC1180" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####         called by Tree::Update             ####</span></td>
      </tr>
      <tr>
        <td id="L1181" class="blob-num js-line-number" data-line-number="1181"></td>
        <td id="LC1181" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####################################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1182" class="blob-num js-line-number" data-line-number="1182"></td>
        <td id="LC1182" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1183" class="blob-num js-line-number" data-line-number="1183"></td>
        <td id="LC1183" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Tree::Death</span>() {</td>
      </tr>
      <tr>
        <td id="L1184" class="blob-num js-line-number" data-line-number="1184"></td>
        <td id="LC1184" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1185" class="blob-num js-line-number" data-line-number="1185"></td>
        <td id="LC1185" class="blob-code blob-code-inner js-file-line">    t_age=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1186" class="blob-num js-line-number" data-line-number="1186"></td>
        <td id="LC1186" class="blob-code blob-code-inner js-file-line">    t_dbh = t_Tree_Height = t_Crown_Radius = t_Crown_Depth= <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1187" class="blob-num js-line-number" data-line-number="1187"></td>
        <td id="LC1187" class="blob-code blob-code-inner js-file-line">    t_hurt = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1188" class="blob-num js-line-number" data-line-number="1188"></td>
        <td id="LC1188" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_TREEFALL){</td>
      </tr>
      <tr>
        <td id="L1189" class="blob-num js-line-number" data-line-number="1189"></td>
        <td id="LC1189" class="blob-code blob-code-inner js-file-line">        t_angle = <span class="pl-c1">0</span>.;</td>
      </tr>
      <tr>
        <td id="L1190" class="blob-num js-line-number" data-line-number="1190"></td>
        <td id="LC1190" class="blob-code blob-code-inner js-file-line">        t_C = t_Ct = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1191" class="blob-num js-line-number" data-line-number="1191"></td>
        <td id="LC1191" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1192" class="blob-num js-line-number" data-line-number="1192"></td>
        <td id="LC1192" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> ((t_s-&gt;s_nbind)&gt;<span class="pl-c1">0</span>) (t_s-&gt;s_nbind)--;</td>
      </tr>
      <tr>
        <td id="L1193" class="blob-num js-line-number" data-line-number="1193"></td>
        <td id="LC1193" class="blob-code blob-code-inner js-file-line">    nblivetrees--;</td>
      </tr>
      <tr>
        <td id="L1194" class="blob-num js-line-number" data-line-number="1194"></td>
        <td id="LC1194" class="blob-code blob-code-inner js-file-line">    t_s = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1195" class="blob-num js-line-number" data-line-number="1195"></td>
        <td id="LC1195" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1196" class="blob-num js-line-number" data-line-number="1196"></td>
        <td id="LC1196" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1197" class="blob-num js-line-number" data-line-number="1197"></td>
        <td id="LC1197" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1198" class="blob-num js-line-number" data-line-number="1198"></td>
        <td id="LC1198" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1199" class="blob-num js-line-number" data-line-number="1199"></td>
        <td id="LC1199" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>#################################</span></td>
      </tr>
      <tr>
        <td id="L1200" class="blob-num js-line-number" data-line-number="1200"></td>
        <td id="LC1200" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####      Seed dispersal      ####</span></td>
      </tr>
      <tr>
        <td id="L1201" class="blob-num js-line-number" data-line-number="1201"></td>
        <td id="LC1201" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####  called by UpdateField   ####</span></td>
      </tr>
      <tr>
        <td id="L1202" class="blob-num js-line-number" data-line-number="1202"></td>
        <td id="LC1202" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> #################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1203" class="blob-num js-line-number" data-line-number="1203"></td>
        <td id="LC1203" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1204" class="blob-num js-line-number" data-line-number="1204"></td>
        <td id="LC1204" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Tree::DisperseSeed</span>(){</td>
      </tr>
      <tr>
        <td id="L1205" class="blob-num js-line-number" data-line-number="1205"></td>
        <td id="LC1205" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> New v.2.0 reproduction can only occur for trees that receive enough</span></td>
      </tr>
      <tr>
        <td id="L1206" class="blob-num js-line-number" data-line-number="1206"></td>
        <td id="LC1206" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     light (twice the LCP) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1207" class="blob-num js-line-number" data-line-number="1207"></td>
        <td id="LC1207" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> New v.2.1 threshold of maturity is defined as a size threshold</span></td>
      </tr>
      <tr>
        <td id="L1208" class="blob-num js-line-number" data-line-number="1208"></td>
        <td id="LC1208" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     (and not age as before), following Wright et al 2005 JTE <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1209" class="blob-num js-line-number" data-line-number="1209"></td>
        <td id="LC1209" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>((t_Tree_Height&gt;=t_hmature)&amp;&amp;(t_PPFD&gt;<span class="pl-c1">2.0</span>*(t_s-&gt;s_LCP))) {</td>
      </tr>
      <tr>
        <td id="L1210" class="blob-num js-line-number" data-line-number="1210"></td>
        <td id="LC1210" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1211" class="blob-num js-line-number" data-line-number="1211"></td>
        <td id="LC1211" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">float</span> rho,theta;</td>
      </tr>
      <tr>
        <td id="L1212" class="blob-num js-line-number" data-line-number="1212"></td>
        <td id="LC1212" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">int</span> nbs=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1213" class="blob-num js-line-number" data-line-number="1213"></td>
        <td id="LC1213" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(_SEEDTRADEOFF){</td>
      </tr>
      <tr>
        <td id="L1214" class="blob-num js-line-number" data-line-number="1214"></td>
        <td id="LC1214" class="blob-code blob-code-inner js-file-line">            nbs=<span class="pl-c1">int</span>(t_NPP*<span class="pl-c1">2</span>*falloccanopy*<span class="pl-c1">0.08</span>*<span class="pl-c1">0.5</span>*(t_s-&gt;s_iseedmass));    <span class="pl-c"><span class="pl-c">/*</span> nbs is the number of seeds produced at this time step; it is computed from the NPP (in g) allocated to reproductive organs -fruits and seeds-, *2 is to convert in biomass,  * 0.40 is to obtain the NPP allocated to canopy (often measured as litterfall), drawn from Malhi et al 2011 Phil. trans roy. Soc. and 0.08 is the part of litterfall corresponding the fruits+seeds, drawn from Chave et al 2008 JTE; assumed to be twice the biomass dedicated to seeds only (ie without fruits), and then divided by the mass of a seed to obtain the number of seeds <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1215" class="blob-num js-line-number" data-line-number="1215"></td>
        <td id="LC1215" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span>nbs=(int)nbs;</span></td>
      </tr>
      <tr>
        <td id="L1216" class="blob-num js-line-number" data-line-number="1216"></td>
        <td id="LC1216" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1217" class="blob-num js-line-number" data-line-number="1217"></td>
        <td id="LC1217" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> nbs=nbs0;</td>
      </tr>
      <tr>
        <td id="L1218" class="blob-num js-line-number" data-line-number="1218"></td>
        <td id="LC1218" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span>else nbs=int(t_NPP*2*falloccanopy*0.08*0.5); /* test 17/01/2017: use a factor to translate NPP into seeds produced, but not species specific, not linked to mass of grains */</span></td>
      </tr>
      <tr>
        <td id="L1219" class="blob-num js-line-number" data-line-number="1219"></td>
        <td id="LC1219" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1220" class="blob-num js-line-number" data-line-number="1220"></td>
        <td id="LC1220" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(<span class="pl-k">int</span> ii=<span class="pl-c1">0</span>;ii&lt;nbs;ii++){                                                 <span class="pl-c"><span class="pl-c">/*</span> Loop over number of produced seeds <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1221" class="blob-num js-line-number" data-line-number="1221"></td>
        <td id="LC1221" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L1222" class="blob-num js-line-number" data-line-number="1222"></td>
        <td id="LC1222" class="blob-code blob-code-inner js-file-line">            rho = <span class="pl-c1">2</span>*((t_s-&gt;s_ds)+t_Crown_Radius)*<span class="pl-c1">float</span>(<span class="pl-c1">sqrt</span>(<span class="pl-c1">fabs</span>(<span class="pl-c1">log</span>(<span class="pl-c1">genrand2</span>()*iPi))));    <span class="pl-c"><span class="pl-c">/*</span> Dispersal distance rho: P(rho) = rho*exp(-rho^2) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1223" class="blob-num js-line-number" data-line-number="1223"></td>
        <td id="LC1223" class="blob-code blob-code-inner js-file-line">            theta = <span class="pl-c1">float</span>(twoPi*<span class="pl-c1">genrand2</span>());                                                <span class="pl-c"><span class="pl-c">/*</span> Dispersal angle theta <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1224" class="blob-num js-line-number" data-line-number="1224"></td>
        <td id="LC1224" class="blob-code blob-code-inner js-file-line">            t_s-&gt;<span class="pl-c1">FillSeed</span>(<span class="pl-c1">flor</span>(<span class="pl-c1">int</span>(rho*<span class="pl-c1">cos</span>(theta))+t_site%cols), <span class="pl-c"><span class="pl-c">/*</span> column <span class="pl-c">*/</span></span>               <span class="pl-c"><span class="pl-c">/*</span> Update of field s_Seed <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1225" class="blob-num js-line-number" data-line-number="1225"></td>
        <td id="LC1225" class="blob-code blob-code-inner js-file-line">                          <span class="pl-c1">int</span>(rho*<span class="pl-c1">sin</span>(theta))+t_site/cols);      <span class="pl-c"><span class="pl-c">/*</span> line <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1226" class="blob-num js-line-number" data-line-number="1226"></td>
        <td id="LC1226" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L1227" class="blob-num js-line-number" data-line-number="1227"></td>
        <td id="LC1227" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1228" class="blob-num js-line-number" data-line-number="1228"></td>
        <td id="LC1228" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1229" class="blob-num js-line-number" data-line-number="1229"></td>
        <td id="LC1229" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1230" class="blob-num js-line-number" data-line-number="1230"></td>
        <td id="LC1230" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1231" class="blob-num js-line-number" data-line-number="1231"></td>
        <td id="LC1231" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1232" class="blob-num js-line-number" data-line-number="1232"></td>
        <td id="LC1232" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1233" class="blob-num js-line-number" data-line-number="1233"></td>
        <td id="LC1233" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>##################################</span></td>
      </tr>
      <tr>
        <td id="L1234" class="blob-num js-line-number" data-line-number="1234"></td>
        <td id="LC1234" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####   Tree death and growth   ####</span></td>
      </tr>
      <tr>
        <td id="L1235" class="blob-num js-line-number" data-line-number="1235"></td>
        <td id="LC1235" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####   called by UpdateTree    ####</span></td>
      </tr>
      <tr>
        <td id="L1236" class="blob-num js-line-number" data-line-number="1236"></td>
        <td id="LC1236" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ##################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1237" class="blob-num js-line-number" data-line-number="1237"></td>
        <td id="LC1237" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1238" class="blob-num js-line-number" data-line-number="1238"></td>
        <td id="LC1238" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Tree::Update</span>() {</td>
      </tr>
      <tr>
        <td id="L1239" class="blob-num js-line-number" data-line-number="1239"></td>
        <td id="LC1239" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1240" class="blob-num js-line-number" data-line-number="1240"></td>
        <td id="LC1240" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> death;</td>
      </tr>
      <tr>
        <td id="L1241" class="blob-num js-line-number" data-line-number="1241"></td>
        <td id="LC1241" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1242" class="blob-num js-line-number" data-line-number="1242"></td>
        <td id="LC1242" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(t_age) {</td>
      </tr>
      <tr>
        <td id="L1243" class="blob-num js-line-number" data-line-number="1243"></td>
        <td id="LC1243" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1244" class="blob-num js-line-number" data-line-number="1244"></td>
        <td id="LC1244" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(_NDD) death = <span class="pl-c1">int</span>(<span class="pl-c1">genrand2</span>() + t_s-&gt;<span class="pl-c1">DeathRate</span>(t_PPFD, t_dbh, t_NDDfield[t_sp_lab]));</td>
      </tr>
      <tr>
        <td id="L1245" class="blob-num js-line-number" data-line-number="1245"></td>
        <td id="LC1245" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> death = <span class="pl-c1">int</span>(<span class="pl-c1">genrand2</span>() + t_s-&gt;<span class="pl-c1">DeathRate</span>(t_PPFD, t_dbh, t_NPPneg));</td>
      </tr>
      <tr>
        <td id="L1246" class="blob-num js-line-number" data-line-number="1246"></td>
        <td id="LC1246" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1247" class="blob-num js-line-number" data-line-number="1247"></td>
        <td id="LC1247" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(death){</td>
      </tr>
      <tr>
        <td id="L1248" class="blob-num js-line-number" data-line-number="1248"></td>
        <td id="LC1248" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">/*</span> Natural death caused by unsustained photosynthesis and density dependance <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1249" class="blob-num js-line-number" data-line-number="1249"></td>
        <td id="LC1249" class="blob-code blob-code-inner js-file-line">            nbdead_n1++;</td>
      </tr>
      <tr>
        <td id="L1250" class="blob-num js-line-number" data-line-number="1250"></td>
        <td id="LC1250" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">/*</span> Increments number of deaths <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1251" class="blob-num js-line-number" data-line-number="1251"></td>
        <td id="LC1251" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(t_dbh*LH&gt;<span class="pl-c1">0.1</span>) nbdead_n10++;</td>
      </tr>
      <tr>
        <td id="L1252" class="blob-num js-line-number" data-line-number="1252"></td>
        <td id="LC1252" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">/*</span> same but only for trees &gt; 10cm <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1253" class="blob-num js-line-number" data-line-number="1253"></td>
        <td id="LC1253" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">/*</span> New v.2.2. new outputs <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1254" class="blob-num js-line-number" data-line-number="1254"></td>
        <td id="LC1254" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(!_OUTPUT_reduced) {</td>
      </tr>
      <tr>
        <td id="L1255" class="blob-num js-line-number" data-line-number="1255"></td>
        <td id="LC1255" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(iter == <span class="pl-c1">2</span>) output[<span class="pl-c1">23</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>N<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_sp_lab &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_age &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Tree_Height &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1256" class="blob-num js-line-number" data-line-number="1256"></td>
        <td id="LC1256" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(iter == <span class="pl-c1">int</span>(nbiter/<span class="pl-c1">2</span>)) output[<span class="pl-c1">24</span>]&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>N<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_sp_lab &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_age &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Tree_Height &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1257" class="blob-num js-line-number" data-line-number="1257"></td>
        <td id="LC1257" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(iter == <span class="pl-c1">int</span>(nbiter-<span class="pl-c1">1</span>)) output[<span class="pl-c1">25</span>]&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>N<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_sp_lab &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_age &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Tree_Height &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1258" class="blob-num js-line-number" data-line-number="1258"></td>
        <td id="LC1258" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L1259" class="blob-num js-line-number" data-line-number="1259"></td>
        <td id="LC1259" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">Death</span>();</td>
      </tr>
      <tr>
        <td id="L1260" class="blob-num js-line-number" data-line-number="1260"></td>
        <td id="LC1260" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1261" class="blob-num js-line-number" data-line-number="1261"></td>
        <td id="LC1261" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> <span class="pl-k">if</span>(_BASICTREEFALL &amp;&amp; t_Tree_Height&lt;<span class="pl-c1">2</span>*t_hurt*<span class="pl-c1">genrand2</span>()) {          <span class="pl-c"><span class="pl-c">//</span> given probability of death is 1-0.5*t_Tree_Height/t_hurt</span></td>
      </tr>
      <tr>
        <td id="L1262" class="blob-num js-line-number" data-line-number="1262"></td>
        <td id="LC1262" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">/*</span> Death caused by a treefall (t_hurt) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1263" class="blob-num js-line-number" data-line-number="1263"></td>
        <td id="LC1263" class="blob-code blob-code-inner js-file-line">            nbdead_c1++;   <span class="pl-c"><span class="pl-c">/*</span> Increments number of treefalls <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1264" class="blob-num js-line-number" data-line-number="1264"></td>
        <td id="LC1264" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(t_dbh*LH&gt;<span class="pl-c1">0.1</span>) nbdead_c10++;<span class="pl-c"><span class="pl-c">/*</span> same but only for trees &gt; 10cm <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1265" class="blob-num js-line-number" data-line-number="1265"></td>
        <td id="LC1265" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(!_OUTPUT_reduced){</td>
      </tr>
      <tr>
        <td id="L1266" class="blob-num js-line-number" data-line-number="1266"></td>
        <td id="LC1266" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(iter == <span class="pl-c1">2</span>) output[<span class="pl-c1">23</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>OT<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_sp_lab &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_age &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Tree_Height &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1267" class="blob-num js-line-number" data-line-number="1267"></td>
        <td id="LC1267" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(iter == <span class="pl-c1">int</span>(nbiter/<span class="pl-c1">2</span>)) output[<span class="pl-c1">24</span>]&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>OT<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_sp_lab &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_age &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Tree_Height &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1268" class="blob-num js-line-number" data-line-number="1268"></td>
        <td id="LC1268" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(iter == <span class="pl-c1">int</span>(nbiter-<span class="pl-c1">1</span>)) output[<span class="pl-c1">25</span>]&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>OT<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_sp_lab &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_age &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Tree_Height &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1269" class="blob-num js-line-number" data-line-number="1269"></td>
        <td id="LC1269" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L1270" class="blob-num js-line-number" data-line-number="1270"></td>
        <td id="LC1270" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">Death</span>();</td>
      </tr>
      <tr>
        <td id="L1271" class="blob-num js-line-number" data-line-number="1271"></td>
        <td id="LC1271" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1272" class="blob-num js-line-number" data-line-number="1272"></td>
        <td id="LC1272" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> {<span class="pl-c"><span class="pl-c">/*</span> If no death, then growth <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1273" class="blob-num js-line-number" data-line-number="1273"></td>
        <td id="LC1273" class="blob-code blob-code-inner js-file-line">            t_hurt = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1274" class="blob-num js-line-number" data-line-number="1274"></td>
        <td id="LC1274" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">Growth</span>();</td>
      </tr>
      <tr>
        <td id="L1275" class="blob-num js-line-number" data-line-number="1275"></td>
        <td id="LC1275" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1276" class="blob-num js-line-number" data-line-number="1276"></td>
        <td id="LC1276" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1277" class="blob-num js-line-number" data-line-number="1277"></td>
        <td id="LC1277" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1278" class="blob-num js-line-number" data-line-number="1278"></td>
        <td id="LC1278" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1279" class="blob-num js-line-number" data-line-number="1279"></td>
        <td id="LC1279" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1280" class="blob-num js-line-number" data-line-number="1280"></td>
        <td id="LC1280" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>##################################</span></td>
      </tr>
      <tr>
        <td id="L1281" class="blob-num js-line-number" data-line-number="1281"></td>
        <td id="LC1281" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####           Treefall         ####</span></td>
      </tr>
      <tr>
        <td id="L1282" class="blob-num js-line-number" data-line-number="1282"></td>
        <td id="LC1282" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> #### called by UpdateTreefall   ####</span></td>
      </tr>
      <tr>
        <td id="L1283" class="blob-num js-line-number" data-line-number="1283"></td>
        <td id="LC1283" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1284" class="blob-num js-line-number" data-line-number="1284"></td>
        <td id="LC1284" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1285" class="blob-num js-line-number" data-line-number="1285"></td>
        <td id="LC1285" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1286" class="blob-num js-line-number" data-line-number="1286"></td>
        <td id="LC1286" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Tree::FallTree</span>() {</td>
      </tr>
      <tr>
        <td id="L1287" class="blob-num js-line-number" data-line-number="1287"></td>
        <td id="LC1287" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> xx,yy;</td>
      </tr>
      <tr>
        <td id="L1288" class="blob-num js-line-number" data-line-number="1288"></td>
        <td id="LC1288" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(!_TREEFALL || <span class="pl-c1">Couple</span>()&gt;t_Ct) { <span class="pl-c"><span class="pl-c">/*</span> above a given stress threshold the tree falls <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1289" class="blob-num js-line-number" data-line-number="1289"></td>
        <td id="LC1289" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(<span class="pl-c1">genrand2</span>()*t_Tree_Height &gt; t_Ct){                                                    <span class="pl-c"><span class="pl-c">//</span> given: probability of treefall = 1-t_Ct/t_Tree_Height</span></td>
      </tr>
      <tr>
        <td id="L1290" class="blob-num js-line-number" data-line-number="1290"></td>
        <td id="LC1290" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">float</span> t_angle = <span class="pl-c1">float</span>(twoPi*<span class="pl-c1">genrand2</span>());                                            <span class="pl-c"><span class="pl-c">//</span> random angle</span></td>
      </tr>
      <tr>
        <td id="L1291" class="blob-num js-line-number" data-line-number="1291"></td>
        <td id="LC1291" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">int</span> row0,col0,h_int, r_int;</td>
      </tr>
      <tr>
        <td id="L1292" class="blob-num js-line-number" data-line-number="1292"></td>
        <td id="LC1292" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">float</span> h_true = t_Tree_Height*LV;</td>
      </tr>
      <tr>
        <td id="L1293" class="blob-num js-line-number" data-line-number="1293"></td>
        <td id="LC1293" class="blob-code blob-code-inner js-file-line">            nbTreefall1++;</td>
      </tr>
      <tr>
        <td id="L1294" class="blob-num js-line-number" data-line-number="1294"></td>
        <td id="LC1294" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(t_dbh*LH&gt;<span class="pl-c1">0.1</span>) nbTreefall10++;</td>
      </tr>
      <tr>
        <td id="L1295" class="blob-num js-line-number" data-line-number="1295"></td>
        <td id="LC1295" class="blob-code blob-code-inner js-file-line">            Thurt[<span class="pl-c1">0</span>][t_site+sites] = <span class="pl-c1">int</span>(t_Tree_Height);                                        <span class="pl-c"><span class="pl-c">//</span> Thurt[0] saves the integer tree height, here exactly at the place where the tree fell...</span></td>
      </tr>
      <tr>
        <td id="L1296" class="blob-num js-line-number" data-line-number="1296"></td>
        <td id="LC1296" class="blob-code blob-code-inner js-file-line">            row0=t_site/cols;       <span class="pl-c"><span class="pl-c">/*</span> fallen stem destructs other trees <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1297" class="blob-num js-line-number" data-line-number="1297"></td>
        <td id="LC1297" class="blob-code blob-code-inner js-file-line">            col0=t_site%cols;</td>
      </tr>
      <tr>
        <td id="L1298" class="blob-num js-line-number" data-line-number="1298"></td>
        <td id="LC1298" class="blob-code blob-code-inner js-file-line">            h_int = <span class="pl-c1">int</span>(h_true*NH);</td>
      </tr>
      <tr>
        <td id="L1299" class="blob-num js-line-number" data-line-number="1299"></td>
        <td id="LC1299" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(<span class="pl-k">int</span> h=<span class="pl-c1">1</span>;h&lt;h_int;h++) {                                                          <span class="pl-c"><span class="pl-c">//</span> loop on the fallen stem (horizontally)</span></td>
      </tr>
      <tr>
        <td id="L1300" class="blob-num js-line-number" data-line-number="1300"></td>
        <td id="LC1300" class="blob-code blob-code-inner js-file-line">                xx=<span class="pl-c1">int</span>(<span class="pl-c1">flor</span>(col0+h*<span class="pl-c1">cos</span>(t_angle)));                                              <span class="pl-c"><span class="pl-c">//</span> get projection in col (= xx) direction, where xx is absolute location</span></td>
      </tr>
      <tr>
        <td id="L1301" class="blob-num js-line-number" data-line-number="1301"></td>
        <td id="LC1301" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(xx&lt;cols){</td>
      </tr>
      <tr>
        <td id="L1302" class="blob-num js-line-number" data-line-number="1302"></td>
        <td id="LC1302" class="blob-code blob-code-inner js-file-line">                    yy=   <span class="pl-c1">int</span>(row0+h*<span class="pl-c1">sin</span>(t_angle));                                             <span class="pl-c"><span class="pl-c">//</span> get projection in row (= yy) direction, where yy is absolute location</span></td>
      </tr>
      <tr>
        <td id="L1303" class="blob-num js-line-number" data-line-number="1303"></td>
        <td id="LC1303" class="blob-code blob-code-inner js-file-line">                    Thurt[<span class="pl-c1">0</span>][xx+(yy+rows)*cols] = <span class="pl-c1">int</span>(t_Tree_Height);                           <span class="pl-c"><span class="pl-c">//</span> Thurt[0] where the stem fell, calculation: xx+(yy+rows)*cols= xx + yy*cols + rows*cols = xx + yy*cols + sites</span></td>
      </tr>
      <tr>
        <td id="L1304" class="blob-num js-line-number" data-line-number="1304"></td>
        <td id="LC1304" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L1305" class="blob-num js-line-number" data-line-number="1305"></td>
        <td id="LC1305" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L1306" class="blob-num js-line-number" data-line-number="1306"></td>
        <td id="LC1306" class="blob-code blob-code-inner js-file-line">            xx=col0+<span class="pl-c1">int</span>((h_true*NH-t_Crown_Radius)*<span class="pl-c1">cos</span>(t_angle));                               <span class="pl-c"><span class="pl-c">//</span> where crown ends/starts</span></td>
      </tr>
      <tr>
        <td id="L1307" class="blob-num js-line-number" data-line-number="1307"></td>
        <td id="LC1307" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">/*</span> fallen crown destructs other trees <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1308" class="blob-num js-line-number" data-line-number="1308"></td>
        <td id="LC1308" class="blob-code blob-code-inner js-file-line">            yy=row0+<span class="pl-c1">int</span>((h_true*NH-t_Crown_Radius)*<span class="pl-c1">sin</span>(t_angle));</td>
      </tr>
      <tr>
        <td id="L1309" class="blob-num js-line-number" data-line-number="1309"></td>
        <td id="LC1309" class="blob-code blob-code-inner js-file-line">            r_int = <span class="pl-c1">int</span>(t_Crown_Radius);</td>
      </tr>
      <tr>
        <td id="L1310" class="blob-num js-line-number" data-line-number="1310"></td>
        <td id="LC1310" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(<span class="pl-k">int</span> col=<span class="pl-c1">max</span>(<span class="pl-c1">0</span>,xx-r_int);col&lt;<span class="pl-c1">min</span>(cols,xx+r_int+<span class="pl-c1">1</span>);col++) {</td>
      </tr>
      <tr>
        <td id="L1311" class="blob-num js-line-number" data-line-number="1311"></td>
        <td id="LC1311" class="blob-code blob-code-inner js-file-line">                <span class="pl-c"><span class="pl-c">/*</span> loop on the fallen crown (horizontally) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1312" class="blob-num js-line-number" data-line-number="1312"></td>
        <td id="LC1312" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">for</span>(<span class="pl-k">int</span> row=yy-r_int;row&lt;yy+r_int+<span class="pl-c1">1</span>;row++) {</td>
      </tr>
      <tr>
        <td id="L1313" class="blob-num js-line-number" data-line-number="1313"></td>
        <td id="LC1313" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span>((col-xx)*(col-xx)+(row-yy)*(row-yy)&lt;r_int*r_int) Thurt[<span class="pl-c1">0</span>][col+(row+rows)*cols] = <span class="pl-c1">int</span>((t_Tree_Height-t_Crown_Radius*NV*LH)*<span class="pl-c1">0.5</span>);</td>
      </tr>
      <tr>
        <td id="L1314" class="blob-num js-line-number" data-line-number="1314"></td>
        <td id="LC1314" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L1315" class="blob-num js-line-number" data-line-number="1315"></td>
        <td id="LC1315" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L1316" class="blob-num js-line-number" data-line-number="1316"></td>
        <td id="LC1316" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(iter == <span class="pl-c1">2</span>) output[<span class="pl-c1">23</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>T<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_sp_lab &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_age &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Tree_Height &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1317" class="blob-num js-line-number" data-line-number="1317"></td>
        <td id="LC1317" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(iter == <span class="pl-c1">int</span>(nbiter/<span class="pl-c1">2</span>)) output[<span class="pl-c1">24</span>]&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>T<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_sp_lab &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_age &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Tree_Height &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1318" class="blob-num js-line-number" data-line-number="1318"></td>
        <td id="LC1318" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(iter == <span class="pl-c1">int</span>(nbiter-<span class="pl-c1">1</span>)) output[<span class="pl-c1">25</span>]&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>T<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_sp_lab &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_age &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Tree_Height &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1319" class="blob-num js-line-number" data-line-number="1319"></td>
        <td id="LC1319" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">Death</span>();</td>
      </tr>
      <tr>
        <td id="L1320" class="blob-num js-line-number" data-line-number="1320"></td>
        <td id="LC1320" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1321" class="blob-num js-line-number" data-line-number="1321"></td>
        <td id="LC1321" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1322" class="blob-num js-line-number" data-line-number="1322"></td>
        <td id="LC1322" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1323" class="blob-num js-line-number" data-line-number="1323"></td>
        <td id="LC1323" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1324" class="blob-num js-line-number" data-line-number="1324"></td>
        <td id="LC1324" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span> <span class="pl-en">Tree::Couple</span>() {</td>
      </tr>
      <tr>
        <td id="L1325" class="blob-num js-line-number" data-line-number="1325"></td>
        <td id="LC1325" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> site2,quadist,haut0,xx,yy, radius_int,h_int;</td>
      </tr>
      <tr>
        <td id="L1326" class="blob-num js-line-number" data-line-number="1326"></td>
        <td id="LC1326" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> fx, fy,temp,lai;</td>
      </tr>
      <tr>
        <td id="L1327" class="blob-num js-line-number" data-line-number="1327"></td>
        <td id="LC1327" class="blob-code blob-code-inner js-file-line">    radius_int = <span class="pl-c1">int</span>(t_Crown_Radius);</td>
      </tr>
      <tr>
        <td id="L1328" class="blob-num js-line-number" data-line-number="1328"></td>
        <td id="LC1328" class="blob-code blob-code-inner js-file-line">    h_int = <span class="pl-c1">int</span>(t_Tree_Height);</td>
      </tr>
      <tr>
        <td id="L1329" class="blob-num js-line-number" data-line-number="1329"></td>
        <td id="LC1329" class="blob-code blob-code-inner js-file-line">    haut0 = <span class="pl-c1">int</span>(t_Tree_Height-t_Crown_Depth);</td>
      </tr>
      <tr>
        <td id="L1330" class="blob-num js-line-number" data-line-number="1330"></td>
        <td id="LC1330" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(radius_int){</td>
      </tr>
      <tr>
        <td id="L1331" class="blob-num js-line-number" data-line-number="1331"></td>
        <td id="LC1331" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">int</span> row0,col0;</td>
      </tr>
      <tr>
        <td id="L1332" class="blob-num js-line-number" data-line-number="1332"></td>
        <td id="LC1332" class="blob-code blob-code-inner js-file-line">        row0=t_site/cols;</td>
      </tr>
      <tr>
        <td id="L1333" class="blob-num js-line-number" data-line-number="1333"></td>
        <td id="LC1333" class="blob-code blob-code-inner js-file-line">        col0=t_site%cols;</td>
      </tr>
      <tr>
        <td id="L1334" class="blob-num js-line-number" data-line-number="1334"></td>
        <td id="LC1334" class="blob-code blob-code-inner js-file-line">        fx = fy = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L1335" class="blob-num js-line-number" data-line-number="1335"></td>
        <td id="LC1335" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(<span class="pl-k">int</span> col=<span class="pl-c1">max</span>(<span class="pl-c1">0</span>,col0-radius_int);col&lt;<span class="pl-c1">min</span>(cols,col0+radius_int+<span class="pl-c1">1</span>);col++) {</td>
      </tr>
      <tr>
        <td id="L1336" class="blob-num js-line-number" data-line-number="1336"></td>
        <td id="LC1336" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(<span class="pl-k">int</span> row=row0-radius_int;row&lt;=row0+radius_int;row++) {</td>
      </tr>
      <tr>
        <td id="L1337" class="blob-num js-line-number" data-line-number="1337"></td>
        <td id="LC1337" class="blob-code blob-code-inner js-file-line">                xx=col0-col;</td>
      </tr>
      <tr>
        <td id="L1338" class="blob-num js-line-number" data-line-number="1338"></td>
        <td id="LC1338" class="blob-code blob-code-inner js-file-line">                yy=row0-row;</td>
      </tr>
      <tr>
        <td id="L1339" class="blob-num js-line-number" data-line-number="1339"></td>
        <td id="LC1339" class="blob-code blob-code-inner js-file-line">                quadist = xx*xx+yy*yy;</td>
      </tr>
      <tr>
        <td id="L1340" class="blob-num js-line-number" data-line-number="1340"></td>
        <td id="LC1340" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>((quadist&lt;=radius_int*radius_int)&amp;&amp;quadist) {</td>
      </tr>
      <tr>
        <td id="L1341" class="blob-num js-line-number" data-line-number="1341"></td>
        <td id="LC1341" class="blob-code blob-code-inner js-file-line">                    <span class="pl-c"><span class="pl-c">//</span>site2 = col+cols*(row+RMAX); //modif 23/03/2011</span></td>
      </tr>
      <tr>
        <td id="L1342" class="blob-num js-line-number" data-line-number="1342"></td>
        <td id="LC1342" class="blob-code blob-code-inner js-file-line">                    site2 = col+cols*row+SBORD;</td>
      </tr>
      <tr>
        <td id="L1343" class="blob-num js-line-number" data-line-number="1343"></td>
        <td id="LC1343" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">for</span>(<span class="pl-k">int</span> h=haut0;h&lt;=h_int;h++) {</td>
      </tr>
      <tr>
        <td id="L1344" class="blob-num js-line-number" data-line-number="1344"></td>
        <td id="LC1344" class="blob-code blob-code-inner js-file-line">                        <span class="pl-k">if</span>(h_int&lt;HEIGHT) lai = LAI3D[h_int][site2]-LAI3D[h_int+<span class="pl-c1">1</span>][site2];</td>
      </tr>
      <tr>
        <td id="L1345" class="blob-num js-line-number" data-line-number="1345"></td>
        <td id="LC1345" class="blob-code blob-code-inner js-file-line">                        <span class="pl-k">else</span>  lai = LAI3D[h_int][site2];</td>
      </tr>
      <tr>
        <td id="L1346" class="blob-num js-line-number" data-line-number="1346"></td>
        <td id="LC1346" class="blob-code blob-code-inner js-file-line">                        <span class="pl-k">if</span>(lai&gt;dens) { <span class="pl-c"><span class="pl-c">//</span> needs to be changed when TREEFALL is revised</span></td>
      </tr>
      <tr>
        <td id="L1347" class="blob-num js-line-number" data-line-number="1347"></td>
        <td id="LC1347" class="blob-code blob-code-inner js-file-line">                            temp = <span class="pl-c1">1.0</span>/<span class="pl-c1">sqrt</span>(<span class="pl-c1">float</span>(quadist));</td>
      </tr>
      <tr>
        <td id="L1348" class="blob-num js-line-number" data-line-number="1348"></td>
        <td id="LC1348" class="blob-code blob-code-inner js-file-line">                            <span class="pl-k">if</span>(temp&gt;<span class="pl-c1">0.0</span>) {</td>
      </tr>
      <tr>
        <td id="L1349" class="blob-num js-line-number" data-line-number="1349"></td>
        <td id="LC1349" class="blob-code blob-code-inner js-file-line">                                fx += <span class="pl-c1">float</span>(xx)*temp;</td>
      </tr>
      <tr>
        <td id="L1350" class="blob-num js-line-number" data-line-number="1350"></td>
        <td id="LC1350" class="blob-code blob-code-inner js-file-line">                                fy += <span class="pl-c1">float</span>(yy)*temp;</td>
      </tr>
      <tr>
        <td id="L1351" class="blob-num js-line-number" data-line-number="1351"></td>
        <td id="LC1351" class="blob-code blob-code-inner js-file-line">                            }</td>
      </tr>
      <tr>
        <td id="L1352" class="blob-num js-line-number" data-line-number="1352"></td>
        <td id="LC1352" class="blob-code blob-code-inner js-file-line">                        }</td>
      </tr>
      <tr>
        <td id="L1353" class="blob-num js-line-number" data-line-number="1353"></td>
        <td id="LC1353" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L1354" class="blob-num js-line-number" data-line-number="1354"></td>
        <td id="LC1354" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L1355" class="blob-num js-line-number" data-line-number="1355"></td>
        <td id="LC1355" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L1356" class="blob-num js-line-number" data-line-number="1356"></td>
        <td id="LC1356" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1357" class="blob-num js-line-number" data-line-number="1357"></td>
        <td id="LC1357" class="blob-code blob-code-inner js-file-line">        t_C = <span class="pl-c1">int</span>(<span class="pl-c1">sqrt</span>(fx*fx+fy*fy)*t_Tree_Height);</td>
      </tr>
      <tr>
        <td id="L1358" class="blob-num js-line-number" data-line-number="1358"></td>
        <td id="LC1358" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(fx!=<span class="pl-c1">0.0</span>) t_angle=<span class="pl-c1">atan2</span>(fy,fx);</td>
      </tr>
      <tr>
        <td id="L1359" class="blob-num js-line-number" data-line-number="1359"></td>
        <td id="LC1359" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> t_angle = Pis2*<span class="pl-c1">sgn</span>(fy);</td>
      </tr>
      <tr>
        <td id="L1360" class="blob-num js-line-number" data-line-number="1360"></td>
        <td id="LC1360" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1361" class="blob-num js-line-number" data-line-number="1361"></td>
        <td id="LC1361" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span>{t_C = <span class="pl-c1">0</span>; t_angle = <span class="pl-c1">0.0</span>; }</td>
      </tr>
      <tr>
        <td id="L1362" class="blob-num js-line-number" data-line-number="1362"></td>
        <td id="LC1362" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> t_C;</td>
      </tr>
      <tr>
        <td id="L1363" class="blob-num js-line-number" data-line-number="1363"></td>
        <td id="LC1363" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1364" class="blob-num js-line-number" data-line-number="1364"></td>
        <td id="LC1364" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1365" class="blob-num js-line-number" data-line-number="1365"></td>
        <td id="LC1365" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1366" class="blob-num js-line-number" data-line-number="1366"></td>
        <td id="LC1366" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1367" class="blob-num js-line-number" data-line-number="1367"></td>
        <td id="LC1367" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>#####################################################</span></td>
      </tr>
      <tr>
        <td id="L1368" class="blob-num js-line-number" data-line-number="1368"></td>
        <td id="LC1368" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####      For Average and OutputField             ####</span></td>
      </tr>
      <tr>
        <td id="L1369" class="blob-num js-line-number" data-line-number="1369"></td>
        <td id="LC1369" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ######################################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1370" class="blob-num js-line-number" data-line-number="1370"></td>
        <td id="LC1370" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1371" class="blob-num js-line-number" data-line-number="1371"></td>
        <td id="LC1371" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Tree::Average</span>() {</td>
      </tr>
      <tr>
        <td id="L1372" class="blob-num js-line-number" data-line-number="1372"></td>
        <td id="LC1372" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(t_age&gt;<span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L1373" class="blob-num js-line-number" data-line-number="1373"></td>
        <td id="LC1373" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(t_dbh*LH &gt;= <span class="pl-c1">0.1</span>) {</td>
      </tr>
      <tr>
        <td id="L1374" class="blob-num js-line-number" data-line-number="1374"></td>
        <td id="LC1374" class="blob-code blob-code-inner js-file-line">            (t_s-&gt;s_output_field[<span class="pl-c1">1</span>])++;</td>
      </tr>
      <tr>
        <td id="L1375" class="blob-num js-line-number" data-line-number="1375"></td>
        <td id="LC1375" class="blob-code blob-code-inner js-file-line">            t_s-&gt;s_output_field[<span class="pl-c1">6</span>] += t_dbh*LH*t_dbh*LH;</td>
      </tr>
      <tr>
        <td id="L1376" class="blob-num js-line-number" data-line-number="1376"></td>
        <td id="LC1376" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1377" class="blob-num js-line-number" data-line-number="1377"></td>
        <td id="LC1377" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(t_dbh*LH &gt;= <span class="pl-c1">0.3</span>) (t_s-&gt;s_output_field[<span class="pl-c1">2</span>])++;</td>
      </tr>
      <tr>
        <td id="L1378" class="blob-num js-line-number" data-line-number="1378"></td>
        <td id="LC1378" class="blob-code blob-code-inner js-file-line">        t_s-&gt;s_output_field[<span class="pl-c1">3</span>] += t_dbh*LH*t_dbh*LH;</td>
      </tr>
      <tr>
        <td id="L1379" class="blob-num js-line-number" data-line-number="1379"></td>
        <td id="LC1379" class="blob-code blob-code-inner js-file-line">        t_s-&gt;s_output_field[<span class="pl-c1">4</span>] += t_NPP*<span class="pl-c1">1.0e-6</span>;</td>
      </tr>
      <tr>
        <td id="L1380" class="blob-num js-line-number" data-line-number="1380"></td>
        <td id="LC1380" class="blob-code blob-code-inner js-file-line">        t_s-&gt;s_output_field[<span class="pl-c1">5</span>] += t_GPP*<span class="pl-c1">1.0e-6</span>;</td>
      </tr>
      <tr>
        <td id="L1381" class="blob-num js-line-number" data-line-number="1381"></td>
        <td id="LC1381" class="blob-code blob-code-inner js-file-line">        t_s-&gt;s_output_field[<span class="pl-c1">7</span>] += <span class="pl-c1">0.0673</span>*<span class="pl-c1">pow</span>(t_s-&gt;s_wsg*t_Tree_Height*LV*t_dbh*t_dbh*LH*LH*<span class="pl-c1">10000</span>, <span class="pl-c1">0.976</span>);  <span class="pl-c"><span class="pl-c">//</span> this is the allometrtic equ 4 in Chave et al. 2014 Global Change Biology to compute above ground biomass</span></td>
      </tr>
      <tr>
        <td id="L1382" class="blob-num js-line-number" data-line-number="1382"></td>
        <td id="LC1382" class="blob-code blob-code-inner js-file-line">        t_s-&gt;s_output_field[<span class="pl-c1">8</span>] += t_Rday*<span class="pl-c1">1.0e-6</span>;</td>
      </tr>
      <tr>
        <td id="L1383" class="blob-num js-line-number" data-line-number="1383"></td>
        <td id="LC1383" class="blob-code blob-code-inner js-file-line">        t_s-&gt;s_output_field[<span class="pl-c1">9</span>] += t_Rnight*<span class="pl-c1">1.0e-6</span>;</td>
      </tr>
      <tr>
        <td id="L1384" class="blob-num js-line-number" data-line-number="1384"></td>
        <td id="LC1384" class="blob-code blob-code-inner js-file-line">        t_s-&gt;s_output_field[<span class="pl-c1">10</span>] += t_Rstem*<span class="pl-c1">1.0e-6</span>;</td>
      </tr>
      <tr>
        <td id="L1385" class="blob-num js-line-number" data-line-number="1385"></td>
        <td id="LC1385" class="blob-code blob-code-inner js-file-line">        t_s-&gt;s_output_field[<span class="pl-c1">11</span>] += t_litter*<span class="pl-c1">1.0e-6</span>;</td>
      </tr>
      <tr>
        <td id="L1386" class="blob-num js-line-number" data-line-number="1386"></td>
        <td id="LC1386" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1387" class="blob-num js-line-number" data-line-number="1387"></td>
        <td id="LC1387" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1388" class="blob-num js-line-number" data-line-number="1388"></td>
        <td id="LC1388" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1389" class="blob-num js-line-number" data-line-number="1389"></td>
        <td id="LC1389" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Tree::histdbh</span>() {</td>
      </tr>
      <tr>
        <td id="L1390" class="blob-num js-line-number" data-line-number="1390"></td>
        <td id="LC1390" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(t_age) nbdbh[<span class="pl-c1">int</span>(<span class="pl-c1">100</span>.*t_dbh*LH)]++;</td>
      </tr>
      <tr>
        <td id="L1391" class="blob-num js-line-number" data-line-number="1391"></td>
        <td id="LC1391" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> compute the diameter distribution density</span></td>
      </tr>
      <tr>
        <td id="L1392" class="blob-num js-line-number" data-line-number="1392"></td>
        <td id="LC1392" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> where dbh is in cm (it is in number of horizontal cells throughout the code)</span></td>
      </tr>
      <tr>
        <td id="L1393" class="blob-num js-line-number" data-line-number="1393"></td>
        <td id="LC1393" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> values are always rounded down (so nbdbh[30] gives you trees with more than 30 cm dbh, and less than 31))</span></td>
      </tr>
      <tr>
        <td id="L1394" class="blob-num js-line-number" data-line-number="1394"></td>
        <td id="LC1394" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1395" class="blob-num js-line-number" data-line-number="1395"></td>
        <td id="LC1395" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1396" class="blob-num js-line-number" data-line-number="1396"></td>
        <td id="LC1396" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1397" class="blob-num js-line-number" data-line-number="1397"></td>
        <td id="LC1397" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>#####################################################</span></td>
      </tr>
      <tr>
        <td id="L1398" class="blob-num js-line-number" data-line-number="1398"></td>
        <td id="LC1398" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####      User Output for Control Purposes        ####</span></td>
      </tr>
      <tr>
        <td id="L1399" class="blob-num js-line-number" data-line-number="1399"></td>
        <td id="LC1399" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ######################################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1400" class="blob-num js-line-number" data-line-number="1400"></td>
        <td id="LC1400" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1401" class="blob-num js-line-number" data-line-number="1401"></td>
        <td id="LC1401" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Tree::OutputTreeStandard</span>(fstream&amp; output, <span class="pl-k">float</span> *addedinfo[<span class="pl-c1">5</span>]){</td>
      </tr>
      <tr>
        <td id="L1402" class="blob-num js-line-number" data-line-number="1402"></td>
        <td id="LC1402" class="blob-code blob-code-inner js-file-line">    output &lt;&lt; iter &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_site &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_sp_lab &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Tree_Height &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>  &lt;&lt; t_ddbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_litter &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_age &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_leafarea &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_youngLA&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_matureLA &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_oldLA &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Crown_Radius &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Crown_Depth &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dens  &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_PPFD  &lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_GPP  &lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_NPP &lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Rstem &lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Rday  &lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Rnight &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_site &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; LAI3D[<span class="pl-c1">int</span>(t_Tree_Height)][t_site+SBORD] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; LAI3D[<span class="pl-c1">int</span>(t_Tree_Height-t_Crown_Depth)+<span class="pl-c1">1</span>][t_site+SBORD] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; *addedinfo[<span class="pl-c1">0</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; *addedinfo[<span class="pl-c1">1</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; *addedinfo[<span class="pl-c1">2</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; *addedinfo[<span class="pl-c1">3</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; *addedinfo[<span class="pl-c1">4</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1403" class="blob-num js-line-number" data-line-number="1403"></td>
        <td id="LC1403" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1404" class="blob-num js-line-number" data-line-number="1404"></td>
        <td id="LC1404" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1405" class="blob-num js-line-number" data-line-number="1405"></td>
        <td id="LC1405" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Tree::OutputTreeStandard</span>(){</td>
      </tr>
      <tr>
        <td id="L1406" class="blob-num js-line-number" data-line-number="1406"></td>
        <td id="LC1406" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; iter &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_site &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_sp_lab &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Tree_Height &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>  &lt;&lt; t_ddbh &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_litter &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_age &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_leafarea &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_youngLA&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_matureLA &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_oldLA &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Crown_Radius &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Crown_Depth &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_dens  &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_PPFD  &lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_GPP  &lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_NPP &lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Rstem &lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Rday  &lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_Rnight &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; t_site &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; LAI3D[<span class="pl-c1">int</span>(t_Tree_Height)][t_site+SBORD] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; LAI3D[<span class="pl-c1">int</span>(t_Tree_Height-t_Crown_Depth)+<span class="pl-c1">1</span>][t_site+SBORD] &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1407" class="blob-num js-line-number" data-line-number="1407"></td>
        <td id="LC1407" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1408" class="blob-num js-line-number" data-line-number="1408"></td>
        <td id="LC1408" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1409" class="blob-num js-line-number" data-line-number="1409"></td>
        <td id="LC1409" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Class objects <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1410" class="blob-num js-line-number" data-line-number="1410"></td>
        <td id="LC1410" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1411" class="blob-num js-line-number" data-line-number="1411"></td>
        <td id="LC1411" class="blob-code blob-code-inner js-file-line">Species *S=<span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1412" class="blob-num js-line-number" data-line-number="1412"></td>
        <td id="LC1412" class="blob-code blob-code-inner js-file-line">Tree *T=<span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1413" class="blob-num js-line-number" data-line-number="1413"></td>
        <td id="LC1413" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1414" class="blob-num js-line-number" data-line-number="1414"></td>
        <td id="LC1414" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1415" class="blob-num js-line-number" data-line-number="1415"></td>
        <td id="LC1415" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>############################################</span></td>
      </tr>
      <tr>
        <td id="L1416" class="blob-num js-line-number" data-line-number="1416"></td>
        <td id="LC1416" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################################</span></td>
      </tr>
      <tr>
        <td id="L1417" class="blob-num js-line-number" data-line-number="1417"></td>
        <td id="LC1417" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############     MAIN PROGRAM    ###########</span></td>
      </tr>
      <tr>
        <td id="L1418" class="blob-num js-line-number" data-line-number="1418"></td>
        <td id="LC1418" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################################</span></td>
      </tr>
      <tr>
        <td id="L1419" class="blob-num js-line-number" data-line-number="1419"></td>
        <td id="LC1419" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1420" class="blob-num js-line-number" data-line-number="1420"></td>
        <td id="LC1420" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1421" class="blob-num js-line-number" data-line-number="1421"></td>
        <td id="LC1421" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span> <span class="pl-en">main</span>(<span class="pl-k">int</span> argc,<span class="pl-k">char</span> *argv[]) {</td>
      </tr>
      <tr>
        <td id="L1422" class="blob-num js-line-number" data-line-number="1422"></td>
        <td id="LC1422" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1423" class="blob-num js-line-number" data-line-number="1423"></td>
        <td id="LC1423" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*********************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1424" class="blob-num js-line-number" data-line-number="1424"></td>
        <td id="LC1424" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** Initializations **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1425" class="blob-num js-line-number" data-line-number="1425"></td>
        <td id="LC1425" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*********************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1426" class="blob-num js-line-number" data-line-number="1426"></td>
        <td id="LC1426" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI   <span class="pl-c"><span class="pl-c">/*</span> Lookup processor number / total number of processors <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1427" class="blob-num js-line-number" data-line-number="1427"></td>
        <td id="LC1427" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI_Init</span>(&amp;argc,&amp;argv);</td>
      </tr>
      <tr>
        <td id="L1428" class="blob-num js-line-number" data-line-number="1428"></td>
        <td id="LC1428" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI_Comm_rank</span>(MPI_COMM_WORLD,&amp;p_rank);</td>
      </tr>
      <tr>
        <td id="L1429" class="blob-num js-line-number" data-line-number="1429"></td>
        <td id="LC1429" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI_Comm_size</span>(MPI_COMM_WORLD,&amp;size);</td>
      </tr>
      <tr>
        <td id="L1430" class="blob-num js-line-number" data-line-number="1430"></td>
        <td id="LC1430" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1431" class="blob-num js-line-number" data-line-number="1431"></td>
        <td id="LC1431" class="blob-code blob-code-inner js-file-line">    mpi_rank = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1432" class="blob-num js-line-number" data-line-number="1432"></td>
        <td id="LC1432" class="blob-code blob-code-inner js-file-line">    mpi_size = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L1433" class="blob-num js-line-number" data-line-number="1433"></td>
        <td id="LC1433" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1434" class="blob-num js-line-number" data-line-number="1434"></td>
        <td id="LC1434" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> easyMPI</td>
      </tr>
      <tr>
        <td id="L1435" class="blob-num js-line-number" data-line-number="1435"></td>
        <td id="LC1435" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI::Init</span>();</td>
      </tr>
      <tr>
        <td id="L1436" class="blob-num js-line-number" data-line-number="1436"></td>
        <td id="LC1436" class="blob-code blob-code-inner js-file-line">    easympi_rank = MPI::COMM_WORLD.<span class="pl-c1">Get_rank</span>();</td>
      </tr>
      <tr>
        <td id="L1437" class="blob-num js-line-number" data-line-number="1437"></td>
        <td id="LC1437" class="blob-code blob-code-inner js-file-line">    easympi_size = MPI::COMM_WORLD.<span class="pl-c1">Get_size</span>();</td>
      </tr>
      <tr>
        <td id="L1438" class="blob-num js-line-number" data-line-number="1438"></td>
        <td id="LC1438" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>MPI_Get_library_version(version, &amp;len);</span></td>
      </tr>
      <tr>
        <td id="L1439" class="blob-num js-line-number" data-line-number="1439"></td>
        <td id="LC1439" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>std::cout &lt;&lt; &quot;Hello, world!  I am &quot; &lt;&lt; rank &lt;&lt; &quot; of &quot; &lt;&lt; size &lt;&lt; &quot;(&quot; &lt;&lt; version &lt;&lt; &quot;, &quot; &lt;&lt; len &lt;&lt; &quot;)&quot; &lt;&lt; std::endl;</span></td>
      </tr>
      <tr>
        <td id="L1440" class="blob-num js-line-number" data-line-number="1440"></td>
        <td id="LC1440" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt; &quot;Hello, world!  I am &quot; &lt;&lt; easympi_rank &lt;&lt; &quot; of &quot; &lt;&lt; easympi_size&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1441" class="blob-num js-line-number" data-line-number="1441"></td>
        <td id="LC1441" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1442" class="blob-num js-line-number" data-line-number="1442"></td>
        <td id="LC1442" class="blob-code blob-code-inner js-file-line">    easympi_rank = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1443" class="blob-num js-line-number" data-line-number="1443"></td>
        <td id="LC1443" class="blob-code blob-code-inner js-file-line">    easympi_size =<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L1444" class="blob-num js-line-number" data-line-number="1444"></td>
        <td id="LC1444" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1445" class="blob-num js-line-number" data-line-number="1445"></td>
        <td id="LC1445" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1446" class="blob-num js-line-number" data-line-number="1446"></td>
        <td id="LC1446" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(<span class="pl-k">int</span> argn=<span class="pl-c1">1</span>;argn&lt;argc;argn++){ <span class="pl-c"><span class="pl-c">/*</span> Arguments of the input and output files <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1447" class="blob-num js-line-number" data-line-number="1447"></td>
        <td id="LC1447" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(*argv[argn] == <span class="pl-s"><span class="pl-pds">&#39;</span>-<span class="pl-pds">&#39;</span></span>){</td>
      </tr>
      <tr>
        <td id="L1448" class="blob-num js-line-number" data-line-number="1448"></td>
        <td id="LC1448" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">switch</span>(*(argv[argn]+<span class="pl-c1">1</span>)){</td>
      </tr>
      <tr>
        <td id="L1449" class="blob-num js-line-number" data-line-number="1449"></td>
        <td id="LC1449" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">case</span> <span class="pl-s"><span class="pl-pds">&#39;</span>i<span class="pl-pds">&#39;</span></span>:</td>
      </tr>
      <tr>
        <td id="L1450" class="blob-num js-line-number" data-line-number="1450"></td>
        <td id="LC1450" class="blob-code blob-code-inner js-file-line">                    bufi = argv[argn]+<span class="pl-c1">2</span>;</td>
      </tr>
      <tr>
        <td id="L1451" class="blob-num js-line-number" data-line-number="1451"></td>
        <td id="LC1451" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L1452" class="blob-num js-line-number" data-line-number="1452"></td>
        <td id="LC1452" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">case</span> <span class="pl-s"><span class="pl-pds">&#39;</span>o<span class="pl-pds">&#39;</span></span>:</td>
      </tr>
      <tr>
        <td id="L1453" class="blob-num js-line-number" data-line-number="1453"></td>
        <td id="LC1453" class="blob-code blob-code-inner js-file-line">                    buf = argv[argn]+<span class="pl-c1">2</span>;</td>
      </tr>
      <tr>
        <td id="L1454" class="blob-num js-line-number" data-line-number="1454"></td>
        <td id="LC1454" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L1455" class="blob-num js-line-number" data-line-number="1455"></td>
        <td id="LC1455" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">case</span> <span class="pl-s"><span class="pl-pds">&#39;</span>f<span class="pl-pds">&#39;</span></span>:                      <span class="pl-c"><span class="pl-c">/*</span> new v.2.3: initialisation from field, &#39;f&#39; for &quot;forest&quot;, &quot;field data&quot; <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1456" class="blob-num js-line-number" data-line-number="1456"></td>
        <td id="LC1456" class="blob-code blob-code-inner js-file-line">                    bufi_data = argv[argn]+<span class="pl-c1">2</span>;</td>
      </tr>
      <tr>
        <td id="L1457" class="blob-num js-line-number" data-line-number="1457"></td>
        <td id="LC1457" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L1458" class="blob-num js-line-number" data-line-number="1458"></td>
        <td id="LC1458" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">case</span> <span class="pl-s"><span class="pl-pds">&#39;</span>n<span class="pl-pds">&#39;</span></span>:</td>
      </tr>
      <tr>
        <td id="L1459" class="blob-num js-line-number" data-line-number="1459"></td>
        <td id="LC1459" class="blob-code blob-code-inner js-file-line">                    easympi_rank=<span class="pl-c1">atoi</span>(argv[argn]+<span class="pl-c1">2</span>); <span class="pl-c"><span class="pl-c">/*</span> new v.2.2 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1460" class="blob-num js-line-number" data-line-number="1460"></td>
        <td id="LC1460" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L1461" class="blob-num js-line-number" data-line-number="1461"></td>
        <td id="LC1461" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1462" class="blob-num js-line-number" data-line-number="1462"></td>
        <td id="LC1462" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1463" class="blob-num js-line-number" data-line-number="1463"></td>
        <td id="LC1463" class="blob-code blob-code-inner js-file-line">    cout&lt;&lt; easympi_rank;</td>
      </tr>
      <tr>
        <td id="L1464" class="blob-num js-line-number" data-line-number="1464"></td>
        <td id="LC1464" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> t=(<span class="pl-k">int</span>) <span class="pl-c1">time</span>(<span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L1465" class="blob-num js-line-number" data-line-number="1465"></td>
        <td id="LC1465" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> seed =<span class="pl-c1">3</span>*t+<span class="pl-c1">2</span>*(easympi_rank+<span class="pl-c1">1</span>)+<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L1466" class="blob-num js-line-number" data-line-number="1466"></td>
        <td id="LC1466" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">sgenrand2i</span>(seed);</td>
      </tr>
      <tr>
        <td id="L1467" class="blob-num js-line-number" data-line-number="1467"></td>
        <td id="LC1467" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">sgenrand2</span>(seed);</td>
      </tr>
      <tr>
        <td id="L1468" class="blob-num js-line-number" data-line-number="1468"></td>
        <td id="LC1468" class="blob-code blob-code-inner js-file-line">    cout&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>On proc #<span class="pl-pds">&quot;</span></span> &lt;&lt; easympi_rank &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> seed: <span class="pl-pds">&quot;</span></span> &lt;&lt; seed &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span> rng: <span class="pl-pds">&quot;</span></span>&lt;&lt; <span class="pl-c1">genrand2</span>() &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1469" class="blob-num js-line-number" data-line-number="1469"></td>
        <td id="LC1469" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-c1">genrand2</span>()&lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1470" class="blob-num js-line-number" data-line-number="1470"></td>
        <td id="LC1470" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-c1">genrand2</span>()&lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1471" class="blob-num js-line-number" data-line-number="1471"></td>
        <td id="LC1471" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1472" class="blob-num js-line-number" data-line-number="1472"></td>
        <td id="LC1472" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> input files</span></td>
      </tr>
      <tr>
        <td id="L1473" class="blob-num js-line-number" data-line-number="1473"></td>
        <td id="LC1473" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1474" class="blob-num js-line-number" data-line-number="1474"></td>
        <td id="LC1474" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">sprintf</span>(inputfile,<span class="pl-s"><span class="pl-pds">&quot;</span>%s<span class="pl-pds">&quot;</span></span>,bufi);</td>
      </tr>
      <tr>
        <td id="L1475" class="blob-num js-line-number" data-line-number="1475"></td>
        <td id="LC1475" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_FromData){</td>
      </tr>
      <tr>
        <td id="L1476" class="blob-num js-line-number" data-line-number="1476"></td>
        <td id="LC1476" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">sprintf</span>(inputfile_data,<span class="pl-s"><span class="pl-pds">&quot;</span>%s<span class="pl-pds">&quot;</span></span>,bufi_data);</td>
      </tr>
      <tr>
        <td id="L1477" class="blob-num js-line-number" data-line-number="1477"></td>
        <td id="LC1477" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1478" class="blob-num js-line-number" data-line-number="1478"></td>
        <td id="LC1478" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>in this version of the code, the code user is expected to use the input txt file name with its extension name, as eg. &quot;input.txt&quot;, when setting the program&#39;s argument</span></td>
      </tr>
      <tr>
        <td id="L1479" class="blob-num js-line-number" data-line-number="1479"></td>
        <td id="LC1479" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>sprintf(inputfile,&quot;%s.txt&quot;,bufi);</span></td>
      </tr>
      <tr>
        <td id="L1480" class="blob-num js-line-number" data-line-number="1480"></td>
        <td id="LC1480" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1481" class="blob-num js-line-number" data-line-number="1481"></td>
        <td id="LC1481" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(!_OUTPUT_reduced)</td>
      </tr>
      <tr>
        <td id="L1482" class="blob-num js-line-number" data-line-number="1482"></td>
        <td id="LC1482" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1483" class="blob-num js-line-number" data-line-number="1483"></td>
        <td id="LC1483" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">sprintf</span>(outputinfo,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_par.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);                     <span class="pl-c"><span class="pl-c">/*</span> Files with general output info <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1484" class="blob-num js-line-number" data-line-number="1484"></td>
        <td id="LC1484" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>On proc #<span class="pl-pds">&quot;</span></span> &lt;&lt; easympi_rank &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> seed: <span class="pl-pds">&quot;</span></span> &lt;&lt; seed &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span> rng: <span class="pl-pds">&quot;</span></span>&lt;&lt; <span class="pl-c1">genrand2</span>() &lt;&lt;  endl;</td>
      </tr>
      <tr>
        <td id="L1485" class="blob-num js-line-number" data-line-number="1485"></td>
        <td id="LC1485" class="blob-code blob-code-inner js-file-line">        out.<span class="pl-c1">open</span>(outputinfo, ios::out);</td>
      </tr>
      <tr>
        <td id="L1486" class="blob-num js-line-number" data-line-number="1486"></td>
        <td id="LC1486" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(!out) cerr&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>ERROR with par file<span class="pl-pds">&quot;</span></span>&lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1487" class="blob-num js-line-number" data-line-number="1487"></td>
        <td id="LC1487" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">sprintf</span>(outputinfo,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_info.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1488" class="blob-num js-line-number" data-line-number="1488"></td>
        <td id="LC1488" class="blob-code blob-code-inner js-file-line">        out2.<span class="pl-c1">open</span>(outputinfo, ios::out);</td>
      </tr>
      <tr>
        <td id="L1489" class="blob-num js-line-number" data-line-number="1489"></td>
        <td id="LC1489" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(!out2) cerr&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>ERROR with info file<span class="pl-pds">&quot;</span></span>&lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1490" class="blob-num js-line-number" data-line-number="1490"></td>
        <td id="LC1490" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1491" class="blob-num js-line-number" data-line-number="1491"></td>
        <td id="LC1491" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">Initialise</span>();           <span class="pl-c"><span class="pl-c">/*</span> Read global parameters <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1492" class="blob-num js-line-number" data-line-number="1492"></td>
        <td id="LC1492" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1493" class="blob-num js-line-number" data-line-number="1493"></td>
        <td id="LC1493" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">AllocMem</span>();             <span class="pl-c"><span class="pl-c">/*</span> Memory allocation <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1494" class="blob-num js-line-number" data-line-number="1494"></td>
        <td id="LC1494" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1495" class="blob-num js-line-number" data-line-number="1495"></td>
        <td id="LC1495" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_FromData){</td>
      </tr>
      <tr>
        <td id="L1496" class="blob-num js-line-number" data-line-number="1496"></td>
        <td id="LC1496" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">InitialiseFromData</span>();   <span class="pl-c"><span class="pl-c">/*</span> Initial configuration of the forest, read from data <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1497" class="blob-num js-line-number" data-line-number="1497"></td>
        <td id="LC1497" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1498" class="blob-num js-line-number" data-line-number="1498"></td>
        <td id="LC1498" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1499" class="blob-num js-line-number" data-line-number="1499"></td>
        <td id="LC1499" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">BirthInit</span>();            <span class="pl-c"><span class="pl-c">/*</span> Initial configuration of the forest <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1500" class="blob-num js-line-number" data-line-number="1500"></td>
        <td id="LC1500" class="blob-code blob-code-inner js-file-line">    out.<span class="pl-c1">close</span>();</td>
      </tr>
      <tr>
        <td id="L1501" class="blob-num js-line-number" data-line-number="1501"></td>
        <td id="LC1501" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1502" class="blob-num js-line-number" data-line-number="1502"></td>
        <td id="LC1502" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>klight is: <span class="pl-pds">&quot;</span></span> &lt;&lt; klight &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1503" class="blob-num js-line-number" data-line-number="1503"></td>
        <td id="LC1503" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>CO2 concentration is: <span class="pl-pds">&quot;</span></span> &lt;&lt; Cair &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1504" class="blob-num js-line-number" data-line-number="1504"></td>
        <td id="LC1504" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1505" class="blob-num js-line-number" data-line-number="1505"></td>
        <td id="LC1505" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*********************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1506" class="blob-num js-line-number" data-line-number="1506"></td>
        <td id="LC1506" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** Evolution loop  **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1507" class="blob-num js-line-number" data-line-number="1507"></td>
        <td id="LC1507" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*********************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1508" class="blob-num js-line-number" data-line-number="1508"></td>
        <td id="LC1508" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1509" class="blob-num js-line-number" data-line-number="1509"></td>
        <td id="LC1509" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">double</span> start_time,stop_time, duration=<span class="pl-c1">0.0</span>;           <span class="pl-c"><span class="pl-c">/*</span> for simulation duration <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1510" class="blob-num js-line-number" data-line-number="1510"></td>
        <td id="LC1510" class="blob-code blob-code-inner js-file-line">    stop_time = <span class="pl-c1">clock</span>();</td>
      </tr>
      <tr>
        <td id="L1511" class="blob-num js-line-number" data-line-number="1511"></td>
        <td id="LC1511" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(iter=<span class="pl-c1">0</span>;iter&lt;nbiter;iter++) {</td>
      </tr>
      <tr>
        <td id="L1512" class="blob-num js-line-number" data-line-number="1512"></td>
        <td id="LC1512" class="blob-code blob-code-inner js-file-line">        start_time = stop_time;</td>
      </tr>
      <tr>
        <td id="L1513" class="blob-num js-line-number" data-line-number="1513"></td>
        <td id="LC1513" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1514" class="blob-num js-line-number" data-line-number="1514"></td>
        <td id="LC1514" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span>CURRENTLY NOT USED: precip, WS, Wmean, e_s, e_a,VPDbasic,VPDday</span></td>
      </tr>
      <tr>
        <td id="L1515" class="blob-num js-line-number" data-line-number="1515"></td>
        <td id="LC1515" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1516" class="blob-num js-line-number" data-line-number="1516"></td>
        <td id="LC1516" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> set the iteration environment -- nb: the current structure of code suppose that environment is periodic (a period = a year), if one want to make climate vary, with interannual variation and climate change along the simulation, one just need to provide the full climate input of the whole simulation (ie number of columns=iter and not iterperyear) and change iterperyear by nbiter here. <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1517" class="blob-num js-line-number" data-line-number="1517"></td>
        <td id="LC1517" class="blob-code blob-code-inner js-file-line">        temp=Temperature[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1518" class="blob-num js-line-number" data-line-number="1518"></td>
        <td id="LC1518" class="blob-code blob-code-inner js-file-line">        tmax=DailyMaxTemperature[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1519" class="blob-num js-line-number" data-line-number="1519"></td>
        <td id="LC1519" class="blob-code blob-code-inner js-file-line">        tnight=NightTemperature[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1520" class="blob-num js-line-number" data-line-number="1520"></td>
        <td id="LC1520" class="blob-code blob-code-inner js-file-line">        precip=Rainfall[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1521" class="blob-num js-line-number" data-line-number="1521"></td>
        <td id="LC1521" class="blob-code blob-code-inner js-file-line">        WS=WindSpeed[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1522" class="blob-num js-line-number" data-line-number="1522"></td>
        <td id="LC1522" class="blob-code blob-code-inner js-file-line">        Wmax=MaxIrradiance[iter%iterperyear]*<span class="pl-c1">1.678</span>;       <span class="pl-c"><span class="pl-c">//</span> 1.678 is to convert irradiance from W/m2 to micromol of PAR /s /m2, the unit used in the FvCB model of photosynthesis</span></td>
      </tr>
      <tr>
        <td id="L1523" class="blob-num js-line-number" data-line-number="1523"></td>
        <td id="LC1523" class="blob-code blob-code-inner js-file-line">        Wmean=MeanIrradiance[iter%iterperyear];            <span class="pl-c"><span class="pl-c">//</span> still in W/m2</span></td>
      </tr>
      <tr>
        <td id="L1524" class="blob-num js-line-number" data-line-number="1524"></td>
        <td id="LC1524" class="blob-code blob-code-inner js-file-line">        e_s=SaturatedVapourPressure[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1525" class="blob-num js-line-number" data-line-number="1525"></td>
        <td id="LC1525" class="blob-code blob-code-inner js-file-line">        e_a=VapourPressure[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1526" class="blob-num js-line-number" data-line-number="1526"></td>
        <td id="LC1526" class="blob-code blob-code-inner js-file-line">        VPDbasic=VapourPressureDeficit[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1527" class="blob-num js-line-number" data-line-number="1527"></td>
        <td id="LC1527" class="blob-code blob-code-inner js-file-line">        VPDday=DailyVapourPressureDeficit[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1528" class="blob-num js-line-number" data-line-number="1528"></td>
        <td id="LC1528" class="blob-code blob-code-inner js-file-line">        VPDmax=DailyMaxVapourPressureDeficit[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1529" class="blob-num js-line-number" data-line-number="1529"></td>
        <td id="LC1529" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1530" class="blob-num js-line-number" data-line-number="1530"></td>
        <td id="LC1530" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">Evolution</span>();</td>
      </tr>
      <tr>
        <td id="L1531" class="blob-num js-line-number" data-line-number="1531"></td>
        <td id="LC1531" class="blob-code blob-code-inner js-file-line">        stop_time = <span class="pl-c1">clock</span>();</td>
      </tr>
      <tr>
        <td id="L1532" class="blob-num js-line-number" data-line-number="1532"></td>
        <td id="LC1532" class="blob-code blob-code-inner js-file-line">        duration +=<span class="pl-c1">flor</span>(stop_time-start_time);</td>
      </tr>
      <tr>
        <td id="L1533" class="blob-num js-line-number" data-line-number="1533"></td>
        <td id="LC1533" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1534" class="blob-num js-line-number" data-line-number="1534"></td>
        <td id="LC1534" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>***** Final pattern v.2.2 *****<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1535" class="blob-num js-line-number" data-line-number="1535"></td>
        <td id="LC1535" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(!_OUTPUT_reduced){</td>
      </tr>
      <tr>
        <td id="L1536" class="blob-num js-line-number" data-line-number="1536"></td>
        <td id="LC1536" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span> (iter==nbiter-<span class="pl-c1">2</span>) {</td>
      </tr>
      <tr>
        <td id="L1537" class="blob-num js-line-number" data-line-number="1537"></td>
        <td id="LC1537" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">for</span>(<span class="pl-k">int</span> row=<span class="pl-c1">0</span>;row&lt;rows;row++)</td>
      </tr>
      <tr>
        <td id="L1538" class="blob-num js-line-number" data-line-number="1538"></td>
        <td id="LC1538" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">for</span>(<span class="pl-k">int</span> col=<span class="pl-c1">0</span>;col&lt;cols;col++){</td>
      </tr>
      <tr>
        <td id="L1539" class="blob-num js-line-number" data-line-number="1539"></td>
        <td id="LC1539" class="blob-code blob-code-inner js-file-line">                        output[<span class="pl-c1">10</span>] &lt;&lt; col &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; row &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_age</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_dbh</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_Tree_Height</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_Crown_Radius</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_Crown_Depth</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_sp_lab</span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1540" class="blob-num js-line-number" data-line-number="1540"></td>
        <td id="LC1540" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L1541" class="blob-num js-line-number" data-line-number="1541"></td>
        <td id="LC1541" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L1542" class="blob-num js-line-number" data-line-number="1542"></td>
        <td id="LC1542" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L1543" class="blob-num js-line-number" data-line-number="1543"></td>
        <td id="LC1543" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(<span class="pl-k">int</span> sp=<span class="pl-c1">1</span>;sp&lt;=numesp;sp++) output[<span class="pl-c1">18</span>] &lt;&lt; S[sp].<span class="pl-smi">s_name</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; S[sp].<span class="pl-smi">s_Nmass</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; S[sp].<span class="pl-smi">s_Pmass</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; S[sp].<span class="pl-smi">s_LMA</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; S[sp].<span class="pl-smi">s_Vcmax</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; S[sp].<span class="pl-smi">s_Jmax</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; S[sp].<span class="pl-smi">s_Rdark</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; S[sp].<span class="pl-smi">s_LCP</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1544" class="blob-num js-line-number" data-line-number="1544"></td>
        <td id="LC1544" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L1545" class="blob-num js-line-number" data-line-number="1545"></td>
        <td id="LC1545" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1546" class="blob-num js-line-number" data-line-number="1546"></td>
        <td id="LC1546" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1547" class="blob-num js-line-number" data-line-number="1547"></td>
        <td id="LC1547" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>***** Final LAI v.2.3 *****<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1548" class="blob-num js-line-number" data-line-number="1548"></td>
        <td id="LC1548" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(_OUTPUT_fullLAI){</td>
      </tr>
      <tr>
        <td id="L1549" class="blob-num js-line-number" data-line-number="1549"></td>
        <td id="LC1549" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span> (iter==nbiter-<span class="pl-c1">2</span>){</td>
      </tr>
      <tr>
        <td id="L1550" class="blob-num js-line-number" data-line-number="1550"></td>
        <td id="LC1550" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">for</span>(<span class="pl-k">int</span> h=<span class="pl-c1">0</span>;h&lt;(HEIGHT+<span class="pl-c1">1</span>);h++)</td>
      </tr>
      <tr>
        <td id="L1551" class="blob-num js-line-number" data-line-number="1551"></td>
        <td id="LC1551" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">for</span>(<span class="pl-k">int</span> s=<span class="pl-c1">0</span>;s&lt;sites;s++){</td>
      </tr>
      <tr>
        <td id="L1552" class="blob-num js-line-number" data-line-number="1552"></td>
        <td id="LC1552" class="blob-code blob-code-inner js-file-line">                        output[<span class="pl-c1">1</span>] &lt;&lt; s &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; <span class="pl-c1">int</span>(s/cols) &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; <span class="pl-c1">int</span>(s%cols) &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>  &lt;&lt; h &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; LAI3D[h][s+SBORD] &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1553" class="blob-num js-line-number" data-line-number="1553"></td>
        <td id="LC1553" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L1554" class="blob-num js-line-number" data-line-number="1554"></td>
        <td id="LC1554" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L1555" class="blob-num js-line-number" data-line-number="1555"></td>
        <td id="LC1555" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1556" class="blob-num js-line-number" data-line-number="1556"></td>
        <td id="LC1556" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1557" class="blob-num js-line-number" data-line-number="1557"></td>
        <td id="LC1557" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>***** Last 100 years v.2.3 *****<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1558" class="blob-num js-line-number" data-line-number="1558"></td>
        <td id="LC1558" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(_OUTPUT_last100 &amp;&amp; nbiter&gt;<span class="pl-c1">100</span> &amp;&amp; iter &gt; (nbiter-<span class="pl-c1">101</span>))</td>
      </tr>
      <tr>
        <td id="L1559" class="blob-num js-line-number" data-line-number="1559"></td>
        <td id="LC1559" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(<span class="pl-k">int</span> row=<span class="pl-c1">0</span>;row&lt;rows;row++)</td>
      </tr>
      <tr>
        <td id="L1560" class="blob-num js-line-number" data-line-number="1560"></td>
        <td id="LC1560" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">for</span>(<span class="pl-k">int</span> col=<span class="pl-c1">0</span>;col&lt;cols;col++){</td>
      </tr>
      <tr>
        <td id="L1561" class="blob-num js-line-number" data-line-number="1561"></td>
        <td id="LC1561" class="blob-code blob-code-inner js-file-line">                    output[<span class="pl-c1">33</span>] &lt;&lt; iter &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; col+cols*row &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; col &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; row &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_age</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_sp_lab</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_dbh</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_Tree_Height</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_Crown_Radius</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_Crown_Depth</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_leafarea</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_dens</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_GPP</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[col + cols*row].<span class="pl-smi">t_hurt</span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1562" class="blob-num js-line-number" data-line-number="1562"></td>
        <td id="LC1562" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L1563" class="blob-num js-line-number" data-line-number="1563"></td>
        <td id="LC1563" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1564" class="blob-num js-line-number" data-line-number="1564"></td>
        <td id="LC1564" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1565" class="blob-num js-line-number" data-line-number="1565"></td>
        <td id="LC1565" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>***********************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1566" class="blob-num js-line-number" data-line-number="1566"></td>
        <td id="LC1566" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** End of simulation **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1567" class="blob-num js-line-number" data-line-number="1567"></td>
        <td id="LC1567" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>***********************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1568" class="blob-num js-line-number" data-line-number="1568"></td>
        <td id="LC1568" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1569" class="blob-num js-line-number" data-line-number="1569"></td>
        <td id="LC1569" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> durf = duration/<span class="pl-c1">double</span>(CLOCKS_PER_SEC);        <span class="pl-c"><span class="pl-c">/*</span> output of the effective CPU time <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1570" class="blob-num js-line-number" data-line-number="1570"></td>
        <td id="LC1570" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L1571" class="blob-num js-line-number" data-line-number="1571"></td>
        <td id="LC1571" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI_Reduce</span>(&amp;durf,&amp;durf,<span class="pl-c1">1</span>,MPI_FLOAT,MPI_SUM,<span class="pl-c1">0</span>,MPI_COMM_WORLD);</td>
      </tr>
      <tr>
        <td id="L1572" class="blob-num js-line-number" data-line-number="1572"></td>
        <td id="LC1572" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1573" class="blob-num js-line-number" data-line-number="1573"></td>
        <td id="LC1573" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(!mpi_rank) {</td>
      </tr>
      <tr>
        <td id="L1574" class="blob-num js-line-number" data-line-number="1574"></td>
        <td id="LC1574" class="blob-code blob-code-inner js-file-line">        cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1575" class="blob-num js-line-number" data-line-number="1575"></td>
        <td id="LC1575" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L1576" class="blob-num js-line-number" data-line-number="1576"></td>
        <td id="LC1576" class="blob-code blob-code-inner js-file-line">        out2 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>Number of processors : <span class="pl-pds">&quot;</span></span>&lt;&lt; mpi_size &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1577" class="blob-num js-line-number" data-line-number="1577"></td>
        <td id="LC1577" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1578" class="blob-num js-line-number" data-line-number="1578"></td>
        <td id="LC1578" class="blob-code blob-code-inner js-file-line">        out2 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>Average computation time : <span class="pl-pds">&quot;</span></span>&lt;&lt; durf/<span class="pl-c1">float</span>(mpi_size) &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> seconds.<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1579" class="blob-num js-line-number" data-line-number="1579"></td>
        <td id="LC1579" class="blob-code blob-code-inner js-file-line">        out2 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>End of simulation.<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1580" class="blob-num js-line-number" data-line-number="1580"></td>
        <td id="LC1580" class="blob-code blob-code-inner js-file-line">        cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span>Number of processors : <span class="pl-pds">&quot;</span></span>&lt;&lt; mpi_size &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1581" class="blob-num js-line-number" data-line-number="1581"></td>
        <td id="LC1581" class="blob-code blob-code-inner js-file-line">        cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>Average computation time : <span class="pl-pds">&quot;</span></span>&lt;&lt; durf/<span class="pl-c1">float</span>(mpi_size) &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> seconds.<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1582" class="blob-num js-line-number" data-line-number="1582"></td>
        <td id="LC1582" class="blob-code blob-code-inner js-file-line">        cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>End of simulation.<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1583" class="blob-num js-line-number" data-line-number="1583"></td>
        <td id="LC1583" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1584" class="blob-num js-line-number" data-line-number="1584"></td>
        <td id="LC1584" class="blob-code blob-code-inner js-file-line">    out2.<span class="pl-c1">close</span>();</td>
      </tr>
      <tr>
        <td id="L1585" class="blob-num js-line-number" data-line-number="1585"></td>
        <td id="LC1585" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1586" class="blob-num js-line-number" data-line-number="1586"></td>
        <td id="LC1586" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>Free dynamic memory <span class="pl-c">*/</span></span> <span class="pl-c"><span class="pl-c">/*</span> added in oct2013 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1587" class="blob-num js-line-number" data-line-number="1587"></td>
        <td id="LC1587" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">FreeMem</span>();</td>
      </tr>
      <tr>
        <td id="L1588" class="blob-num js-line-number" data-line-number="1588"></td>
        <td id="LC1588" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1589" class="blob-num js-line-number" data-line-number="1589"></td>
        <td id="LC1589" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> easyMPI</td>
      </tr>
      <tr>
        <td id="L1590" class="blob-num js-line-number" data-line-number="1590"></td>
        <td id="LC1590" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI::Finalize</span>();</td>
      </tr>
      <tr>
        <td id="L1591" class="blob-num js-line-number" data-line-number="1591"></td>
        <td id="LC1591" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1592" class="blob-num js-line-number" data-line-number="1592"></td>
        <td id="LC1592" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1593" class="blob-num js-line-number" data-line-number="1593"></td>
        <td id="LC1593" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">exit</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L1594" class="blob-num js-line-number" data-line-number="1594"></td>
        <td id="LC1594" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1595" class="blob-num js-line-number" data-line-number="1595"></td>
        <td id="LC1595" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1596" class="blob-num js-line-number" data-line-number="1596"></td>
        <td id="LC1596" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1597" class="blob-num js-line-number" data-line-number="1597"></td>
        <td id="LC1597" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>###########################################</span></td>
      </tr>
      <tr>
        <td id="L1598" class="blob-num js-line-number" data-line-number="1598"></td>
        <td id="LC1598" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################################</span></td>
      </tr>
      <tr>
        <td id="L1599" class="blob-num js-line-number" data-line-number="1599"></td>
        <td id="LC1599" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> #######  Initialization routines    ########</span></td>
      </tr>
      <tr>
        <td id="L1600" class="blob-num js-line-number" data-line-number="1600"></td>
        <td id="LC1600" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################################</span></td>
      </tr>
      <tr>
        <td id="L1601" class="blob-num js-line-number" data-line-number="1601"></td>
        <td id="LC1601" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ############################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1602" class="blob-num js-line-number" data-line-number="1602"></td>
        <td id="LC1602" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1603" class="blob-num js-line-number" data-line-number="1603"></td>
        <td id="LC1603" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Initialise</span>() {</td>
      </tr>
      <tr>
        <td id="L1604" class="blob-num js-line-number" data-line-number="1604"></td>
        <td id="LC1604" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1605" class="blob-num js-line-number" data-line-number="1605"></td>
        <td id="LC1605" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> ligne;</td>
      </tr>
      <tr>
        <td id="L1606" class="blob-num js-line-number" data-line-number="1606"></td>
        <td id="LC1606" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1607" class="blob-num js-line-number" data-line-number="1607"></td>
        <td id="LC1607" class="blob-code blob-code-inner js-file-line">    fstream <span class="pl-smi">In</span>(inputfile, ios::in);</td>
      </tr>
      <tr>
        <td id="L1608" class="blob-num js-line-number" data-line-number="1608"></td>
        <td id="LC1608" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1609" class="blob-num js-line-number" data-line-number="1609"></td>
        <td id="LC1609" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** Initialization of the simulation parametres **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1610" class="blob-num js-line-number" data-line-number="1610"></td>
        <td id="LC1610" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*************************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1611" class="blob-num js-line-number" data-line-number="1611"></td>
        <td id="LC1611" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1612" class="blob-num js-line-number" data-line-number="1612"></td>
        <td id="LC1612" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (In) {</td>
      </tr>
      <tr>
        <td id="L1613" class="blob-num js-line-number" data-line-number="1613"></td>
        <td id="LC1613" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(ligne=<span class="pl-c1">0</span>;ligne&lt;<span class="pl-c1">4</span>;ligne++) In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1614" class="blob-num js-line-number" data-line-number="1614"></td>
        <td id="LC1614" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1615" class="blob-num js-line-number" data-line-number="1615"></td>
        <td id="LC1615" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>General parameters <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1616" class="blob-num js-line-number" data-line-number="1616"></td>
        <td id="LC1616" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; cols; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1617" class="blob-num js-line-number" data-line-number="1617"></td>
        <td id="LC1617" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; rows; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1618" class="blob-num js-line-number" data-line-number="1618"></td>
        <td id="LC1618" class="blob-code blob-code-inner js-file-line">        sites = rows*cols;</td>
      </tr>
      <tr>
        <td id="L1619" class="blob-num js-line-number" data-line-number="1619"></td>
        <td id="LC1619" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; nbiter; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1620" class="blob-num js-line-number" data-line-number="1620"></td>
        <td id="LC1620" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; iterperyear; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1621" class="blob-num js-line-number" data-line-number="1621"></td>
        <td id="LC1621" class="blob-code blob-code-inner js-file-line">        timestep=<span class="pl-c1">1</span>/<span class="pl-c1">float</span>(iterperyear);</td>
      </tr>
      <tr>
        <td id="L1622" class="blob-num js-line-number" data-line-number="1622"></td>
        <td id="LC1622" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; NV; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1623" class="blob-num js-line-number" data-line-number="1623"></td>
        <td id="LC1623" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; NH; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1624" class="blob-num js-line-number" data-line-number="1624"></td>
        <td id="LC1624" class="blob-code blob-code-inner js-file-line">        LV = <span class="pl-c1">1.0</span>/NV;</td>
      </tr>
      <tr>
        <td id="L1625" class="blob-num js-line-number" data-line-number="1625"></td>
        <td id="LC1625" class="blob-code blob-code-inner js-file-line">        LH = <span class="pl-c1">1.0</span>/NH;</td>
      </tr>
      <tr>
        <td id="L1626" class="blob-num js-line-number" data-line-number="1626"></td>
        <td id="LC1626" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; nbout; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1627" class="blob-num js-line-number" data-line-number="1627"></td>
        <td id="LC1627" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(nbout) freqout = nbiter/nbout;</td>
      </tr>
      <tr>
        <td id="L1628" class="blob-num js-line-number" data-line-number="1628"></td>
        <td id="LC1628" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; numesp; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1629" class="blob-num js-line-number" data-line-number="1629"></td>
        <td id="LC1629" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; p_nonvert; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1630" class="blob-num js-line-number" data-line-number="1630"></td>
        <td id="LC1630" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;=<span class="pl-c1">23</span>; i++) In &gt;&gt; daily_light[i];</td>
      </tr>
      <tr>
        <td id="L1631" class="blob-num js-line-number" data-line-number="1631"></td>
        <td id="LC1631" class="blob-code blob-code-inner js-file-line">        In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1632" class="blob-num js-line-number" data-line-number="1632"></td>
        <td id="LC1632" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;=<span class="pl-c1">23</span>; i++) In &gt;&gt; daily_vpd[i];</td>
      </tr>
      <tr>
        <td id="L1633" class="blob-num js-line-number" data-line-number="1633"></td>
        <td id="LC1633" class="blob-code blob-code-inner js-file-line">        In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1634" class="blob-num js-line-number" data-line-number="1634"></td>
        <td id="LC1634" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;=<span class="pl-c1">23</span>; i++) In &gt;&gt; daily_T[i];</td>
      </tr>
      <tr>
        <td id="L1635" class="blob-num js-line-number" data-line-number="1635"></td>
        <td id="LC1635" class="blob-code blob-code-inner js-file-line">        In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1636" class="blob-num js-line-number" data-line-number="1636"></td>
        <td id="LC1636" class="blob-code blob-code-inner js-file-line">        In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1637" class="blob-num js-line-number" data-line-number="1637"></td>
        <td id="LC1637" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1638" class="blob-num js-line-number" data-line-number="1638"></td>
        <td id="LC1638" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>Characters shared by species <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1639" class="blob-num js-line-number" data-line-number="1639"></td>
        <td id="LC1639" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; klight; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1640" class="blob-num js-line-number" data-line-number="1640"></td>
        <td id="LC1640" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; phi; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1641" class="blob-num js-line-number" data-line-number="1641"></td>
        <td id="LC1641" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; vC; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1642" class="blob-num js-line-number" data-line-number="1642"></td>
        <td id="LC1642" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; DBH0; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1643" class="blob-num js-line-number" data-line-number="1643"></td>
        <td id="LC1643" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; H0; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1644" class="blob-num js-line-number" data-line-number="1644"></td>
        <td id="LC1644" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; ra0; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1645" class="blob-num js-line-number" data-line-number="1645"></td>
        <td id="LC1645" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; ra1; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1646" class="blob-num js-line-number" data-line-number="1646"></td>
        <td id="LC1646" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; de0; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1647" class="blob-num js-line-number" data-line-number="1647"></td>
        <td id="LC1647" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; de1; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1648" class="blob-num js-line-number" data-line-number="1648"></td>
        <td id="LC1648" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; dens; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1649" class="blob-num js-line-number" data-line-number="1649"></td>
        <td id="LC1649" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; fallocwood; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1650" class="blob-num js-line-number" data-line-number="1650"></td>
        <td id="LC1650" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; falloccanopy; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1651" class="blob-num js-line-number" data-line-number="1651"></td>
        <td id="LC1651" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; Cseedrain; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1652" class="blob-num js-line-number" data-line-number="1652"></td>
        <td id="LC1652" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; nbs0; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1653" class="blob-num js-line-number" data-line-number="1653"></td>
        <td id="LC1653" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; m; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1654" class="blob-num js-line-number" data-line-number="1654"></td>
        <td id="LC1654" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; m1; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1655" class="blob-num js-line-number" data-line-number="1655"></td>
        <td id="LC1655" class="blob-code blob-code-inner js-file-line">        In &gt;&gt; Cair; In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1656" class="blob-num js-line-number" data-line-number="1656"></td>
        <td id="LC1656" class="blob-code blob-code-inner js-file-line">        iCair = <span class="pl-c1">1.0</span>/Cair;</td>
      </tr>
      <tr>
        <td id="L1657" class="blob-num js-line-number" data-line-number="1657"></td>
        <td id="LC1657" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1658" class="blob-num js-line-number" data-line-number="1658"></td>
        <td id="LC1658" class="blob-code blob-code-inner js-file-line">        DBH0 *= NH;</td>
      </tr>
      <tr>
        <td id="L1659" class="blob-num js-line-number" data-line-number="1659"></td>
        <td id="LC1659" class="blob-code blob-code-inner js-file-line">        H0 *= NV;</td>
      </tr>
      <tr>
        <td id="L1660" class="blob-num js-line-number" data-line-number="1660"></td>
        <td id="LC1660" class="blob-code blob-code-inner js-file-line">        ra0 *= NH;</td>
      </tr>
      <tr>
        <td id="L1661" class="blob-num js-line-number" data-line-number="1661"></td>
        <td id="LC1661" class="blob-code blob-code-inner js-file-line">        de0 *= NV;</td>
      </tr>
      <tr>
        <td id="L1662" class="blob-num js-line-number" data-line-number="1662"></td>
        <td id="LC1662" class="blob-code blob-code-inner js-file-line">        alpha=<span class="pl-c1">4</span>*phi;</td>
      </tr>
      <tr>
        <td id="L1663" class="blob-num js-line-number" data-line-number="1663"></td>
        <td id="LC1663" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> apparent quantum yield to electron transport in mol e-/mol photons <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1664" class="blob-num js-line-number" data-line-number="1664"></td>
        <td id="LC1664" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> see Mercado et al 2009 , the conversion of the apparent quantum yield in micromolCO2/micromol quantum into micromol e-/micxromol quantum is done by multipliyng by 4, since four electrons are needed to regenerate RuBP.</span></td>
      </tr>
      <tr>
        <td id="L1665" class="blob-num js-line-number" data-line-number="1665"></td>
        <td id="LC1665" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> alpha is fixed at 0.3 mol e-/mol photons in Medlyn et al 2002</span></td>
      </tr>
      <tr>
        <td id="L1666" class="blob-num js-line-number" data-line-number="1666"></td>
        <td id="LC1666" class="blob-code blob-code-inner js-file-line"><span class="pl-c">         but see equ8 and Appendix 1 in Farquahr et al 1980: it seems that alpha should vary with leaf thickness: there is a fraction of incident light which is lost by absorption by other leaf parts than the chloroplast lamellae, and this fraction f may increase with leaf thickness.</span></td>
      </tr>
      <tr>
        <td id="L1667" class="blob-num js-line-number" data-line-number="1667"></td>
        <td id="LC1667" class="blob-code blob-code-inner js-file-line"><span class="pl-c">         With the values of the paper: alpha= 0.5*(1-f)=0.5*(1-0.23)=0.385, but this is a theoretical value and observations often report lower values (see ex discussion in medlyn et al 2005 Tree phsyiology, Lore Veeryckt values, Mercado et al 2009 Table 10, Domingues et al. 2014)<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1668" class="blob-num js-line-number" data-line-number="1668"></td>
        <td id="LC1668" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1669" class="blob-num js-line-number" data-line-number="1669"></td>
        <td id="LC1669" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1670" class="blob-num js-line-number" data-line-number="1670"></td>
        <td id="LC1670" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L1671" class="blob-num js-line-number" data-line-number="1671"></td>
        <td id="LC1671" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>ERROR with the input file of parameters<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1672" class="blob-num js-line-number" data-line-number="1672"></td>
        <td id="LC1672" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1673" class="blob-num js-line-number" data-line-number="1673"></td>
        <td id="LC1673" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1674" class="blob-num js-line-number" data-line-number="1674"></td>
        <td id="LC1674" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1675" class="blob-num js-line-number" data-line-number="1675"></td>
        <td id="LC1675" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** Information in file info **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1676" class="blob-num js-line-number" data-line-number="1676"></td>
        <td id="LC1676" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*********************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1677" class="blob-num js-line-number" data-line-number="1677"></td>
        <td id="LC1677" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1678" class="blob-num js-line-number" data-line-number="1678"></td>
        <td id="LC1678" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(!mpi_rank){</td>
      </tr>
      <tr>
        <td id="L1679" class="blob-num js-line-number" data-line-number="1679"></td>
        <td id="LC1679" class="blob-code blob-code-inner js-file-line">        out2 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span>TROLL simulator<span class="pl-cce">\n\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1680" class="blob-num js-line-number" data-line-number="1680"></td>
        <td id="LC1680" class="blob-code blob-code-inner js-file-line">        out2 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span>   2D discrete network: horizontal step = <span class="pl-pds">&quot;</span></span> &lt;&lt; LH</td>
      </tr>
      <tr>
        <td id="L1681" class="blob-num js-line-number" data-line-number="1681"></td>
        <td id="LC1681" class="blob-code blob-code-inner js-file-line">        &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> m, one tree per <span class="pl-pds">&quot;</span></span>&lt;&lt; LH*LH &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> m^2 <span class="pl-cce">\n\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1682" class="blob-num js-line-number" data-line-number="1682"></td>
        <td id="LC1682" class="blob-code blob-code-inner js-file-line">        out2 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span>   Tree : (t_dbh,t_Tree_Height,t_Crown_Radius,t_Crown_Depth) <span class="pl-cce">\n\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1683" class="blob-num js-line-number" data-line-number="1683"></td>
        <td id="LC1683" class="blob-code blob-code-inner js-file-line">        out2 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span>            + one species label <span class="pl-cce">\n\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1684" class="blob-num js-line-number" data-line-number="1684"></td>
        <td id="LC1684" class="blob-code blob-code-inner js-file-line">        out2 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> Number of sites      : <span class="pl-pds">&quot;</span></span>&lt;&lt;rows&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>x<span class="pl-pds">&quot;</span></span>&lt;&lt;cols&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1685" class="blob-num js-line-number" data-line-number="1685"></td>
        <td id="LC1685" class="blob-code blob-code-inner js-file-line">        out2 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> Number of iterations : <span class="pl-pds">&quot;</span></span>&lt;&lt;nbiter&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1686" class="blob-num js-line-number" data-line-number="1686"></td>
        <td id="LC1686" class="blob-code blob-code-inner js-file-line">        out2 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> Duration of timestep : <span class="pl-pds">&quot;</span></span>&lt;&lt;timestep&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span> years<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1687" class="blob-num js-line-number" data-line-number="1687"></td>
        <td id="LC1687" class="blob-code blob-code-inner js-file-line">        out2 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> Number of Species    : <span class="pl-pds">&quot;</span></span>&lt;&lt;numesp &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1688" class="blob-num js-line-number" data-line-number="1688"></td>
        <td id="LC1688" class="blob-code blob-code-inner js-file-line">        out2.<span class="pl-c1">flush</span>();</td>
      </tr>
      <tr>
        <td id="L1689" class="blob-num js-line-number" data-line-number="1689"></td>
        <td id="LC1689" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1690" class="blob-num js-line-number" data-line-number="1690"></td>
        <td id="LC1690" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1691" class="blob-num js-line-number" data-line-number="1691"></td>
        <td id="LC1691" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1692" class="blob-num js-line-number" data-line-number="1692"></td>
        <td id="LC1692" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** Initialization of trees **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1693" class="blob-num js-line-number" data-line-number="1693"></td>
        <td id="LC1693" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*****************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1694" class="blob-num js-line-number" data-line-number="1694"></td>
        <td id="LC1694" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1695" class="blob-num js-line-number" data-line-number="1695"></td>
        <td id="LC1695" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(T=<span class="pl-k">new</span> Tree[sites])) {</td>
      </tr>
      <tr>
        <td id="L1696" class="blob-num js-line-number" data-line-number="1696"></td>
        <td id="LC1696" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1697" class="blob-num js-line-number" data-line-number="1697"></td>
        <td id="LC1697" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc Tree<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1698" class="blob-num js-line-number" data-line-number="1698"></td>
        <td id="LC1698" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1699" class="blob-num js-line-number" data-line-number="1699"></td>
        <td id="LC1699" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1700" class="blob-num js-line-number" data-line-number="1700"></td>
        <td id="LC1700" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_NDD){</td>
      </tr>
      <tr>
        <td id="L1701" class="blob-num js-line-number" data-line-number="1701"></td>
        <td id="LC1701" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(<span class="pl-k">int</span> site=<span class="pl-c1">0</span>;site&lt;sites;site++) {</td>
      </tr>
      <tr>
        <td id="L1702" class="blob-num js-line-number" data-line-number="1702"></td>
        <td id="LC1702" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(T[site].<span class="pl-smi">t_NDDfield</span> = <span class="pl-k">new</span> <span class="pl-k">float</span>[numesp+<span class="pl-c1">1</span>])) cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1703" class="blob-num js-line-number" data-line-number="1703"></td>
        <td id="LC1703" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(<span class="pl-k">int</span> ii=<span class="pl-c1">0</span>;ii&lt;(numesp+<span class="pl-c1">1</span>);ii++) T[site].<span class="pl-smi">t_NDDfield</span>[ii]=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1704" class="blob-num js-line-number" data-line-number="1704"></td>
        <td id="LC1704" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1705" class="blob-num js-line-number" data-line-number="1705"></td>
        <td id="LC1705" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1706" class="blob-num js-line-number" data-line-number="1706"></td>
        <td id="LC1706" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1707" class="blob-num js-line-number" data-line-number="1707"></td>
        <td id="LC1707" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1708" class="blob-num js-line-number" data-line-number="1708"></td>
        <td id="LC1708" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** Initialization of species **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1709" class="blob-num js-line-number" data-line-number="1709"></td>
        <td id="LC1709" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*******************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1710" class="blob-num js-line-number" data-line-number="1710"></td>
        <td id="LC1710" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1711" class="blob-num js-line-number" data-line-number="1711"></td>
        <td id="LC1711" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> sp;</td>
      </tr>
      <tr>
        <td id="L1712" class="blob-num js-line-number" data-line-number="1712"></td>
        <td id="LC1712" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(S=<span class="pl-k">new</span> Species[numesp+<span class="pl-c1">1</span>])) {</td>
      </tr>
      <tr>
        <td id="L1713" class="blob-num js-line-number" data-line-number="1713"></td>
        <td id="LC1713" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1714" class="blob-num js-line-number" data-line-number="1714"></td>
        <td id="LC1714" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc Species<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1715" class="blob-num js-line-number" data-line-number="1715"></td>
        <td id="LC1715" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1716" class="blob-num js-line-number" data-line-number="1716"></td>
        <td id="LC1716" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1717" class="blob-num js-line-number" data-line-number="1717"></td>
        <td id="LC1717" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(ligne=<span class="pl-c1">0</span>;ligne&lt;<span class="pl-c1">3</span>;ligne++) In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);                           <span class="pl-c"><span class="pl-c">/*</span> Read species parameters (ifstream In) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1718" class="blob-num js-line-number" data-line-number="1718"></td>
        <td id="LC1718" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(sp=<span class="pl-c1">1</span>;sp&lt;=numesp;sp++) {</td>
      </tr>
      <tr>
        <td id="L1719" class="blob-num js-line-number" data-line-number="1719"></td>
        <td id="LC1719" class="blob-code blob-code-inner js-file-line">        S[sp].<span class="pl-c1">Init</span>(sp,In);</td>
      </tr>
      <tr>
        <td id="L1720" class="blob-num js-line-number" data-line-number="1720"></td>
        <td id="LC1720" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1721" class="blob-num js-line-number" data-line-number="1721"></td>
        <td id="LC1721" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1722" class="blob-num js-line-number" data-line-number="1722"></td>
        <td id="LC1722" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** Initialization of environmental variables **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1723" class="blob-num js-line-number" data-line-number="1723"></td>
        <td id="LC1723" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>***********************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1724" class="blob-num js-line-number" data-line-number="1724"></td>
        <td id="LC1724" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1725" class="blob-num js-line-number" data-line-number="1725"></td>
        <td id="LC1725" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1726" class="blob-num js-line-number" data-line-number="1726"></td>
        <td id="LC1726" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1727" class="blob-num js-line-number" data-line-number="1727"></td>
        <td id="LC1727" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1728" class="blob-num js-line-number" data-line-number="1728"></td>
        <td id="LC1728" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1729" class="blob-num js-line-number" data-line-number="1729"></td>
        <td id="LC1729" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(Temperature=<span class="pl-k">new</span> <span class="pl-k">float</span>[iterperyear])) {                                <span class="pl-c"><span class="pl-c">//</span> rk, the current structure of code suppose that environment is periodic (a period = a year), if one want to make climate vary, with interannual variation and climate change along the simulation, one just need to provide the full climate input of the whole simulation (ie number of columns=iter and not iterperyear) and change iterperyear by nbiter here.</span></td>
      </tr>
      <tr>
        <td id="L1730" class="blob-num js-line-number" data-line-number="1730"></td>
        <td id="LC1730" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1731" class="blob-num js-line-number" data-line-number="1731"></td>
        <td id="LC1731" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc Temperature<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1732" class="blob-num js-line-number" data-line-number="1732"></td>
        <td id="LC1732" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1733" class="blob-num js-line-number" data-line-number="1733"></td>
        <td id="LC1733" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1734" class="blob-num js-line-number" data-line-number="1734"></td>
        <td id="LC1734" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;iterperyear; i++) In &gt;&gt; Temperature[i];</td>
      </tr>
      <tr>
        <td id="L1735" class="blob-num js-line-number" data-line-number="1735"></td>
        <td id="LC1735" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1736" class="blob-num js-line-number" data-line-number="1736"></td>
        <td id="LC1736" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1737" class="blob-num js-line-number" data-line-number="1737"></td>
        <td id="LC1737" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int i=0; i&lt;iterperyear; i++) cout&lt;&lt; &quot;Temperature&quot; &lt;&lt; i &lt;&lt; &quot;\t&quot;  &lt;&lt; Temperature[i] &lt;&lt;  &quot;\t&quot;;</span></td>
      </tr>
      <tr>
        <td id="L1738" class="blob-num js-line-number" data-line-number="1738"></td>
        <td id="LC1738" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1739" class="blob-num js-line-number" data-line-number="1739"></td>
        <td id="LC1739" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1740" class="blob-num js-line-number" data-line-number="1740"></td>
        <td id="LC1740" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(DailyMaxTemperature=<span class="pl-k">new</span> <span class="pl-k">float</span>[iterperyear])) {</td>
      </tr>
      <tr>
        <td id="L1741" class="blob-num js-line-number" data-line-number="1741"></td>
        <td id="LC1741" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1742" class="blob-num js-line-number" data-line-number="1742"></td>
        <td id="LC1742" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc DailyMaxTemperature<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1743" class="blob-num js-line-number" data-line-number="1743"></td>
        <td id="LC1743" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1744" class="blob-num js-line-number" data-line-number="1744"></td>
        <td id="LC1744" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;iterperyear; i++) In &gt;&gt; DailyMaxTemperature[i];</td>
      </tr>
      <tr>
        <td id="L1745" class="blob-num js-line-number" data-line-number="1745"></td>
        <td id="LC1745" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1746" class="blob-num js-line-number" data-line-number="1746"></td>
        <td id="LC1746" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1747" class="blob-num js-line-number" data-line-number="1747"></td>
        <td id="LC1747" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int i=0; i&lt;iterperyear; i++) cout&lt;&lt; &quot;DailyMaxTemperature&quot; &lt;&lt; i &lt;&lt; &quot;\t&quot;  &lt;&lt; DailyMaxTemperature[i] &lt;&lt; &quot;\t&quot;;</span></td>
      </tr>
      <tr>
        <td id="L1748" class="blob-num js-line-number" data-line-number="1748"></td>
        <td id="LC1748" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1749" class="blob-num js-line-number" data-line-number="1749"></td>
        <td id="LC1749" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1750" class="blob-num js-line-number" data-line-number="1750"></td>
        <td id="LC1750" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(NightTemperature=<span class="pl-k">new</span> <span class="pl-k">float</span>[iterperyear])) {</td>
      </tr>
      <tr>
        <td id="L1751" class="blob-num js-line-number" data-line-number="1751"></td>
        <td id="LC1751" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1752" class="blob-num js-line-number" data-line-number="1752"></td>
        <td id="LC1752" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc NightTemperature<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1753" class="blob-num js-line-number" data-line-number="1753"></td>
        <td id="LC1753" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1754" class="blob-num js-line-number" data-line-number="1754"></td>
        <td id="LC1754" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;iterperyear; i++) In &gt;&gt; NightTemperature[i];</td>
      </tr>
      <tr>
        <td id="L1755" class="blob-num js-line-number" data-line-number="1755"></td>
        <td id="LC1755" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1756" class="blob-num js-line-number" data-line-number="1756"></td>
        <td id="LC1756" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1757" class="blob-num js-line-number" data-line-number="1757"></td>
        <td id="LC1757" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int i=0; i&lt;iterperyear; i++) cout&lt;&lt; &quot;NightTemperature&quot; &lt;&lt; i &lt;&lt; &quot;\t&quot;  &lt;&lt; NightTemperature[i] &lt;&lt; &quot;\t&quot;;</span></td>
      </tr>
      <tr>
        <td id="L1758" class="blob-num js-line-number" data-line-number="1758"></td>
        <td id="LC1758" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1759" class="blob-num js-line-number" data-line-number="1759"></td>
        <td id="LC1759" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1760" class="blob-num js-line-number" data-line-number="1760"></td>
        <td id="LC1760" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(Rainfall=<span class="pl-k">new</span> <span class="pl-k">float</span>[iterperyear])) {</td>
      </tr>
      <tr>
        <td id="L1761" class="blob-num js-line-number" data-line-number="1761"></td>
        <td id="LC1761" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1762" class="blob-num js-line-number" data-line-number="1762"></td>
        <td id="LC1762" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc Rainfall<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1763" class="blob-num js-line-number" data-line-number="1763"></td>
        <td id="LC1763" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1764" class="blob-num js-line-number" data-line-number="1764"></td>
        <td id="LC1764" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;iterperyear; i++) In &gt;&gt; Rainfall[i];</td>
      </tr>
      <tr>
        <td id="L1765" class="blob-num js-line-number" data-line-number="1765"></td>
        <td id="LC1765" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1766" class="blob-num js-line-number" data-line-number="1766"></td>
        <td id="LC1766" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1767" class="blob-num js-line-number" data-line-number="1767"></td>
        <td id="LC1767" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int i=0; i&lt;iterperyear; i++) cout&lt;&lt; &quot;Rainfall&quot; &lt;&lt; i &lt;&lt; &quot;\t&quot;  &lt;&lt; Rainfall[i] &lt;&lt; &quot;\t&quot;;</span></td>
      </tr>
      <tr>
        <td id="L1768" class="blob-num js-line-number" data-line-number="1768"></td>
        <td id="LC1768" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1769" class="blob-num js-line-number" data-line-number="1769"></td>
        <td id="LC1769" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1770" class="blob-num js-line-number" data-line-number="1770"></td>
        <td id="LC1770" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(WindSpeed=<span class="pl-k">new</span> <span class="pl-k">float</span>[iterperyear])) {</td>
      </tr>
      <tr>
        <td id="L1771" class="blob-num js-line-number" data-line-number="1771"></td>
        <td id="LC1771" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1772" class="blob-num js-line-number" data-line-number="1772"></td>
        <td id="LC1772" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc WindSpeed<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1773" class="blob-num js-line-number" data-line-number="1773"></td>
        <td id="LC1773" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1774" class="blob-num js-line-number" data-line-number="1774"></td>
        <td id="LC1774" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;iterperyear; i++) In &gt;&gt; WindSpeed[i];</td>
      </tr>
      <tr>
        <td id="L1775" class="blob-num js-line-number" data-line-number="1775"></td>
        <td id="LC1775" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1776" class="blob-num js-line-number" data-line-number="1776"></td>
        <td id="LC1776" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1777" class="blob-num js-line-number" data-line-number="1777"></td>
        <td id="LC1777" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int i=0; i&lt;iterperyear; i++) cout&lt;&lt; &quot;WindSpeed&quot; &lt;&lt; i &lt;&lt; &quot;\t&quot;  &lt;&lt; WindSpeed[i] &lt;&lt; &quot;\t&quot;;</span></td>
      </tr>
      <tr>
        <td id="L1778" class="blob-num js-line-number" data-line-number="1778"></td>
        <td id="LC1778" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1779" class="blob-num js-line-number" data-line-number="1779"></td>
        <td id="LC1779" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1780" class="blob-num js-line-number" data-line-number="1780"></td>
        <td id="LC1780" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(MaxIrradiance=<span class="pl-k">new</span> <span class="pl-k">float</span>[iterperyear])) {</td>
      </tr>
      <tr>
        <td id="L1781" class="blob-num js-line-number" data-line-number="1781"></td>
        <td id="LC1781" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1782" class="blob-num js-line-number" data-line-number="1782"></td>
        <td id="LC1782" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc Irradiance<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1783" class="blob-num js-line-number" data-line-number="1783"></td>
        <td id="LC1783" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1784" class="blob-num js-line-number" data-line-number="1784"></td>
        <td id="LC1784" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;iterperyear; i++) In &gt;&gt; MaxIrradiance[i];</td>
      </tr>
      <tr>
        <td id="L1785" class="blob-num js-line-number" data-line-number="1785"></td>
        <td id="LC1785" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1786" class="blob-num js-line-number" data-line-number="1786"></td>
        <td id="LC1786" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1787" class="blob-num js-line-number" data-line-number="1787"></td>
        <td id="LC1787" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int i=0; i&lt;iterperyear; i++) cout&lt;&lt; &quot;MaxIrradiance&quot; &lt;&lt; i &lt;&lt; &quot;\t&quot;  &lt;&lt; MaxIrradiance[i] &lt;&lt; &quot;\t&quot;;</span></td>
      </tr>
      <tr>
        <td id="L1788" class="blob-num js-line-number" data-line-number="1788"></td>
        <td id="LC1788" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1789" class="blob-num js-line-number" data-line-number="1789"></td>
        <td id="LC1789" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1790" class="blob-num js-line-number" data-line-number="1790"></td>
        <td id="LC1790" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(MeanIrradiance=<span class="pl-k">new</span> <span class="pl-k">float</span>[iterperyear])) {</td>
      </tr>
      <tr>
        <td id="L1791" class="blob-num js-line-number" data-line-number="1791"></td>
        <td id="LC1791" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1792" class="blob-num js-line-number" data-line-number="1792"></td>
        <td id="LC1792" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc Irradiance<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1793" class="blob-num js-line-number" data-line-number="1793"></td>
        <td id="LC1793" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1794" class="blob-num js-line-number" data-line-number="1794"></td>
        <td id="LC1794" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;iterperyear; i++) In &gt;&gt; MeanIrradiance[i];</td>
      </tr>
      <tr>
        <td id="L1795" class="blob-num js-line-number" data-line-number="1795"></td>
        <td id="LC1795" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1796" class="blob-num js-line-number" data-line-number="1796"></td>
        <td id="LC1796" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1797" class="blob-num js-line-number" data-line-number="1797"></td>
        <td id="LC1797" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int i=0; i&lt;iterperyear; i++) cout&lt;&lt; &quot;MeanIrradiance&quot; &lt;&lt; i &lt;&lt; &quot;\t&quot;  &lt;&lt; MeanIrradiance[i] &lt;&lt; &quot;\t&quot;;</span></td>
      </tr>
      <tr>
        <td id="L1798" class="blob-num js-line-number" data-line-number="1798"></td>
        <td id="LC1798" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1799" class="blob-num js-line-number" data-line-number="1799"></td>
        <td id="LC1799" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1800" class="blob-num js-line-number" data-line-number="1800"></td>
        <td id="LC1800" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(SaturatedVapourPressure=<span class="pl-k">new</span> <span class="pl-k">float</span>[iterperyear])) {</td>
      </tr>
      <tr>
        <td id="L1801" class="blob-num js-line-number" data-line-number="1801"></td>
        <td id="LC1801" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1802" class="blob-num js-line-number" data-line-number="1802"></td>
        <td id="LC1802" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc SaturatedVapourPressure<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1803" class="blob-num js-line-number" data-line-number="1803"></td>
        <td id="LC1803" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1804" class="blob-num js-line-number" data-line-number="1804"></td>
        <td id="LC1804" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;iterperyear; i++) In &gt;&gt; SaturatedVapourPressure[i];</td>
      </tr>
      <tr>
        <td id="L1805" class="blob-num js-line-number" data-line-number="1805"></td>
        <td id="LC1805" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1806" class="blob-num js-line-number" data-line-number="1806"></td>
        <td id="LC1806" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1807" class="blob-num js-line-number" data-line-number="1807"></td>
        <td id="LC1807" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int i=0; i&lt;iterperyear; i++) cout&lt;&lt; &quot;SaturatedVapourPressure&quot; &lt;&lt; i &lt;&lt; &quot;\t&quot;  &lt;&lt; SaturatedVapourPressure[i] &lt;&lt; &quot;\t&quot;;</span></td>
      </tr>
      <tr>
        <td id="L1808" class="blob-num js-line-number" data-line-number="1808"></td>
        <td id="LC1808" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1809" class="blob-num js-line-number" data-line-number="1809"></td>
        <td id="LC1809" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1810" class="blob-num js-line-number" data-line-number="1810"></td>
        <td id="LC1810" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(VapourPressure=<span class="pl-k">new</span> <span class="pl-k">float</span>[iterperyear])) {</td>
      </tr>
      <tr>
        <td id="L1811" class="blob-num js-line-number" data-line-number="1811"></td>
        <td id="LC1811" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1812" class="blob-num js-line-number" data-line-number="1812"></td>
        <td id="LC1812" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc VapourPressure<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1813" class="blob-num js-line-number" data-line-number="1813"></td>
        <td id="LC1813" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1814" class="blob-num js-line-number" data-line-number="1814"></td>
        <td id="LC1814" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;iterperyear; i++) In &gt;&gt; VapourPressure[i];</td>
      </tr>
      <tr>
        <td id="L1815" class="blob-num js-line-number" data-line-number="1815"></td>
        <td id="LC1815" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1816" class="blob-num js-line-number" data-line-number="1816"></td>
        <td id="LC1816" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1817" class="blob-num js-line-number" data-line-number="1817"></td>
        <td id="LC1817" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int i=0; i&lt;iterperyear; i++) cout&lt;&lt; &quot;VapourPressure&quot; &lt;&lt; i &lt;&lt; &quot;\t&quot;  &lt;&lt; VapourPressure[i] &lt;&lt; &quot;\t&quot;;</span></td>
      </tr>
      <tr>
        <td id="L1818" class="blob-num js-line-number" data-line-number="1818"></td>
        <td id="LC1818" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1819" class="blob-num js-line-number" data-line-number="1819"></td>
        <td id="LC1819" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1820" class="blob-num js-line-number" data-line-number="1820"></td>
        <td id="LC1820" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(VapourPressureDeficit=<span class="pl-k">new</span> <span class="pl-k">float</span>[iterperyear])) {</td>
      </tr>
      <tr>
        <td id="L1821" class="blob-num js-line-number" data-line-number="1821"></td>
        <td id="LC1821" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1822" class="blob-num js-line-number" data-line-number="1822"></td>
        <td id="LC1822" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc VapourPressureDeficit<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1823" class="blob-num js-line-number" data-line-number="1823"></td>
        <td id="LC1823" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1824" class="blob-num js-line-number" data-line-number="1824"></td>
        <td id="LC1824" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;iterperyear; i++) In &gt;&gt; VapourPressureDeficit[i];</td>
      </tr>
      <tr>
        <td id="L1825" class="blob-num js-line-number" data-line-number="1825"></td>
        <td id="LC1825" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1826" class="blob-num js-line-number" data-line-number="1826"></td>
        <td id="LC1826" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1827" class="blob-num js-line-number" data-line-number="1827"></td>
        <td id="LC1827" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int i=0; i&lt;iterperyear; i++) cout&lt;&lt; &quot;VapourPressureDeficit&quot; &lt;&lt; i &lt;&lt; &quot;\t&quot;  &lt;&lt; VapourPressureDeficit[i] &lt;&lt; &quot;\t&quot;;</span></td>
      </tr>
      <tr>
        <td id="L1828" class="blob-num js-line-number" data-line-number="1828"></td>
        <td id="LC1828" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1829" class="blob-num js-line-number" data-line-number="1829"></td>
        <td id="LC1829" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1830" class="blob-num js-line-number" data-line-number="1830"></td>
        <td id="LC1830" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(DailyVapourPressureDeficit=<span class="pl-k">new</span> <span class="pl-k">float</span>[iterperyear])) {</td>
      </tr>
      <tr>
        <td id="L1831" class="blob-num js-line-number" data-line-number="1831"></td>
        <td id="LC1831" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1832" class="blob-num js-line-number" data-line-number="1832"></td>
        <td id="LC1832" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc DailyVapourPressureDeficit<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1833" class="blob-num js-line-number" data-line-number="1833"></td>
        <td id="LC1833" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1834" class="blob-num js-line-number" data-line-number="1834"></td>
        <td id="LC1834" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;iterperyear; i++) In &gt;&gt; DailyVapourPressureDeficit[i];</td>
      </tr>
      <tr>
        <td id="L1835" class="blob-num js-line-number" data-line-number="1835"></td>
        <td id="LC1835" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1836" class="blob-num js-line-number" data-line-number="1836"></td>
        <td id="LC1836" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1837" class="blob-num js-line-number" data-line-number="1837"></td>
        <td id="LC1837" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int i=0; i&lt;iterperyear; i++) cout&lt;&lt; &quot;DailyVapourPressureDeficit&quot; &lt;&lt; i &lt;&lt; &quot;\t&quot;  &lt;&lt; DailyVapourPressureDeficit[i] &lt;&lt; &quot;\t&quot;;</span></td>
      </tr>
      <tr>
        <td id="L1838" class="blob-num js-line-number" data-line-number="1838"></td>
        <td id="LC1838" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1839" class="blob-num js-line-number" data-line-number="1839"></td>
        <td id="LC1839" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1840" class="blob-num js-line-number" data-line-number="1840"></td>
        <td id="LC1840" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(<span class="pl-c1">NULL</span>==(DailyMaxVapourPressureDeficit=<span class="pl-k">new</span> <span class="pl-k">float</span>[iterperyear])) {</td>
      </tr>
      <tr>
        <td id="L1841" class="blob-num js-line-number" data-line-number="1841"></td>
        <td id="LC1841" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L1842" class="blob-num js-line-number" data-line-number="1842"></td>
        <td id="LC1842" class="blob-code blob-code-inner js-file-line">        cout&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc DailyMaxVapourPressureDeficit<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1843" class="blob-num js-line-number" data-line-number="1843"></td>
        <td id="LC1843" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1844" class="blob-num js-line-number" data-line-number="1844"></td>
        <td id="LC1844" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i=<span class="pl-c1">0</span>; i&lt;iterperyear; i++) In &gt;&gt; DailyMaxVapourPressureDeficit[i];</td>
      </tr>
      <tr>
        <td id="L1845" class="blob-num js-line-number" data-line-number="1845"></td>
        <td id="LC1845" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">128</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1846" class="blob-num js-line-number" data-line-number="1846"></td>
        <td id="LC1846" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1847" class="blob-num js-line-number" data-line-number="1847"></td>
        <td id="LC1847" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int i=0; i&lt;iterperyear; i++) cout&lt;&lt; &quot;DailyMaxVapourPressureDeficit&quot; &lt;&lt; i &lt;&lt; &quot;\t&quot;  &lt;&lt; DailyMaxVapourPressureDeficit[i] &lt;&lt; &quot;\t&quot;;</span></td>
      </tr>
      <tr>
        <td id="L1848" class="blob-num js-line-number" data-line-number="1848"></td>
        <td id="LC1848" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>cout&lt;&lt;endl;</span></td>
      </tr>
      <tr>
        <td id="L1849" class="blob-num js-line-number" data-line-number="1849"></td>
        <td id="LC1849" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1850" class="blob-num js-line-number" data-line-number="1850"></td>
        <td id="LC1850" class="blob-code blob-code-inner js-file-line">    temp=Temperature[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1851" class="blob-num js-line-number" data-line-number="1851"></td>
        <td id="LC1851" class="blob-code blob-code-inner js-file-line">    tmax=DailyMaxTemperature[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1852" class="blob-num js-line-number" data-line-number="1852"></td>
        <td id="LC1852" class="blob-code blob-code-inner js-file-line">    tnight=NightTemperature[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1853" class="blob-num js-line-number" data-line-number="1853"></td>
        <td id="LC1853" class="blob-code blob-code-inner js-file-line">    precip=Rainfall[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1854" class="blob-num js-line-number" data-line-number="1854"></td>
        <td id="LC1854" class="blob-code blob-code-inner js-file-line">    WS=WindSpeed[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1855" class="blob-num js-line-number" data-line-number="1855"></td>
        <td id="LC1855" class="blob-code blob-code-inner js-file-line">    Wmax=MaxIrradiance[iter%iterperyear]*<span class="pl-c1">1.678</span>;       <span class="pl-c"><span class="pl-c">//</span> 1.678 is to convert irradiance from W/m2 to micromol of PAR /s /m2, the unit used in the FvCB model of photosynthesis</span></td>
      </tr>
      <tr>
        <td id="L1856" class="blob-num js-line-number" data-line-number="1856"></td>
        <td id="LC1856" class="blob-code blob-code-inner js-file-line">    Wmean=MeanIrradiance[iter%iterperyear];            <span class="pl-c"><span class="pl-c">//</span> still in W/m2</span></td>
      </tr>
      <tr>
        <td id="L1857" class="blob-num js-line-number" data-line-number="1857"></td>
        <td id="LC1857" class="blob-code blob-code-inner js-file-line">    e_s=SaturatedVapourPressure[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1858" class="blob-num js-line-number" data-line-number="1858"></td>
        <td id="LC1858" class="blob-code blob-code-inner js-file-line">    e_a=VapourPressure[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1859" class="blob-num js-line-number" data-line-number="1859"></td>
        <td id="LC1859" class="blob-code blob-code-inner js-file-line">    VPDbasic=VapourPressureDeficit[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1860" class="blob-num js-line-number" data-line-number="1860"></td>
        <td id="LC1860" class="blob-code blob-code-inner js-file-line">    VPDday=DailyVapourPressureDeficit[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1861" class="blob-num js-line-number" data-line-number="1861"></td>
        <td id="LC1861" class="blob-code blob-code-inner js-file-line">    VPDmax=DailyMaxVapourPressureDeficit[iter%iterperyear];</td>
      </tr>
      <tr>
        <td id="L1862" class="blob-num js-line-number" data-line-number="1862"></td>
        <td id="LC1862" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1863" class="blob-num js-line-number" data-line-number="1863"></td>
        <td id="LC1863" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">close</span>();</td>
      </tr>
      <tr>
        <td id="L1864" class="blob-num js-line-number" data-line-number="1864"></td>
        <td id="LC1864" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Close ifstream In <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1865" class="blob-num js-line-number" data-line-number="1865"></td>
        <td id="LC1865" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1866" class="blob-num js-line-number" data-line-number="1866"></td>
        <td id="LC1866" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">open</span>(inputfile, ios::in);</td>
      </tr>
      <tr>
        <td id="L1867" class="blob-num js-line-number" data-line-number="1867"></td>
        <td id="LC1867" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(!mpi_rank) {</td>
      </tr>
      <tr>
        <td id="L1868" class="blob-num js-line-number" data-line-number="1868"></td>
        <td id="LC1868" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">do</span>{</td>
      </tr>
      <tr>
        <td id="L1869" class="blob-num js-line-number" data-line-number="1869"></td>
        <td id="LC1869" class="blob-code blob-code-inner js-file-line">            In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">256</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1870" class="blob-num js-line-number" data-line-number="1870"></td>
        <td id="LC1870" class="blob-code blob-code-inner js-file-line">            out &lt;&lt; buffer &lt;&lt;endl;</td>
      </tr>
      <tr>
        <td id="L1871" class="blob-num js-line-number" data-line-number="1871"></td>
        <td id="LC1871" class="blob-code blob-code-inner js-file-line">        }<span class="pl-k">while</span> (!In.<span class="pl-c1">eof</span>()) ;</td>
      </tr>
      <tr>
        <td id="L1872" class="blob-num js-line-number" data-line-number="1872"></td>
        <td id="LC1872" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1873" class="blob-num js-line-number" data-line-number="1873"></td>
        <td id="LC1873" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1874" class="blob-num js-line-number" data-line-number="1874"></td>
        <td id="LC1874" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">close</span>();</td>
      </tr>
      <tr>
        <td id="L1875" class="blob-num js-line-number" data-line-number="1875"></td>
        <td id="LC1875" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Close ifstream In <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1876" class="blob-num js-line-number" data-line-number="1876"></td>
        <td id="LC1876" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1877" class="blob-num js-line-number" data-line-number="1877"></td>
        <td id="LC1877" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1878" class="blob-num js-line-number" data-line-number="1878"></td>
        <td id="LC1878" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1879" class="blob-num js-line-number" data-line-number="1879"></td>
        <td id="LC1879" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** Initialization of output streams **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1880" class="blob-num js-line-number" data-line-number="1880"></td>
        <td id="LC1880" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>**************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1881" class="blob-num js-line-number" data-line-number="1881"></td>
        <td id="LC1881" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1882" class="blob-num js-line-number" data-line-number="1882"></td>
        <td id="LC1882" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">char</span> nnn[<span class="pl-c1">100</span>];</td>
      </tr>
      <tr>
        <td id="L1883" class="blob-num js-line-number" data-line-number="1883"></td>
        <td id="LC1883" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(!mpi_rank) {</td>
      </tr>
      <tr>
        <td id="L1884" class="blob-num js-line-number" data-line-number="1884"></td>
        <td id="LC1884" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1885" class="blob-num js-line-number" data-line-number="1885"></td>
        <td id="LC1885" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(_OUTPUT_reduced){</td>
      </tr>
      <tr>
        <td id="L1886" class="blob-num js-line-number" data-line-number="1886"></td>
        <td id="LC1886" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_LAI3D.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1887" class="blob-num js-line-number" data-line-number="1887"></td>
        <td id="LC1887" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">1</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1888" class="blob-num js-line-number" data-line-number="1888"></td>
        <td id="LC1888" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_outputs.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1889" class="blob-num js-line-number" data-line-number="1889"></td>
        <td id="LC1889" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">36</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1890" class="blob-num js-line-number" data-line-number="1890"></td>
        <td id="LC1890" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1891" class="blob-num js-line-number" data-line-number="1891"></td>
        <td id="LC1891" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L1892" class="blob-num js-line-number" data-line-number="1892"></td>
        <td id="LC1892" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_abund.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1893" class="blob-num js-line-number" data-line-number="1893"></td>
        <td id="LC1893" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">0</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1894" class="blob-num js-line-number" data-line-number="1894"></td>
        <td id="LC1894" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span> (!output[<span class="pl-c1">0</span>]) {</td>
      </tr>
      <tr>
        <td id="L1895" class="blob-num js-line-number" data-line-number="1895"></td>
        <td id="LC1895" class="blob-code blob-code-inner js-file-line">                cout&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>ERROR with abund file<span class="pl-pds">&quot;</span></span>&lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1896" class="blob-num js-line-number" data-line-number="1896"></td>
        <td id="LC1896" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L1897" class="blob-num js-line-number" data-line-number="1897"></td>
        <td id="LC1897" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_abu10.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1898" class="blob-num js-line-number" data-line-number="1898"></td>
        <td id="LC1898" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">1</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1899" class="blob-num js-line-number" data-line-number="1899"></td>
        <td id="LC1899" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_abu30.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1900" class="blob-num js-line-number" data-line-number="1900"></td>
        <td id="LC1900" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">2</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1901" class="blob-num js-line-number" data-line-number="1901"></td>
        <td id="LC1901" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_ba.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1902" class="blob-num js-line-number" data-line-number="1902"></td>
        <td id="LC1902" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">3</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1903" class="blob-num js-line-number" data-line-number="1903"></td>
        <td id="LC1903" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_npp.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1904" class="blob-num js-line-number" data-line-number="1904"></td>
        <td id="LC1904" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">4</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1905" class="blob-num js-line-number" data-line-number="1905"></td>
        <td id="LC1905" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_gpp.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1906" class="blob-num js-line-number" data-line-number="1906"></td>
        <td id="LC1906" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">5</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1907" class="blob-num js-line-number" data-line-number="1907"></td>
        <td id="LC1907" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_ba10.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1908" class="blob-num js-line-number" data-line-number="1908"></td>
        <td id="LC1908" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">6</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1909" class="blob-num js-line-number" data-line-number="1909"></td>
        <td id="LC1909" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_ppfd0.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1910" class="blob-num js-line-number" data-line-number="1910"></td>
        <td id="LC1910" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">7</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1911" class="blob-num js-line-number" data-line-number="1911"></td>
        <td id="LC1911" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_death.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1912" class="blob-num js-line-number" data-line-number="1912"></td>
        <td id="LC1912" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">8</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1913" class="blob-num js-line-number" data-line-number="1913"></td>
        <td id="LC1913" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_state.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1914" class="blob-num js-line-number" data-line-number="1914"></td>
        <td id="LC1914" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">9</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1915" class="blob-num js-line-number" data-line-number="1915"></td>
        <td id="LC1915" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_final_pattern.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1916" class="blob-num js-line-number" data-line-number="1916"></td>
        <td id="LC1916" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">10</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1917" class="blob-num js-line-number" data-line-number="1917"></td>
        <td id="LC1917" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_site1.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1918" class="blob-num js-line-number" data-line-number="1918"></td>
        <td id="LC1918" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L1919" class="blob-num js-line-number" data-line-number="1919"></td>
        <td id="LC1919" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span> used to be added to explore potential link with Belassen curve, could be suppressed, but maybe useful to have an idea of the magnitude and distribution of increment of dbh</span></td>
      </tr>
      <tr>
        <td id="L1920" class="blob-num js-line-number" data-line-number="1920"></td>
        <td id="LC1920" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L1921" class="blob-num js-line-number" data-line-number="1921"></td>
        <td id="LC1921" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">11</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1922" class="blob-num js-line-number" data-line-number="1922"></td>
        <td id="LC1922" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_site2.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1923" class="blob-num js-line-number" data-line-number="1923"></td>
        <td id="LC1923" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">12</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1924" class="blob-num js-line-number" data-line-number="1924"></td>
        <td id="LC1924" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_site3.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1925" class="blob-num js-line-number" data-line-number="1925"></td>
        <td id="LC1925" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">13</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1926" class="blob-num js-line-number" data-line-number="1926"></td>
        <td id="LC1926" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_site4.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1927" class="blob-num js-line-number" data-line-number="1927"></td>
        <td id="LC1927" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">14</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1928" class="blob-num js-line-number" data-line-number="1928"></td>
        <td id="LC1928" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_site5.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1929" class="blob-num js-line-number" data-line-number="1929"></td>
        <td id="LC1929" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">15</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1930" class="blob-num js-line-number" data-line-number="1930"></td>
        <td id="LC1930" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_site6.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1931" class="blob-num js-line-number" data-line-number="1931"></td>
        <td id="LC1931" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">16</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1932" class="blob-num js-line-number" data-line-number="1932"></td>
        <td id="LC1932" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L1933" class="blob-num js-line-number" data-line-number="1933"></td>
        <td id="LC1933" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span>output[17] for parameter space is valid both for reduced and standard output, defined below</span></td>
      </tr>
      <tr>
        <td id="L1934" class="blob-num js-line-number" data-line-number="1934"></td>
        <td id="LC1934" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L1935" class="blob-num js-line-number" data-line-number="1935"></td>
        <td id="LC1935" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_sp_par.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1936" class="blob-num js-line-number" data-line-number="1936"></td>
        <td id="LC1936" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">18</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1937" class="blob-num js-line-number" data-line-number="1937"></td>
        <td id="LC1937" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_agb.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1938" class="blob-num js-line-number" data-line-number="1938"></td>
        <td id="LC1938" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">19</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1939" class="blob-num js-line-number" data-line-number="1939"></td>
        <td id="LC1939" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_Rday.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1940" class="blob-num js-line-number" data-line-number="1940"></td>
        <td id="LC1940" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">20</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1941" class="blob-num js-line-number" data-line-number="1941"></td>
        <td id="LC1941" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_Rnight.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1942" class="blob-num js-line-number" data-line-number="1942"></td>
        <td id="LC1942" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">21</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1943" class="blob-num js-line-number" data-line-number="1943"></td>
        <td id="LC1943" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_Rstem.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1944" class="blob-num js-line-number" data-line-number="1944"></td>
        <td id="LC1944" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">22</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1945" class="blob-num js-line-number" data-line-number="1945"></td>
        <td id="LC1945" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_death1.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1946" class="blob-num js-line-number" data-line-number="1946"></td>
        <td id="LC1946" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">23</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1947" class="blob-num js-line-number" data-line-number="1947"></td>
        <td id="LC1947" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_death2.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1948" class="blob-num js-line-number" data-line-number="1948"></td>
        <td id="LC1948" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">24</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1949" class="blob-num js-line-number" data-line-number="1949"></td>
        <td id="LC1949" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_death3.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1950" class="blob-num js-line-number" data-line-number="1950"></td>
        <td id="LC1950" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">25</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1951" class="blob-num js-line-number" data-line-number="1951"></td>
        <td id="LC1951" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_deathrate.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1952" class="blob-num js-line-number" data-line-number="1952"></td>
        <td id="LC1952" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">26</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1953" class="blob-num js-line-number" data-line-number="1953"></td>
        <td id="LC1953" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_litterfall.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1954" class="blob-num js-line-number" data-line-number="1954"></td>
        <td id="LC1954" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">27</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1955" class="blob-num js-line-number" data-line-number="1955"></td>
        <td id="LC1955" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_leafdens1.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1956" class="blob-num js-line-number" data-line-number="1956"></td>
        <td id="LC1956" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">28</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1957" class="blob-num js-line-number" data-line-number="1957"></td>
        <td id="LC1957" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_leafdens2.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1958" class="blob-num js-line-number" data-line-number="1958"></td>
        <td id="LC1958" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">29</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1959" class="blob-num js-line-number" data-line-number="1959"></td>
        <td id="LC1959" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_leafdens3.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1960" class="blob-num js-line-number" data-line-number="1960"></td>
        <td id="LC1960" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">30</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1961" class="blob-num js-line-number" data-line-number="1961"></td>
        <td id="LC1961" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_dbh.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1962" class="blob-num js-line-number" data-line-number="1962"></td>
        <td id="LC1962" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">31</span>].<span class="pl-c1">open</span>(nnn,ios::out);</td>
      </tr>
      <tr>
        <td id="L1963" class="blob-num js-line-number" data-line-number="1963"></td>
        <td id="LC1963" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_vertd.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1964" class="blob-num js-line-number" data-line-number="1964"></td>
        <td id="LC1964" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">32</span>].<span class="pl-c1">open</span>(nnn,ios::out);</td>
      </tr>
      <tr>
        <td id="L1965" class="blob-num js-line-number" data-line-number="1965"></td>
        <td id="LC1965" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_100yearsofsolitude.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1966" class="blob-num js-line-number" data-line-number="1966"></td>
        <td id="LC1966" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">33</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1967" class="blob-num js-line-number" data-line-number="1967"></td>
        <td id="LC1967" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_NDDfield.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1968" class="blob-num js-line-number" data-line-number="1968"></td>
        <td id="LC1968" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">34</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1969" class="blob-num js-line-number" data-line-number="1969"></td>
        <td id="LC1969" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_cica.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1970" class="blob-num js-line-number" data-line-number="1970"></td>
        <td id="LC1970" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">35</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1971" class="blob-num js-line-number" data-line-number="1971"></td>
        <td id="LC1971" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L1972" class="blob-num js-line-number" data-line-number="1972"></td>
        <td id="LC1972" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1973" class="blob-num js-line-number" data-line-number="1973"></td>
        <td id="LC1973" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">sprintf</span>(nnn,<span class="pl-s"><span class="pl-pds">&quot;</span>%s_%i_paramspace.txt<span class="pl-pds">&quot;</span></span>,buf, easympi_rank);</td>
      </tr>
      <tr>
        <td id="L1974" class="blob-num js-line-number" data-line-number="1974"></td>
        <td id="LC1974" class="blob-code blob-code-inner js-file-line">        output[<span class="pl-c1">17</span>].<span class="pl-c1">open</span>(nnn, ios::out);</td>
      </tr>
      <tr>
        <td id="L1975" class="blob-num js-line-number" data-line-number="1975"></td>
        <td id="LC1975" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L1976" class="blob-num js-line-number" data-line-number="1976"></td>
        <td id="LC1976" class="blob-code blob-code-inner js-file-line">        output[<span class="pl-c1">17</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>proc<span class="pl-pds">&quot;</span></span>  &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; easympi_rank &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1977" class="blob-num js-line-number" data-line-number="1977"></td>
        <td id="LC1977" class="blob-code blob-code-inner js-file-line">        output[<span class="pl-c1">17</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>phi<span class="pl-pds">&quot;</span></span>  &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; phi &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1978" class="blob-num js-line-number" data-line-number="1978"></td>
        <td id="LC1978" class="blob-code blob-code-inner js-file-line">        output[<span class="pl-c1">17</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>k<span class="pl-pds">&quot;</span></span>  &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt;klight &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1979" class="blob-num js-line-number" data-line-number="1979"></td>
        <td id="LC1979" class="blob-code blob-code-inner js-file-line">        output[<span class="pl-c1">17</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>fallocwood<span class="pl-pds">&quot;</span></span>  &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; fallocwood &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1980" class="blob-num js-line-number" data-line-number="1980"></td>
        <td id="LC1980" class="blob-code blob-code-inner js-file-line">        output[<span class="pl-c1">17</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>falloccanopy<span class="pl-pds">&quot;</span></span>  &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; falloccanopy &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1981" class="blob-num js-line-number" data-line-number="1981"></td>
        <td id="LC1981" class="blob-code blob-code-inner js-file-line">        output[<span class="pl-c1">17</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>m<span class="pl-pds">&quot;</span></span>  &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; m &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1982" class="blob-num js-line-number" data-line-number="1982"></td>
        <td id="LC1982" class="blob-code blob-code-inner js-file-line">        output[<span class="pl-c1">17</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>m1<span class="pl-pds">&quot;</span></span>  &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; m1 &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L1983" class="blob-num js-line-number" data-line-number="1983"></td>
        <td id="LC1983" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L1984" class="blob-num js-line-number" data-line-number="1984"></td>
        <td id="LC1984" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1985" class="blob-num js-line-number" data-line-number="1985"></td>
        <td id="LC1985" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1986" class="blob-num js-line-number" data-line-number="1986"></td>
        <td id="LC1986" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1987" class="blob-num js-line-number" data-line-number="1987"></td>
        <td id="LC1987" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**************************************</span></td>
      </tr>
      <tr>
        <td id="L1988" class="blob-num js-line-number" data-line-number="1988"></td>
        <td id="LC1988" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *** Initialisation from inventories ***</span></td>
      </tr>
      <tr>
        <td id="L1989" class="blob-num js-line-number" data-line-number="1989"></td>
        <td id="LC1989" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> **************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1990" class="blob-num js-line-number" data-line-number="1990"></td>
        <td id="LC1990" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1991" class="blob-num js-line-number" data-line-number="1991"></td>
        <td id="LC1991" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1992" class="blob-num js-line-number" data-line-number="1992"></td>
        <td id="LC1992" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">InitialiseFromData</span>(){</td>
      </tr>
      <tr>
        <td id="L1993" class="blob-num js-line-number" data-line-number="1993"></td>
        <td id="LC1993" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> prepare data set beforehand: col/x_dim, row/y_dim, dbh_measured, species_label,</span></td>
      </tr>
      <tr>
        <td id="L1994" class="blob-num js-line-number" data-line-number="1994"></td>
        <td id="LC1994" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1995" class="blob-num js-line-number" data-line-number="1995"></td>
        <td id="LC1995" class="blob-code blob-code-inner js-file-line">    fstream <span class="pl-smi">In</span>(inputfile_data, ios::in);                                                <span class="pl-c"><span class="pl-c">//</span> input stream</span></td>
      </tr>
      <tr>
        <td id="L1996" class="blob-num js-line-number" data-line-number="1996"></td>
        <td id="LC1996" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> col_data, row_data, dbh_measured, sp_lab_data;                            <span class="pl-c"><span class="pl-c">//</span> values needed for tree initialisation</span></td>
      </tr>
      <tr>
        <td id="L1997" class="blob-num js-line-number" data-line-number="1997"></td>
        <td id="LC1997" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L1998" class="blob-num js-line-number" data-line-number="1998"></td>
        <td id="LC1998" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> col_int, row_int, data_read=<span class="pl-c1">0</span>, data_initialised=<span class="pl-c1">0</span>;                          <span class="pl-c"><span class="pl-c">//</span> diagnostics</span></td>
      </tr>
      <tr>
        <td id="L1999" class="blob-num js-line-number" data-line-number="1999"></td>
        <td id="LC1999" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> height_max=<span class="pl-c1">0</span>;                                                             <span class="pl-c"><span class="pl-c">//</span> diagnostics</span></td>
      </tr>
      <tr>
        <td id="L2000" class="blob-num js-line-number" data-line-number="2000"></td>
        <td id="LC2000" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2001" class="blob-num js-line-number" data-line-number="2001"></td>
        <td id="LC2001" class="blob-code blob-code-inner js-file-line">    nblivetrees=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2002" class="blob-num js-line-number" data-line-number="2002"></td>
        <td id="LC2002" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2003" class="blob-num js-line-number" data-line-number="2003"></td>
        <td id="LC2003" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>for (int line=0;line&lt;30;line++) In.getline(buffer,128,&#39;\n&#39;);</span></td>
      </tr>
      <tr>
        <td id="L2004" class="blob-num js-line-number" data-line-number="2004"></td>
        <td id="LC2004" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2005" class="blob-num js-line-number" data-line-number="2005"></td>
        <td id="LC2005" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>Reading from file <span class="pl-pds">&quot;</span></span> &lt;&lt; inputfile_data &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2006" class="blob-num js-line-number" data-line-number="2006"></td>
        <td id="LC2006" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2007" class="blob-num js-line-number" data-line-number="2007"></td>
        <td id="LC2007" class="blob-code blob-code-inner js-file-line">    In.<span class="pl-c1">getline</span>(buffer,<span class="pl-c1">256</span>,<span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>);                                                    <span class="pl-c"><span class="pl-c">//</span> skip header lines</span></td>
      </tr>
      <tr>
        <td id="L2008" class="blob-num js-line-number" data-line-number="2008"></td>
        <td id="LC2008" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2009" class="blob-num js-line-number" data-line-number="2009"></td>
        <td id="LC2009" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>Header line skipped <span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2010" class="blob-num js-line-number" data-line-number="2010"></td>
        <td id="LC2010" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2011" class="blob-num js-line-number" data-line-number="2011"></td>
        <td id="LC2011" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">while</span> ((In &gt;&gt; col_data &gt;&gt; row_data &gt;&gt; dbh_measured  &gt;&gt; sp_lab_data) &amp;&amp; data_read &lt; sites)       <span class="pl-c"><span class="pl-c">//</span> restricting to data sets with a maximum number of values corresponding to no. of sites</span></td>
      </tr>
      <tr>
        <td id="L2012" class="blob-num js-line-number" data-line-number="2012"></td>
        <td id="LC2012" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L2013" class="blob-num js-line-number" data-line-number="2013"></td>
        <td id="LC2013" class="blob-code blob-code-inner js-file-line">        In.<span class="pl-c1">getline</span>(buffer, <span class="pl-c1">256</span>, <span class="pl-s"><span class="pl-pds">&#39;</span><span class="pl-cce">\n</span><span class="pl-pds">&#39;</span></span>); <span class="pl-c"><span class="pl-c">//</span> reads additional information into buffer</span></td>
      </tr>
      <tr>
        <td id="L2014" class="blob-num js-line-number" data-line-number="2014"></td>
        <td id="LC2014" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2015" class="blob-num js-line-number" data-line-number="2015"></td>
        <td id="LC2015" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>((sp_lab_data &gt; <span class="pl-c1">0</span>) &amp;&amp; (sp_lab_data &lt;= numesp) &amp;&amp; (col_data &gt;= <span class="pl-c1">0</span>) &amp;&amp; (col_data &lt; cols) &amp;&amp; (row_data &gt;= <span class="pl-c1">0</span>) &amp;&amp; (row_data &lt; rows)){</td>
      </tr>
      <tr>
        <td id="L2016" class="blob-num js-line-number" data-line-number="2016"></td>
        <td id="LC2016" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2017" class="blob-num js-line-number" data-line-number="2017"></td>
        <td id="LC2017" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span> read only species that are rendered in TROLL (species label to be added via R / comparison input file and data)</span></td>
      </tr>
      <tr>
        <td id="L2018" class="blob-num js-line-number" data-line-number="2018"></td>
        <td id="LC2018" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span> cout &lt;&lt; &quot;col: &quot; &lt;&lt; round(col_data) &lt;&lt; &quot; row: &quot; &lt;&lt; round(row_data) &lt;&lt; &quot; species: &quot; &lt;&lt; sp_lab_data &lt;&lt; &quot; dbh: &quot; &lt;&lt; dbh_measured &lt;&lt; &quot; data measured \n&quot;;</span></td>
      </tr>
      <tr>
        <td id="L2019" class="blob-num js-line-number" data-line-number="2019"></td>
        <td id="LC2019" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2020" class="blob-num js-line-number" data-line-number="2020"></td>
        <td id="LC2020" class="blob-code blob-code-inner js-file-line">            dbh_measured = <span class="pl-c1">0.001</span>*dbh_measured;          <span class="pl-c"><span class="pl-c">//</span>here given in mm, converting to m</span></td>
      </tr>
      <tr>
        <td id="L2021" class="blob-num js-line-number" data-line-number="2021"></td>
        <td id="LC2021" class="blob-code blob-code-inner js-file-line">            cout &lt;&lt; dbh_measured &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2022" class="blob-num js-line-number" data-line-number="2022"></td>
        <td id="LC2022" class="blob-code blob-code-inner js-file-line">            col_int = (<span class="pl-k">int</span>) (col_data+<span class="pl-c1">0</span>.<span class="pl-c1">5f</span>);            <span class="pl-c"><span class="pl-c">//</span>rounding, works since negatives have been eliminated before</span></td>
      </tr>
      <tr>
        <td id="L2023" class="blob-num js-line-number" data-line-number="2023"></td>
        <td id="LC2023" class="blob-code blob-code-inner js-file-line">            row_int = (<span class="pl-k">int</span>) (row_data+<span class="pl-c1">0</span>.<span class="pl-c1">5f</span>);</td>
      </tr>
      <tr>
        <td id="L2024" class="blob-num js-line-number" data-line-number="2024"></td>
        <td id="LC2024" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2025" class="blob-num js-line-number" data-line-number="2025"></td>
        <td id="LC2025" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span> immediate tree birth</span></td>
      </tr>
      <tr>
        <td id="L2026" class="blob-num js-line-number" data-line-number="2026"></td>
        <td id="LC2026" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2027" class="blob-num js-line-number" data-line-number="2027"></td>
        <td id="LC2027" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(T[col_int+row_int*cols].<span class="pl-smi">t_age</span>==<span class="pl-c1">0</span>) T[col_int+row_int*cols].<span class="pl-c1">BirthFromData</span>(S,sp_lab_data,col_int+row_int*cols,dbh_measured);</td>
      </tr>
      <tr>
        <td id="L2028" class="blob-num js-line-number" data-line-number="2028"></td>
        <td id="LC2028" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2029" class="blob-num js-line-number" data-line-number="2029"></td>
        <td id="LC2029" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(height_max&lt;T[col_int+row_int*cols].<span class="pl-smi">t_Tree_Height</span>) height_max = T[col_int+row_int*cols].<span class="pl-smi">t_Tree_Height</span>;</td>
      </tr>
      <tr>
        <td id="L2030" class="blob-num js-line-number" data-line-number="2030"></td>
        <td id="LC2030" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2031" class="blob-num js-line-number" data-line-number="2031"></td>
        <td id="LC2031" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span> first attempt: simple, only trees with coordinates, only known species</span></td>
      </tr>
      <tr>
        <td id="L2032" class="blob-num js-line-number" data-line-number="2032"></td>
        <td id="LC2032" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span> other possibilities: not spatially explicit and/or assign species randomnly to trees whose species are not known</span></td>
      </tr>
      <tr>
        <td id="L2033" class="blob-num js-line-number" data-line-number="2033"></td>
        <td id="LC2033" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2034" class="blob-num js-line-number" data-line-number="2034"></td>
        <td id="LC2034" class="blob-code blob-code-inner js-file-line">            data_initialised++;</td>
      </tr>
      <tr>
        <td id="L2035" class="blob-num js-line-number" data-line-number="2035"></td>
        <td id="LC2035" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2036" class="blob-num js-line-number" data-line-number="2036"></td>
        <td id="LC2036" class="blob-code blob-code-inner js-file-line">        data_read++;</td>
      </tr>
      <tr>
        <td id="L2037" class="blob-num js-line-number" data-line-number="2037"></td>
        <td id="LC2037" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2038" class="blob-num js-line-number" data-line-number="2038"></td>
        <td id="LC2038" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2039" class="blob-num js-line-number" data-line-number="2039"></td>
        <td id="LC2039" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span> &lt;&lt; data_read &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> rows read from file. <span class="pl-pds">&quot;</span></span> &lt;&lt; data_initialised &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> rows usable for initialisation from data. <span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2040" class="blob-num js-line-number" data-line-number="2040"></td>
        <td id="LC2040" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>Maximum height of trees included is: <span class="pl-pds">&quot;</span></span> &lt;&lt; height_max &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2041" class="blob-num js-line-number" data-line-number="2041"></td>
        <td id="LC2041" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>NBtrees from Data:<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; nblivetrees &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2042" class="blob-num js-line-number" data-line-number="2042"></td>
        <td id="LC2042" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>Initialisation from data finished <span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2043" class="blob-num js-line-number" data-line-number="2043"></td>
        <td id="LC2043" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2044" class="blob-num js-line-number" data-line-number="2044"></td>
        <td id="LC2044" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2045" class="blob-num js-line-number" data-line-number="2045"></td>
        <td id="LC2045" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2046" class="blob-num js-line-number" data-line-number="2046"></td>
        <td id="LC2046" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**************************************</span></td>
      </tr>
      <tr>
        <td id="L2047" class="blob-num js-line-number" data-line-number="2047"></td>
        <td id="LC2047" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *** Field dynamic memory allocation ***</span></td>
      </tr>
      <tr>
        <td id="L2048" class="blob-num js-line-number" data-line-number="2048"></td>
        <td id="LC2048" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> **************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2049" class="blob-num js-line-number" data-line-number="2049"></td>
        <td id="LC2049" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2050" class="blob-num js-line-number" data-line-number="2050"></td>
        <td id="LC2050" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">AllocMem</span>() {</td>
      </tr>
      <tr>
        <td id="L2051" class="blob-num js-line-number" data-line-number="2051"></td>
        <td id="LC2051" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2052" class="blob-num js-line-number" data-line-number="2052"></td>
        <td id="LC2052" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> spp,haut,i;</td>
      </tr>
      <tr>
        <td id="L2053" class="blob-num js-line-number" data-line-number="2053"></td>
        <td id="LC2053" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2054" class="blob-num js-line-number" data-line-number="2054"></td>
        <td id="LC2054" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> HEIGHT = 80;</span></td>
      </tr>
      <tr>
        <td id="L2055" class="blob-num js-line-number" data-line-number="2055"></td>
        <td id="LC2055" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> instead of static definition of height, calculate according to maximum height that can be reached by trees</span></td>
      </tr>
      <tr>
        <td id="L2056" class="blob-num js-line-number" data-line-number="2056"></td>
        <td id="LC2056" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) {</td>
      </tr>
      <tr>
        <td id="L2057" class="blob-num js-line-number" data-line-number="2057"></td>
        <td id="LC2057" class="blob-code blob-code-inner js-file-line">        HEIGHT = <span class="pl-c1">max</span>(HEIGHT,<span class="pl-c1">int</span>(S[spp].<span class="pl-smi">s_hmax</span>*S[spp].<span class="pl-smi">s_dmax</span>*<span class="pl-c1">1.5</span>/(S[spp].<span class="pl-smi">s_dmax</span>*<span class="pl-c1">1.5</span>+S[spp].<span class="pl-smi">s_ah</span>)));  <span class="pl-c"><span class="pl-c">//</span>   in number of vertical cells</span></td>
      </tr>
      <tr>
        <td id="L2058" class="blob-num js-line-number" data-line-number="2058"></td>
        <td id="LC2058" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2059" class="blob-num js-line-number" data-line-number="2059"></td>
        <td id="LC2059" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2060" class="blob-num js-line-number" data-line-number="2060"></td>
        <td id="LC2060" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>HEIGHT <span class="pl-pds">&quot;</span></span> &lt;&lt; HEIGHT &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L2061" class="blob-num js-line-number" data-line-number="2061"></td>
        <td id="LC2061" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2062" class="blob-num js-line-number" data-line-number="2062"></td>
        <td id="LC2062" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> d,r;</td>
      </tr>
      <tr>
        <td id="L2063" class="blob-num js-line-number" data-line-number="2063"></td>
        <td id="LC2063" class="blob-code blob-code-inner js-file-line">    d = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L2064" class="blob-num js-line-number" data-line-number="2064"></td>
        <td id="LC2064" class="blob-code blob-code-inner js-file-line">    r = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L2065" class="blob-num js-line-number" data-line-number="2065"></td>
        <td id="LC2065" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++){</td>
      </tr>
      <tr>
        <td id="L2066" class="blob-num js-line-number" data-line-number="2066"></td>
        <td id="LC2066" class="blob-code blob-code-inner js-file-line">        d = <span class="pl-c1">maxf</span>(d,S[spp].<span class="pl-smi">s_dmax</span>*<span class="pl-c1">1.5</span>);</td>
      </tr>
      <tr>
        <td id="L2067" class="blob-num js-line-number" data-line-number="2067"></td>
        <td id="LC2067" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> in number of horizontal cells <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2068" class="blob-num js-line-number" data-line-number="2068"></td>
        <td id="LC2068" class="blob-code blob-code-inner js-file-line">        r = <span class="pl-c1">maxf</span>(r,ra0+S[spp].<span class="pl-smi">s_dmax</span>*<span class="pl-c1">1.5</span>*ra1);</td>
      </tr>
      <tr>
        <td id="L2069" class="blob-num js-line-number" data-line-number="2069"></td>
        <td id="LC2069" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> in number of horizontal cells <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2070" class="blob-num js-line-number" data-line-number="2070"></td>
        <td id="LC2070" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2071" class="blob-num js-line-number" data-line-number="2071"></td>
        <td id="LC2071" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2072" class="blob-num js-line-number" data-line-number="2072"></td>
        <td id="LC2072" class="blob-code blob-code-inner js-file-line">    RMAX = <span class="pl-c1">int</span>(r+p_nonvert*NH*LV*HEIGHT);</td>
      </tr>
      <tr>
        <td id="L2073" class="blob-num js-line-number" data-line-number="2073"></td>
        <td id="LC2073" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  RMAX = int(r);</span></td>
      </tr>
      <tr>
        <td id="L2074" class="blob-num js-line-number" data-line-number="2074"></td>
        <td id="LC2074" class="blob-code blob-code-inner js-file-line">    SBORD = cols*RMAX;</td>
      </tr>
      <tr>
        <td id="L2075" class="blob-num js-line-number" data-line-number="2075"></td>
        <td id="LC2075" class="blob-code blob-code-inner js-file-line">    dbhmaxincm = <span class="pl-c1">int</span>(<span class="pl-c1">100</span>.*d);</td>
      </tr>
      <tr>
        <td id="L2076" class="blob-num js-line-number" data-line-number="2076"></td>
        <td id="LC2076" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2077" class="blob-num js-line-number" data-line-number="2077"></td>
        <td id="LC2077" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(!mpi_rank) {</td>
      </tr>
      <tr>
        <td id="L2078" class="blob-num js-line-number" data-line-number="2078"></td>
        <td id="LC2078" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>cout &lt;&lt; &quot;HEIGHT : &quot; &lt;&lt; HEIGHT</span></td>
      </tr>
      <tr>
        <td id="L2079" class="blob-num js-line-number" data-line-number="2079"></td>
        <td id="LC2079" class="blob-code blob-code-inner js-file-line"><span class="pl-c">         &lt;&lt; &quot; RMAX : &quot; &lt;&lt; RMAX &lt;&lt; &quot; DBH : &quot; &lt;&lt; DBH &lt;&lt;&quot;\n&quot;;</span></td>
      </tr>
      <tr>
        <td id="L2080" class="blob-num js-line-number" data-line-number="2080"></td>
        <td id="LC2080" class="blob-code blob-code-inner js-file-line"><span class="pl-c">         cout.flush();<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2081" class="blob-num js-line-number" data-line-number="2081"></td>
        <td id="LC2081" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2082" class="blob-num js-line-number" data-line-number="2082"></td>
        <td id="LC2082" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(RMAX&gt;rows){</td>
      </tr>
      <tr>
        <td id="L2083" class="blob-num js-line-number" data-line-number="2083"></td>
        <td id="LC2083" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">/*</span> Consistency tests <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2084" class="blob-num js-line-number" data-line-number="2084"></td>
        <td id="LC2084" class="blob-code blob-code-inner js-file-line">            cerr &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>Error : RMAX &gt; rows <span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2085" class="blob-num js-line-number" data-line-number="2085"></td>
        <td id="LC2085" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">exit</span>(-<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2086" class="blob-num js-line-number" data-line-number="2086"></td>
        <td id="LC2086" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2087" class="blob-num js-line-number" data-line-number="2087"></td>
        <td id="LC2087" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(HEIGHT &gt; rows){</td>
      </tr>
      <tr>
        <td id="L2088" class="blob-num js-line-number" data-line-number="2088"></td>
        <td id="LC2088" class="blob-code blob-code-inner js-file-line">            cerr &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>Error : HEIGHT &gt; rows <span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2089" class="blob-num js-line-number" data-line-number="2089"></td>
        <td id="LC2089" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">exit</span>(-<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2090" class="blob-num js-line-number" data-line-number="2090"></td>
        <td id="LC2090" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2091" class="blob-num js-line-number" data-line-number="2091"></td>
        <td id="LC2091" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2092" class="blob-num js-line-number" data-line-number="2092"></td>
        <td id="LC2092" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2093" class="blob-num js-line-number" data-line-number="2093"></td>
        <td id="LC2093" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2094" class="blob-num js-line-number" data-line-number="2094"></td>
        <td id="LC2094" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** Initialization of dynamic Fields **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2095" class="blob-num js-line-number" data-line-number="2095"></td>
        <td id="LC2095" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>**************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2096" class="blob-num js-line-number" data-line-number="2096"></td>
        <td id="LC2096" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2097" class="blob-num js-line-number" data-line-number="2097"></td>
        <td id="LC2097" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(nbdbh=<span class="pl-k">new</span> <span class="pl-k">int</span>[dbhmaxincm])) cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;                         <span class="pl-c"><span class="pl-c">/*</span> Field for DBH histogram <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2098" class="blob-num js-line-number" data-line-number="2098"></td>
        <td id="LC2098" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(layer=<span class="pl-k">new</span> <span class="pl-k">float</span>[HEIGHT+<span class="pl-c1">1</span>])) cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;                         <span class="pl-c"><span class="pl-c">/*</span> Field for variables averaged by vertical layer <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2099" class="blob-num js-line-number" data-line-number="2099"></td>
        <td id="LC2099" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(SPECIES_GERM=<span class="pl-k">new</span> <span class="pl-k">int</span>[numesp+<span class="pl-c1">1</span>])) cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;                           <span class="pl-c"><span class="pl-c">/*</span> Field for democratic seed germination <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2100" class="blob-num js-line-number" data-line-number="2100"></td>
        <td id="LC2100" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_SEEDTRADEOFF){</td>
      </tr>
      <tr>
        <td id="L2101" class="blob-num js-line-number" data-line-number="2101"></td>
        <td id="LC2101" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(PROB_S=<span class="pl-k">new</span> <span class="pl-k">float</span>[numesp+<span class="pl-c1">1</span>])) cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2102" class="blob-num js-line-number" data-line-number="2102"></td>
        <td id="LC2102" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2103" class="blob-num js-line-number" data-line-number="2103"></td>
        <td id="LC2103" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  if (NULL==(persist=new long int[nbiter])) cerr&lt;&lt;&quot;!!! Mem_Alloc\n&quot;;                  /* Field for persistence */</span></td>
      </tr>
      <tr>
        <td id="L2104" class="blob-num js-line-number" data-line-number="2104"></td>
        <td id="LC2104" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  if (NULL==(distr=new int[cols])) cerr&lt;&lt;&quot;!!! Mem_Alloc\n&quot;;</span></td>
      </tr>
      <tr>
        <td id="L2105" class="blob-num js-line-number" data-line-number="2105"></td>
        <td id="LC2105" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2106" class="blob-num js-line-number" data-line-number="2106"></td>
        <td id="LC2106" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(LAI3D=<span class="pl-k">new</span> <span class="pl-k">float</span>*[HEIGHT+<span class="pl-c1">1</span>]))                                                   <span class="pl-c"><span class="pl-c">/*</span> Field 3D <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2107" class="blob-num js-line-number" data-line-number="2107"></td>
        <td id="LC2107" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;                                                            <span class="pl-c"><span class="pl-c">/*</span> Trees at the border of the simulated forest need to know the canopy occupancy by trees in the neighboring processor.<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2108" class="blob-num js-line-number" data-line-number="2108"></td>
        <td id="LC2108" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(haut=<span class="pl-c1">0</span>;haut&lt;(HEIGHT+<span class="pl-c1">1</span>);haut++)                                                          <span class="pl-c"><span class="pl-c">/*</span> For each processor, we define a stripe above (labelled 0) and a stripe below (1). Each stripe is SBORD in width.<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2109" class="blob-num js-line-number" data-line-number="2109"></td>
        <td id="LC2109" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(LAI3D[haut]=<span class="pl-k">new</span> <span class="pl-k">float</span>[sites+<span class="pl-c1">2</span>*SBORD]))                                   <span class="pl-c"><span class="pl-c">/*</span> ALL the sites need to be updated.<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2110" class="blob-num js-line-number" data-line-number="2110"></td>
        <td id="LC2110" class="blob-code blob-code-inner js-file-line">            cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2111" class="blob-num js-line-number" data-line-number="2111"></td>
        <td id="LC2111" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(haut=<span class="pl-c1">0</span>;haut&lt;(HEIGHT+<span class="pl-c1">1</span>);haut++)</td>
      </tr>
      <tr>
        <td id="L2112" class="blob-num js-line-number" data-line-number="2112"></td>
        <td id="LC2112" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(<span class="pl-k">int</span> site=<span class="pl-c1">0</span>;site&lt;sites+<span class="pl-c1">2</span>*SBORD;site++)</td>
      </tr>
      <tr>
        <td id="L2113" class="blob-num js-line-number" data-line-number="2113"></td>
        <td id="LC2113" class="blob-code blob-code-inner js-file-line">            LAI3D[haut][site] = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L2114" class="blob-num js-line-number" data-line-number="2114"></td>
        <td id="LC2114" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2115" class="blob-num js-line-number" data-line-number="2115"></td>
        <td id="LC2115" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(Thurt[<span class="pl-c1">0</span>]=<span class="pl-k">new</span> <span class="pl-k">unsigned</span> <span class="pl-k">short</span>[<span class="pl-c1">3</span>*sites]))                                       <span class="pl-c"><span class="pl-c">/*</span> Field for treefall impacts <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2116" class="blob-num js-line-number" data-line-number="2116"></td>
        <td id="LC2116" class="blob-code blob-code-inner js-file-line">        cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2117" class="blob-num js-line-number" data-line-number="2117"></td>
        <td id="LC2117" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(i=<span class="pl-c1">1</span>;i&lt;<span class="pl-c1">3</span>;i++)</td>
      </tr>
      <tr>
        <td id="L2118" class="blob-num js-line-number" data-line-number="2118"></td>
        <td id="LC2118" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(Thurt[i]=<span class="pl-k">new</span> <span class="pl-k">unsigned</span> <span class="pl-k">short</span>[sites]))</td>
      </tr>
      <tr>
        <td id="L2119" class="blob-num js-line-number" data-line-number="2119"></td>
        <td id="LC2119" class="blob-code blob-code-inner js-file-line">            cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2120" class="blob-num js-line-number" data-line-number="2120"></td>
        <td id="LC2120" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2121" class="blob-num js-line-number" data-line-number="2121"></td>
        <td id="LC2121" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI                                                                                      <span class="pl-c"><span class="pl-c">/*</span> Fields for MPI operations <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2122" class="blob-num js-line-number" data-line-number="2122"></td>
        <td id="LC2122" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(i=<span class="pl-c1">0</span>;i&lt;<span class="pl-c1">2</span>;i++){                                                                       <span class="pl-c"><span class="pl-c">/*</span>  Two fields: one for the CL north (0) one for the CL south (1) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2123" class="blob-num js-line-number" data-line-number="2123"></td>
        <td id="LC2123" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(LAIc[i]=<span class="pl-k">new</span> <span class="pl-k">unsigned</span> <span class="pl-k">short</span>*[HEIGHT+<span class="pl-c1">1</span>]))                                    <span class="pl-c"><span class="pl-c">/*</span> These fields contain the light info in the neighboring procs (2*SBORD in width, not SBORD !). They are used to update local fields <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2124" class="blob-num js-line-number" data-line-number="2124"></td>
        <td id="LC2124" class="blob-code blob-code-inner js-file-line">            cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2125" class="blob-num js-line-number" data-line-number="2125"></td>
        <td id="LC2125" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(haut=<span class="pl-c1">0</span>;haut&lt;(HEIGHT+<span class="pl-c1">1</span>);haut++)</td>
      </tr>
      <tr>
        <td id="L2126" class="blob-num js-line-number" data-line-number="2126"></td>
        <td id="LC2126" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span> (<span class="pl-c1">NULL</span>==(LAIc[i][haut]=<span class="pl-k">new</span> <span class="pl-k">unsigned</span> <span class="pl-k">short</span>[<span class="pl-c1">2</span>*SBORD]))</td>
      </tr>
      <tr>
        <td id="L2127" class="blob-num js-line-number" data-line-number="2127"></td>
        <td id="LC2127" class="blob-code blob-code-inner js-file-line">                cerr&lt;&lt;<span class="pl-s"><span class="pl-pds">&quot;</span>!!! Mem_Alloc<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2128" class="blob-num js-line-number" data-line-number="2128"></td>
        <td id="LC2128" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2129" class="blob-num js-line-number" data-line-number="2129"></td>
        <td id="LC2129" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2130" class="blob-num js-line-number" data-line-number="2130"></td>
        <td id="LC2130" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2131" class="blob-num js-line-number" data-line-number="2131"></td>
        <td id="LC2131" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2132" class="blob-num js-line-number" data-line-number="2132"></td>
        <td id="LC2132" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2133" class="blob-num js-line-number" data-line-number="2133"></td>
        <td id="LC2133" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**************************************</span></td>
      </tr>
      <tr>
        <td id="L2134" class="blob-num js-line-number" data-line-number="2134"></td>
        <td id="LC2134" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> **** Initial non-local germination ****</span></td>
      </tr>
      <tr>
        <td id="L2135" class="blob-num js-line-number" data-line-number="2135"></td>
        <td id="LC2135" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> **************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2136" class="blob-num js-line-number" data-line-number="2136"></td>
        <td id="LC2136" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2137" class="blob-num js-line-number" data-line-number="2137"></td>
        <td id="LC2137" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">BirthInit</span>() {</td>
      </tr>
      <tr>
        <td id="L2138" class="blob-num js-line-number" data-line-number="2138"></td>
        <td id="LC2138" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> temp1;</td>
      </tr>
      <tr>
        <td id="L2139" class="blob-num js-line-number" data-line-number="2139"></td>
        <td id="LC2139" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2140" class="blob-num js-line-number" data-line-number="2140"></td>
        <td id="LC2140" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(!_FromData){</td>
      </tr>
      <tr>
        <td id="L2141" class="blob-num js-line-number" data-line-number="2141"></td>
        <td id="LC2141" class="blob-code blob-code-inner js-file-line">        nblivetrees=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2142" class="blob-num js-line-number" data-line-number="2142"></td>
        <td id="LC2142" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2143" class="blob-num js-line-number" data-line-number="2143"></td>
        <td id="LC2143" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2144" class="blob-num js-line-number" data-line-number="2144"></td>
        <td id="LC2144" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>Initial germination<span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L2145" class="blob-num js-line-number" data-line-number="2145"></td>
        <td id="LC2145" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2146" class="blob-num js-line-number" data-line-number="2146"></td>
        <td id="LC2146" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(<span class="pl-k">int</span> spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) {                              <span class="pl-c"><span class="pl-c">/*</span> Initial condition: intial germination due to external seed rain (of s_nbext seeds for each species) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2147" class="blob-num js-line-number" data-line-number="2147"></td>
        <td id="LC2147" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2148" class="blob-num js-line-number" data-line-number="2148"></td>
        <td id="LC2148" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(<span class="pl-k">int</span> ii=<span class="pl-c1">0</span>;ii&lt;S[spp].<span class="pl-smi">s_nbext</span>;ii++){</td>
      </tr>
      <tr>
        <td id="L2149" class="blob-num js-line-number" data-line-number="2149"></td>
        <td id="LC2149" class="blob-code blob-code-inner js-file-line">            temp1 = <span class="pl-c1">genrand2i</span>()%sites;</td>
      </tr>
      <tr>
        <td id="L2150" class="blob-num js-line-number" data-line-number="2150"></td>
        <td id="LC2150" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(T[temp1].<span class="pl-smi">t_age</span>==<span class="pl-c1">0</span>) T[temp1].<span class="pl-c1">Birth</span>(S,spp,temp1);</td>
      </tr>
      <tr>
        <td id="L2151" class="blob-num js-line-number" data-line-number="2151"></td>
        <td id="LC2151" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2152" class="blob-num js-line-number" data-line-number="2152"></td>
        <td id="LC2152" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2153" class="blob-num js-line-number" data-line-number="2153"></td>
        <td id="LC2153" class="blob-code blob-code-inner js-file-line">        cout &lt;&lt; S[spp].<span class="pl-smi">s_name</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; S[spp].<span class="pl-smi">s_nbind</span> &lt;&lt;  endl;</td>
      </tr>
      <tr>
        <td id="L2154" class="blob-num js-line-number" data-line-number="2154"></td>
        <td id="LC2154" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2155" class="blob-num js-line-number" data-line-number="2155"></td>
        <td id="LC2155" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2156" class="blob-num js-line-number" data-line-number="2156"></td>
        <td id="LC2156" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2157" class="blob-num js-line-number" data-line-number="2157"></td>
        <td id="LC2157" class="blob-code blob-code-inner js-file-line">    cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span>NBTrees<span class="pl-cce">\t</span>initial<span class="pl-cce">\t</span>germination<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; nblivetrees &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L2158" class="blob-num js-line-number" data-line-number="2158"></td>
        <td id="LC2158" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2159" class="blob-num js-line-number" data-line-number="2159"></td>
        <td id="LC2159" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L2160" class="blob-num js-line-number" data-line-number="2160"></td>
        <td id="LC2160" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI_Barrier</span>(MPI_COMM_WORLD);</td>
      </tr>
      <tr>
        <td id="L2161" class="blob-num js-line-number" data-line-number="2161"></td>
        <td id="LC2161" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2162" class="blob-num js-line-number" data-line-number="2162"></td>
        <td id="LC2162" class="blob-code blob-code-inner js-file-line">    cout&lt;&lt;endl;</td>
      </tr>
      <tr>
        <td id="L2163" class="blob-num js-line-number" data-line-number="2163"></td>
        <td id="LC2163" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2164" class="blob-num js-line-number" data-line-number="2164"></td>
        <td id="LC2164" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2165" class="blob-num js-line-number" data-line-number="2165"></td>
        <td id="LC2165" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2166" class="blob-num js-line-number" data-line-number="2166"></td>
        <td id="LC2166" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>###############################################</span></td>
      </tr>
      <tr>
        <td id="L2167" class="blob-num js-line-number" data-line-number="2167"></td>
        <td id="LC2167" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###############################################</span></td>
      </tr>
      <tr>
        <td id="L2168" class="blob-num js-line-number" data-line-number="2168"></td>
        <td id="LC2168" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> #######  Evolution at each timestep    ########</span></td>
      </tr>
      <tr>
        <td id="L2169" class="blob-num js-line-number" data-line-number="2169"></td>
        <td id="LC2169" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###############################################</span></td>
      </tr>
      <tr>
        <td id="L2170" class="blob-num js-line-number" data-line-number="2170"></td>
        <td id="LC2170" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###############################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2171" class="blob-num js-line-number" data-line-number="2171"></td>
        <td id="LC2171" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2172" class="blob-num js-line-number" data-line-number="2172"></td>
        <td id="LC2172" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Evolution</span>() {</td>
      </tr>
      <tr>
        <td id="L2173" class="blob-num js-line-number" data-line-number="2173"></td>
        <td id="LC2173" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2174" class="blob-num js-line-number" data-line-number="2174"></td>
        <td id="LC2174" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">UpdateField</span>();                                          <span class="pl-c"><span class="pl-c">/*</span> Update light fields and seed banks <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2175" class="blob-num js-line-number" data-line-number="2175"></td>
        <td id="LC2175" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">UpdateTree</span>();                                           <span class="pl-c"><span class="pl-c">/*</span> Update trees <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2176" class="blob-num js-line-number" data-line-number="2176"></td>
        <td id="LC2176" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_BASICTREEFALL) <span class="pl-c1">UpdateTreefall</span>();                    <span class="pl-c"><span class="pl-c">/*</span> Compute and distribute Treefall events <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2177" class="blob-num js-line-number" data-line-number="2177"></td>
        <td id="LC2177" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">Average</span>();                                              <span class="pl-c"><span class="pl-c">/*</span> Compute averages for outputs <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2178" class="blob-num js-line-number" data-line-number="2178"></td>
        <td id="LC2178" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">OutputField</span>();                                          <span class="pl-c"><span class="pl-c">/*</span> Output the statistics <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2179" class="blob-num js-line-number" data-line-number="2179"></td>
        <td id="LC2179" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2180" class="blob-num js-line-number" data-line-number="2180"></td>
        <td id="LC2180" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2181" class="blob-num js-line-number" data-line-number="2181"></td>
        <td id="LC2181" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2182" class="blob-num js-line-number" data-line-number="2182"></td>
        <td id="LC2182" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>##################################</span></td>
      </tr>
      <tr>
        <td id="L2183" class="blob-num js-line-number" data-line-number="2183"></td>
        <td id="LC2183" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####    Compute field LAI 3D    ###</span></td>
      </tr>
      <tr>
        <td id="L2184" class="blob-num js-line-number" data-line-number="2184"></td>
        <td id="LC2184" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####    Compute field Seed     ####</span></td>
      </tr>
      <tr>
        <td id="L2185" class="blob-num js-line-number" data-line-number="2185"></td>
        <td id="LC2185" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ##################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2186" class="blob-num js-line-number" data-line-number="2186"></td>
        <td id="LC2186" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2187" class="blob-num js-line-number" data-line-number="2187"></td>
        <td id="LC2187" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">UpdateField</span>() {</td>
      </tr>
      <tr>
        <td id="L2188" class="blob-num js-line-number" data-line-number="2188"></td>
        <td id="LC2188" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2189" class="blob-num js-line-number" data-line-number="2189"></td>
        <td id="LC2189" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> site,haut,spp;</td>
      </tr>
      <tr>
        <td id="L2190" class="blob-num js-line-number" data-line-number="2190"></td>
        <td id="LC2190" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2191" class="blob-num js-line-number" data-line-number="2191"></td>
        <td id="LC2191" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>**  Compute Field LAI3D  **<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2192" class="blob-num js-line-number" data-line-number="2192"></td>
        <td id="LC2192" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>***************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2193" class="blob-num js-line-number" data-line-number="2193"></td>
        <td id="LC2193" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2194" class="blob-num js-line-number" data-line-number="2194"></td>
        <td id="LC2194" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2195" class="blob-num js-line-number" data-line-number="2195"></td>
        <td id="LC2195" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L2196" class="blob-num js-line-number" data-line-number="2196"></td>
        <td id="LC2196" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Reinitialize field LAI3D <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2197" class="blob-num js-line-number" data-line-number="2197"></td>
        <td id="LC2197" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(i=<span class="pl-c1">0</span>;i&lt;<span class="pl-c1">2</span>;i++)</td>
      </tr>
      <tr>
        <td id="L2198" class="blob-num js-line-number" data-line-number="2198"></td>
        <td id="LC2198" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(haut=<span class="pl-c1">0</span>;haut&lt;(HEIGHT+<span class="pl-c1">1</span>);haut++)</td>
      </tr>
      <tr>
        <td id="L2199" class="blob-num js-line-number" data-line-number="2199"></td>
        <td id="LC2199" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;<span class="pl-c1">2</span>*SBORD;site++)</td>
      </tr>
      <tr>
        <td id="L2200" class="blob-num js-line-number" data-line-number="2200"></td>
        <td id="LC2200" class="blob-code blob-code-inner js-file-line">                LAIc[i][haut][site] = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2201" class="blob-num js-line-number" data-line-number="2201"></td>
        <td id="LC2201" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2202" class="blob-num js-line-number" data-line-number="2202"></td>
        <td id="LC2202" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2203" class="blob-num js-line-number" data-line-number="2203"></td>
        <td id="LC2203" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> sbsite;</td>
      </tr>
      <tr>
        <td id="L2204" class="blob-num js-line-number" data-line-number="2204"></td>
        <td id="LC2204" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2205" class="blob-num js-line-number" data-line-number="2205"></td>
        <td id="LC2205" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(haut=<span class="pl-c1">0</span>;haut&lt;(HEIGHT+<span class="pl-c1">1</span>);haut++)</td>
      </tr>
      <tr>
        <td id="L2206" class="blob-num js-line-number" data-line-number="2206"></td>
        <td id="LC2206" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(sbsite=<span class="pl-c1">0</span>;sbsite&lt;sites+<span class="pl-c1">2</span>*SBORD;sbsite++)</td>
      </tr>
      <tr>
        <td id="L2207" class="blob-num js-line-number" data-line-number="2207"></td>
        <td id="LC2207" class="blob-code blob-code-inner js-file-line">            LAI3D[haut][sbsite] = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L2208" class="blob-num js-line-number" data-line-number="2208"></td>
        <td id="LC2208" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2209" class="blob-num js-line-number" data-line-number="2209"></td>
        <td id="LC2209" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++)                                    <span class="pl-c"><span class="pl-c">/*</span> Each tree contribues to LAI3D <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2210" class="blob-num js-line-number" data-line-number="2210"></td>
        <td id="LC2210" class="blob-code blob-code-inner js-file-line">        T[site].<span class="pl-c1">CalcLAI</span>();</td>
      </tr>
      <tr>
        <td id="L2211" class="blob-num js-line-number" data-line-number="2211"></td>
        <td id="LC2211" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2212" class="blob-num js-line-number" data-line-number="2212"></td>
        <td id="LC2212" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(haut=HEIGHT;haut&gt;<span class="pl-c1">0</span>;haut--){                                 <span class="pl-c"><span class="pl-c">/*</span> LAI is computed by summing LAI from the canopy top to the ground <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2213" class="blob-num js-line-number" data-line-number="2213"></td>
        <td id="LC2213" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++){</td>
      </tr>
      <tr>
        <td id="L2214" class="blob-num js-line-number" data-line-number="2214"></td>
        <td id="LC2214" class="blob-code blob-code-inner js-file-line">            sbsite=site+SBORD;</td>
      </tr>
      <tr>
        <td id="L2215" class="blob-num js-line-number" data-line-number="2215"></td>
        <td id="LC2215" class="blob-code blob-code-inner js-file-line">            LAI3D[haut-<span class="pl-c1">1</span>][sbsite] += LAI3D[haut][sbsite];</td>
      </tr>
      <tr>
        <td id="L2216" class="blob-num js-line-number" data-line-number="2216"></td>
        <td id="LC2216" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span> (LAI3D[haut-<span class="pl-c1">1</span>][sbsite] &lt; <span class="pl-c1">0</span>) T[site].<span class="pl-c1">OutputTreeStandard</span>();</td>
      </tr>
      <tr>
        <td id="L2217" class="blob-num js-line-number" data-line-number="2217"></td>
        <td id="LC2217" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2218" class="blob-num js-line-number" data-line-number="2218"></td>
        <td id="LC2218" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2219" class="blob-num js-line-number" data-line-number="2219"></td>
        <td id="LC2219" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2220" class="blob-num js-line-number" data-line-number="2220"></td>
        <td id="LC2220" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2221" class="blob-num js-line-number" data-line-number="2221"></td>
        <td id="LC2221" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2222" class="blob-num js-line-number" data-line-number="2222"></td>
        <td id="LC2222" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>  for(site=0;site&lt;sites;site++)       Trunks shade the cells in which they are</span></td>
      </tr>
      <tr>
        <td id="L2223" class="blob-num js-line-number" data-line-number="2223"></td>
        <td id="LC2223" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     T[site].TrunkLAI();<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2224" class="blob-num js-line-number" data-line-number="2224"></td>
        <td id="LC2224" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2225" class="blob-num js-line-number" data-line-number="2225"></td>
        <td id="LC2225" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2226" class="blob-num js-line-number" data-line-number="2226"></td>
        <td id="LC2226" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L2227" class="blob-num js-line-number" data-line-number="2227"></td>
        <td id="LC2227" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Communicate border of field <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2228" class="blob-num js-line-number" data-line-number="2228"></td>
        <td id="LC2228" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>MPI_ShareField(LAI3D,LAIc,2*SBORD);</span></td>
      </tr>
      <tr>
        <td id="L2229" class="blob-num js-line-number" data-line-number="2229"></td>
        <td id="LC2229" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     This MPI command no longer exists in openMPI</span></td>
      </tr>
      <tr>
        <td id="L2230" class="blob-num js-line-number" data-line-number="2230"></td>
        <td id="LC2230" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     Action 20/01/2016 TODO: FIX THIS <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2231" class="blob-num js-line-number" data-line-number="2231"></td>
        <td id="LC2231" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI_ShareField</span>(LAI3D,LAIc,<span class="pl-c1">2</span>*SBORD);</td>
      </tr>
      <tr>
        <td id="L2232" class="blob-num js-line-number" data-line-number="2232"></td>
        <td id="LC2232" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(haut=<span class="pl-c1">0</span>;haut&lt;(HEIGHT+<span class="pl-c1">1</span>);haut++){</td>
      </tr>
      <tr>
        <td id="L2233" class="blob-num js-line-number" data-line-number="2233"></td>
        <td id="LC2233" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span> Add border effects in local fields <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2234" class="blob-num js-line-number" data-line-number="2234"></td>
        <td id="LC2234" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(mpi_rank)</td>
      </tr>
      <tr>
        <td id="L2235" class="blob-num js-line-number" data-line-number="2235"></td>
        <td id="LC2235" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;<span class="pl-c1">2</span>*SBORD;site++)</td>
      </tr>
      <tr>
        <td id="L2236" class="blob-num js-line-number" data-line-number="2236"></td>
        <td id="LC2236" class="blob-code blob-code-inner js-file-line">                LAI3D[haut][site] += LAIc[<span class="pl-c1">0</span>][haut][site];</td>
      </tr>
      <tr>
        <td id="L2237" class="blob-num js-line-number" data-line-number="2237"></td>
        <td id="LC2237" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(mpi_rank&lt;mpi_size-<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L2238" class="blob-num js-line-number" data-line-number="2238"></td>
        <td id="LC2238" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;<span class="pl-c1">2</span>*SBORD;site++)</td>
      </tr>
      <tr>
        <td id="L2239" class="blob-num js-line-number" data-line-number="2239"></td>
        <td id="LC2239" class="blob-code blob-code-inner js-file-line">                LAI3D[haut][site+sites] += LAIc[<span class="pl-c1">1</span>][haut][site];</td>
      </tr>
      <tr>
        <td id="L2240" class="blob-num js-line-number" data-line-number="2240"></td>
        <td id="LC2240" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2241" class="blob-num js-line-number" data-line-number="2241"></td>
        <td id="LC2241" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2242" class="blob-num js-line-number" data-line-number="2242"></td>
        <td id="LC2242" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2243" class="blob-num js-line-number" data-line-number="2243"></td>
        <td id="LC2243" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>** Evolution of the field Seed *<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2244" class="blob-num js-line-number" data-line-number="2244"></td>
        <td id="LC2244" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>*******************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2245" class="blob-num js-line-number" data-line-number="2245"></td>
        <td id="LC2245" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2246" class="blob-num js-line-number" data-line-number="2246"></td>
        <td id="LC2246" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Pass seeds across processors =&gt; two more fields to be communicated between n.n. (nearest neighbor) processors.</span></td>
      </tr>
      <tr>
        <td id="L2247" class="blob-num js-line-number" data-line-number="2247"></td>
        <td id="LC2247" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     NB: dispersal distance is bounded by the value of &#39;rows&#39;.</span></td>
      </tr>
      <tr>
        <td id="L2248" class="blob-num js-line-number" data-line-number="2248"></td>
        <td id="LC2248" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     At least 99 % of the seeds should be dispersed within the stripe or on the n.n. stripe.</span></td>
      </tr>
      <tr>
        <td id="L2249" class="blob-num js-line-number" data-line-number="2249"></td>
        <td id="LC2249" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     Hence rows &gt; 4.7*max(dist_moy_dissemination),for an exponential dispersal kernel.<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2250" class="blob-num js-line-number" data-line-number="2250"></td>
        <td id="LC2250" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2251" class="blob-num js-line-number" data-line-number="2251"></td>
        <td id="LC2251" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++)                                       <span class="pl-c"><span class="pl-c">/*</span> disperse seeds produced by mature trees <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2252" class="blob-num js-line-number" data-line-number="2252"></td>
        <td id="LC2252" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(T[site].<span class="pl-smi">t_age</span>)</td>
      </tr>
      <tr>
        <td id="L2253" class="blob-num js-line-number" data-line-number="2253"></td>
        <td id="LC2253" class="blob-code blob-code-inner js-file-line">            T[site].<span class="pl-c1">DisperseSeed</span>();</td>
      </tr>
      <tr>
        <td id="L2254" class="blob-num js-line-number" data-line-number="2254"></td>
        <td id="LC2254" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2255" class="blob-num js-line-number" data-line-number="2255"></td>
        <td id="LC2255" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI                                                              <span class="pl-c"><span class="pl-c">/*</span> Seeds passed across processors <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2256" class="blob-num js-line-number" data-line-number="2256"></td>
        <td id="LC2256" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) {</td>
      </tr>
      <tr>
        <td id="L2257" class="blob-num js-line-number" data-line-number="2257"></td>
        <td id="LC2257" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_ShareSeed</span>(S[spp].<span class="pl-smi">s_Gc</span>,sites);</td>
      </tr>
      <tr>
        <td id="L2258" class="blob-num js-line-number" data-line-number="2258"></td>
        <td id="LC2258" class="blob-code blob-code-inner js-file-line">        S[spp].<span class="pl-c1">AddSeed</span>();</td>
      </tr>
      <tr>
        <td id="L2259" class="blob-num js-line-number" data-line-number="2259"></td>
        <td id="LC2259" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2260" class="blob-num js-line-number" data-line-number="2260"></td>
        <td id="LC2260" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2261" class="blob-num js-line-number" data-line-number="2261"></td>
        <td id="LC2261" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2262" class="blob-num js-line-number" data-line-number="2262"></td>
        <td id="LC2262" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_SEEDTRADEOFF){</td>
      </tr>
      <tr>
        <td id="L2263" class="blob-num js-line-number" data-line-number="2263"></td>
        <td id="LC2263" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(!mpi_rank || S[spp].<span class="pl-smi">s_nbind</span>*sites &gt; <span class="pl-c1">50000</span>){</td>
      </tr>
      <tr>
        <td id="L2264" class="blob-num js-line-number" data-line-number="2264"></td>
        <td id="LC2264" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) {                              <span class="pl-c"><span class="pl-c">/*</span> External seed rain: constant flux from the metacommunity <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2265" class="blob-num js-line-number" data-line-number="2265"></td>
        <td id="LC2265" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">for</span>(<span class="pl-k">int</span> ii=<span class="pl-c1">0</span>;ii&lt;S[spp].<span class="pl-smi">s_nbext</span>;ii++){</td>
      </tr>
      <tr>
        <td id="L2266" class="blob-num js-line-number" data-line-number="2266"></td>
        <td id="LC2266" class="blob-code blob-code-inner js-file-line">                    site = <span class="pl-c1">genrand2i</span>()%sites;</td>
      </tr>
      <tr>
        <td id="L2267" class="blob-num js-line-number" data-line-number="2267"></td>
        <td id="LC2267" class="blob-code blob-code-inner js-file-line">                    S[spp].<span class="pl-smi">s_Seed</span>[site]++;</td>
      </tr>
      <tr>
        <td id="L2268" class="blob-num js-line-number" data-line-number="2268"></td>
        <td id="LC2268" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L2269" class="blob-num js-line-number" data-line-number="2269"></td>
        <td id="LC2269" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2270" class="blob-num js-line-number" data-line-number="2270"></td>
        <td id="LC2270" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2271" class="blob-num js-line-number" data-line-number="2271"></td>
        <td id="LC2271" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2272" class="blob-num js-line-number" data-line-number="2272"></td>
        <td id="LC2272" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L2273" class="blob-num js-line-number" data-line-number="2273"></td>
        <td id="LC2273" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(!mpi_rank || S[spp].<span class="pl-smi">s_nbind</span>*sites &gt; <span class="pl-c1">50000</span>){</td>
      </tr>
      <tr>
        <td id="L2274" class="blob-num js-line-number" data-line-number="2274"></td>
        <td id="LC2274" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) {                              <span class="pl-c"><span class="pl-c">/*</span> External seed rain: constant flux from the metacommunity <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2275" class="blob-num js-line-number" data-line-number="2275"></td>
        <td id="LC2275" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">for</span>(<span class="pl-k">int</span> ii=<span class="pl-c1">0</span>;ii&lt;S[spp].<span class="pl-smi">s_nbext</span>;ii++){</td>
      </tr>
      <tr>
        <td id="L2276" class="blob-num js-line-number" data-line-number="2276"></td>
        <td id="LC2276" class="blob-code blob-code-inner js-file-line">                    site = <span class="pl-c1">genrand2i</span>()%sites;</td>
      </tr>
      <tr>
        <td id="L2277" class="blob-num js-line-number" data-line-number="2277"></td>
        <td id="LC2277" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span>(S[spp].<span class="pl-smi">s_Seed</span>[site]!=<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L2278" class="blob-num js-line-number" data-line-number="2278"></td>
        <td id="LC2278" class="blob-code blob-code-inner js-file-line">                        S[spp].<span class="pl-smi">s_Seed</span>[site] = <span class="pl-c1">1</span>; <span class="pl-c"><span class="pl-c">/*</span> check for optimization <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2279" class="blob-num js-line-number" data-line-number="2279"></td>
        <td id="LC2279" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L2280" class="blob-num js-line-number" data-line-number="2280"></td>
        <td id="LC2280" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2281" class="blob-num js-line-number" data-line-number="2281"></td>
        <td id="LC2281" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2282" class="blob-num js-line-number" data-line-number="2282"></td>
        <td id="LC2282" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2283" class="blob-num js-line-number" data-line-number="2283"></td>
        <td id="LC2283" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2284" class="blob-num js-line-number" data-line-number="2284"></td>
        <td id="LC2284" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2285" class="blob-num js-line-number" data-line-number="2285"></td>
        <td id="LC2285" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L2286" class="blob-num js-line-number" data-line-number="2286"></td>
        <td id="LC2286" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI_Barrier</span>(MPI_COMM_WORLD);</td>
      </tr>
      <tr>
        <td id="L2287" class="blob-num js-line-number" data-line-number="2287"></td>
        <td id="LC2287" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2288" class="blob-num js-line-number" data-line-number="2288"></td>
        <td id="LC2288" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2289" class="blob-num js-line-number" data-line-number="2289"></td>
        <td id="LC2289" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_NDD){</td>
      </tr>
      <tr>
        <td id="L2290" class="blob-num js-line-number" data-line-number="2290"></td>
        <td id="LC2290" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>** Evolution of the field NDDfield *<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2291" class="blob-num js-line-number" data-line-number="2291"></td>
        <td id="LC2291" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2292" class="blob-num js-line-number" data-line-number="2292"></td>
        <td id="LC2292" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">int</span> xx,yy,row0,col0;</td>
      </tr>
      <tr>
        <td id="L2293" class="blob-num js-line-number" data-line-number="2293"></td>
        <td id="LC2293" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">float</span> R=<span class="pl-c1">15</span>;</td>
      </tr>
      <tr>
        <td id="L2294" class="blob-num js-line-number" data-line-number="2294"></td>
        <td id="LC2294" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++) {</td>
      </tr>
      <tr>
        <td id="L2295" class="blob-num js-line-number" data-line-number="2295"></td>
        <td id="LC2295" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) {</td>
      </tr>
      <tr>
        <td id="L2296" class="blob-num js-line-number" data-line-number="2296"></td>
        <td id="LC2296" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span> (iter == <span class="pl-c1">int</span>(nbiter/<span class="pl-c1">10</span>))  {</td>
      </tr>
      <tr>
        <td id="L2297" class="blob-num js-line-number" data-line-number="2297"></td>
        <td id="LC2297" class="blob-code blob-code-inner js-file-line">                    output[<span class="pl-c1">34</span>]&lt;&lt; T[site].<span class="pl-smi">t_NDDfield</span>[spp] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> ;</td>
      </tr>
      <tr>
        <td id="L2298" class="blob-num js-line-number" data-line-number="2298"></td>
        <td id="LC2298" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L2299" class="blob-num js-line-number" data-line-number="2299"></td>
        <td id="LC2299" class="blob-code blob-code-inner js-file-line">                T[site].<span class="pl-smi">t_NDDfield</span>[spp]=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2300" class="blob-num js-line-number" data-line-number="2300"></td>
        <td id="LC2300" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2301" class="blob-num js-line-number" data-line-number="2301"></td>
        <td id="LC2301" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">34</span>]&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2302" class="blob-num js-line-number" data-line-number="2302"></td>
        <td id="LC2302" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2303" class="blob-num js-line-number" data-line-number="2303"></td>
        <td id="LC2303" class="blob-code blob-code-inner js-file-line">            row0=T[site].<span class="pl-smi">t_site</span>/cols;</td>
      </tr>
      <tr>
        <td id="L2304" class="blob-num js-line-number" data-line-number="2304"></td>
        <td id="LC2304" class="blob-code blob-code-inner js-file-line">            col0=T[site].<span class="pl-smi">t_site</span>%cols;</td>
      </tr>
      <tr>
        <td id="L2305" class="blob-num js-line-number" data-line-number="2305"></td>
        <td id="LC2305" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(<span class="pl-k">int</span> col=<span class="pl-c1">max</span>(<span class="pl-c1">0</span>,col0-R);col&lt;=<span class="pl-c1">min</span>(cols-<span class="pl-c1">1</span>,col0+R);col++) {</td>
      </tr>
      <tr>
        <td id="L2306" class="blob-num js-line-number" data-line-number="2306"></td>
        <td id="LC2306" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">for</span>(<span class="pl-k">int</span> row=<span class="pl-c1">max</span>(<span class="pl-c1">0</span>,row0-R);row&lt;=<span class="pl-c1">min</span>(rows-<span class="pl-c1">1</span>,row0+R);row++) {                   <span class="pl-c"><span class="pl-c">/*</span> loop over the neighbourhood <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2307" class="blob-num js-line-number" data-line-number="2307"></td>
        <td id="LC2307" class="blob-code blob-code-inner js-file-line">                    xx=col0-col;</td>
      </tr>
      <tr>
        <td id="L2308" class="blob-num js-line-number" data-line-number="2308"></td>
        <td id="LC2308" class="blob-code blob-code-inner js-file-line">                    yy=row0-row;</td>
      </tr>
      <tr>
        <td id="L2309" class="blob-num js-line-number" data-line-number="2309"></td>
        <td id="LC2309" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">float</span> d=<span class="pl-c1">sqrt</span>(xx*xx+yy*yy);</td>
      </tr>
      <tr>
        <td id="L2310" class="blob-num js-line-number" data-line-number="2310"></td>
        <td id="LC2310" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span>((d&lt;=R)&amp;&amp;(d&gt;<span class="pl-c1">0</span>))  {                                             <span class="pl-c"><span class="pl-c">/*</span> is the voxel within the neighbourhood?  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2311" class="blob-num js-line-number" data-line-number="2311"></td>
        <td id="LC2311" class="blob-code blob-code-inner js-file-line">                        <span class="pl-k">int</span> j=cols*row+col;</td>
      </tr>
      <tr>
        <td id="L2312" class="blob-num js-line-number" data-line-number="2312"></td>
        <td id="LC2312" class="blob-code blob-code-inner js-file-line">                        <span class="pl-k">if</span>(T[j].<span class="pl-smi">t_age</span>) T[site].<span class="pl-smi">t_NDDfield</span>[T[j].<span class="pl-smi">t_sp_lab</span>]+= PI* T[j].<span class="pl-smi">t_dbh</span> * T[j].<span class="pl-smi">t_dbh</span>*<span class="pl-c1">0.25</span>/d;</td>
      </tr>
      <tr>
        <td id="L2313" class="blob-num js-line-number" data-line-number="2313"></td>
        <td id="LC2313" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L2314" class="blob-num js-line-number" data-line-number="2314"></td>
        <td id="LC2314" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L2315" class="blob-num js-line-number" data-line-number="2315"></td>
        <td id="LC2315" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2316" class="blob-num js-line-number" data-line-number="2316"></td>
        <td id="LC2316" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2317" class="blob-num js-line-number" data-line-number="2317"></td>
        <td id="LC2317" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2318" class="blob-num js-line-number" data-line-number="2318"></td>
        <td id="LC2318" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2319" class="blob-num js-line-number" data-line-number="2319"></td>
        <td id="LC2319" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2320" class="blob-num js-line-number" data-line-number="2320"></td>
        <td id="LC2320" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2321" class="blob-num js-line-number" data-line-number="2321"></td>
        <td id="LC2321" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>##############################</span></td>
      </tr>
      <tr>
        <td id="L2322" class="blob-num js-line-number" data-line-number="2322"></td>
        <td id="LC2322" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####	Birth, Growth       ####</span></td>
      </tr>
      <tr>
        <td id="L2323" class="blob-num js-line-number" data-line-number="2323"></td>
        <td id="LC2323" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ####	and death of trees  ####</span></td>
      </tr>
      <tr>
        <td id="L2324" class="blob-num js-line-number" data-line-number="2324"></td>
        <td id="LC2324" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ##############################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2325" class="blob-num js-line-number" data-line-number="2325"></td>
        <td id="LC2325" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2326" class="blob-num js-line-number" data-line-number="2326"></td>
        <td id="LC2326" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">UpdateTree</span>() {</td>
      </tr>
      <tr>
        <td id="L2327" class="blob-num js-line-number" data-line-number="2327"></td>
        <td id="LC2327" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2328" class="blob-num js-line-number" data-line-number="2328"></td>
        <td id="LC2328" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> site,spp,iii;</td>
      </tr>
      <tr>
        <td id="L2329" class="blob-num js-line-number" data-line-number="2329"></td>
        <td id="LC2329" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> flux;</td>
      </tr>
      <tr>
        <td id="L2330" class="blob-num js-line-number" data-line-number="2330"></td>
        <td id="LC2330" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2331" class="blob-num js-line-number" data-line-number="2331"></td>
        <td id="LC2331" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_SEEDTRADEOFF){</td>
      </tr>
      <tr>
        <td id="L2332" class="blob-num js-line-number" data-line-number="2332"></td>
        <td id="LC2332" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++) {                                             <span class="pl-c"><span class="pl-c">/*</span>**** Local germination ****<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2333" class="blob-num js-line-number" data-line-number="2333"></td>
        <td id="LC2333" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(T[site].<span class="pl-smi">t_age</span> == <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L2334" class="blob-num js-line-number" data-line-number="2334"></td>
        <td id="LC2334" class="blob-code blob-code-inner js-file-line">                iii=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2335" class="blob-num js-line-number" data-line-number="2335"></td>
        <td id="LC2335" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">float</span> tot=<span class="pl-c1">0</span>;                                                        <span class="pl-c"><span class="pl-c">/*</span> _SEEDTRADEOFF <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2336" class="blob-num js-line-number" data-line-number="2336"></td>
        <td id="LC2336" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++){                                       <span class="pl-c"><span class="pl-c">/*</span> lists all the species with a seed present at given site... <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2337" class="blob-num js-line-number" data-line-number="2337"></td>
        <td id="LC2337" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span>(S[spp].<span class="pl-smi">s_Seed</span>[site]) {</td>
      </tr>
      <tr>
        <td id="L2338" class="blob-num js-line-number" data-line-number="2338"></td>
        <td id="LC2338" class="blob-code blob-code-inner js-file-line">                        SPECIES_GERM[iii]=spp;</td>
      </tr>
      <tr>
        <td id="L2339" class="blob-num js-line-number" data-line-number="2339"></td>
        <td id="LC2339" class="blob-code blob-code-inner js-file-line">                        <span class="pl-k">if</span>(_NDD){</td>
      </tr>
      <tr>
        <td id="L2340" class="blob-num js-line-number" data-line-number="2340"></td>
        <td id="LC2340" class="blob-code blob-code-inner js-file-line">                            <span class="pl-k">float</span> p=S[spp].<span class="pl-smi">s_Seed</span>[site]*S[spp].<span class="pl-smi">s_seedmass</span>/(T[site].<span class="pl-smi">t_NDDfield</span>[spp]*<span class="pl-c1">10000</span>+<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2341" class="blob-num js-line-number" data-line-number="2341"></td>
        <td id="LC2341" class="blob-code blob-code-inner js-file-line">                            PROB_S[iii]=tot+ p;</td>
      </tr>
      <tr>
        <td id="L2342" class="blob-num js-line-number" data-line-number="2342"></td>
        <td id="LC2342" class="blob-code blob-code-inner js-file-line">                            tot+=p;</td>
      </tr>
      <tr>
        <td id="L2343" class="blob-num js-line-number" data-line-number="2343"></td>
        <td id="LC2343" class="blob-code blob-code-inner js-file-line">                        }</td>
      </tr>
      <tr>
        <td id="L2344" class="blob-num js-line-number" data-line-number="2344"></td>
        <td id="LC2344" class="blob-code blob-code-inner js-file-line">                        <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L2345" class="blob-num js-line-number" data-line-number="2345"></td>
        <td id="LC2345" class="blob-code blob-code-inner js-file-line">                            PROB_S[iii]=tot+ S[spp].<span class="pl-smi">s_Seed</span>[site]*S[spp].<span class="pl-smi">s_seedmass</span>;</td>
      </tr>
      <tr>
        <td id="L2346" class="blob-num js-line-number" data-line-number="2346"></td>
        <td id="LC2346" class="blob-code blob-code-inner js-file-line">                            tot+=S[spp].<span class="pl-smi">s_Seed</span>[site]*S[spp].<span class="pl-smi">s_seedmass</span>;</td>
      </tr>
      <tr>
        <td id="L2347" class="blob-num js-line-number" data-line-number="2347"></td>
        <td id="LC2347" class="blob-code blob-code-inner js-file-line">                        }</td>
      </tr>
      <tr>
        <td id="L2348" class="blob-num js-line-number" data-line-number="2348"></td>
        <td id="LC2348" class="blob-code blob-code-inner js-file-line">                        iii++;</td>
      </tr>
      <tr>
        <td id="L2349" class="blob-num js-line-number" data-line-number="2349"></td>
        <td id="LC2349" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L2350" class="blob-num js-line-number" data-line-number="2350"></td>
        <td id="LC2350" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L2351" class="blob-num js-line-number" data-line-number="2351"></td>
        <td id="LC2351" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(iii) {                                                           <span class="pl-c"><span class="pl-c">/*</span> ... and then randomly select one of these species <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2352" class="blob-num js-line-number" data-line-number="2352"></td>
        <td id="LC2352" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">double</span> p=<span class="pl-c1">genrand2</span>();                                    <span class="pl-c"><span class="pl-c">/*</span> if SEEDTRADEOFF is defined, probability of species recruit are proportional to the number of seeds time the seed mass, if NDD is also defined the probablility is also inversly proportional to the species NDDfield term at that site <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2353" class="blob-num js-line-number" data-line-number="2353"></td>
        <td id="LC2353" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">float</span> itot=<span class="pl-c1">1</span>/tot;</td>
      </tr>
      <tr>
        <td id="L2354" class="blob-num js-line-number" data-line-number="2354"></td>
        <td id="LC2354" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">int</span> s=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2355" class="blob-num js-line-number" data-line-number="2355"></td>
        <td id="LC2355" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">while</span> (p&gt;PROB_S[s]*itot) {s++;}</td>
      </tr>
      <tr>
        <td id="L2356" class="blob-num js-line-number" data-line-number="2356"></td>
        <td id="LC2356" class="blob-code blob-code-inner js-file-line">                    spp=SPECIES_GERM[s];</td>
      </tr>
      <tr>
        <td id="L2357" class="blob-num js-line-number" data-line-number="2357"></td>
        <td id="LC2357" class="blob-code blob-code-inner js-file-line">                    flux = Wmax*<span class="pl-c1">exp</span>(-<span class="pl-c1">flor</span>(LAI3D[<span class="pl-c1">0</span>][site+SBORD])*klight);</td>
      </tr>
      <tr>
        <td id="L2358" class="blob-num js-line-number" data-line-number="2358"></td>
        <td id="LC2358" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span>(flux&gt;(S[spp].<span class="pl-smi">s_LCP</span>)){</td>
      </tr>
      <tr>
        <td id="L2359" class="blob-num js-line-number" data-line-number="2359"></td>
        <td id="LC2359" class="blob-code blob-code-inner js-file-line">                        <span class="pl-c"><span class="pl-c">/*</span> If enough light, germination, initialization of NPP (LCP is the species light compensation point<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2360" class="blob-num js-line-number" data-line-number="2360"></td>
        <td id="LC2360" class="blob-code blob-code-inner js-file-line">                        <span class="pl-c"><span class="pl-c">/*</span> here, light is the sole environmental resources tested as a limiting factor for germination, but we should think about adding nutrients (N,P) and water conditions... <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2361" class="blob-num js-line-number" data-line-number="2361"></td>
        <td id="LC2361" class="blob-code blob-code-inner js-file-line">                        T[site].<span class="pl-c1">Birth</span>(S,spp,site);</td>
      </tr>
      <tr>
        <td id="L2362" class="blob-num js-line-number" data-line-number="2362"></td>
        <td id="LC2362" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L2363" class="blob-num js-line-number" data-line-number="2363"></td>
        <td id="LC2363" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L2364" class="blob-num js-line-number" data-line-number="2364"></td>
        <td id="LC2364" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2365" class="blob-num js-line-number" data-line-number="2365"></td>
        <td id="LC2365" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2366" class="blob-num js-line-number" data-line-number="2366"></td>
        <td id="LC2366" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2367" class="blob-num js-line-number" data-line-number="2367"></td>
        <td id="LC2367" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L2368" class="blob-num js-line-number" data-line-number="2368"></td>
        <td id="LC2368" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2369" class="blob-num js-line-number" data-line-number="2369"></td>
        <td id="LC2369" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++) {                                     <span class="pl-c"><span class="pl-c">/*</span>**** Local germination ****<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2370" class="blob-num js-line-number" data-line-number="2370"></td>
        <td id="LC2370" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(T[site].<span class="pl-smi">t_age</span> == <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L2371" class="blob-num js-line-number" data-line-number="2371"></td>
        <td id="LC2371" class="blob-code blob-code-inner js-file-line">                iii=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2372" class="blob-num js-line-number" data-line-number="2372"></td>
        <td id="LC2372" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++){                               <span class="pl-c"><span class="pl-c">/*</span> lists all the species with a seed present at given site... <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2373" class="blob-num js-line-number" data-line-number="2373"></td>
        <td id="LC2373" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span>(S[spp].<span class="pl-smi">s_Seed</span>[site]) {</td>
      </tr>
      <tr>
        <td id="L2374" class="blob-num js-line-number" data-line-number="2374"></td>
        <td id="LC2374" class="blob-code blob-code-inner js-file-line">                        SPECIES_GERM[iii]=spp;</td>
      </tr>
      <tr>
        <td id="L2375" class="blob-num js-line-number" data-line-number="2375"></td>
        <td id="LC2375" class="blob-code blob-code-inner js-file-line">                        iii++;</td>
      </tr>
      <tr>
        <td id="L2376" class="blob-num js-line-number" data-line-number="2376"></td>
        <td id="LC2376" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L2377" class="blob-num js-line-number" data-line-number="2377"></td>
        <td id="LC2377" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L2378" class="blob-num js-line-number" data-line-number="2378"></td>
        <td id="LC2378" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(iii) {                                                   <span class="pl-c"><span class="pl-c">/*</span> ... and then randomly select one of these species <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2379" class="blob-num js-line-number" data-line-number="2379"></td>
        <td id="LC2379" class="blob-code blob-code-inner js-file-line">                    spp = SPECIES_GERM[<span class="pl-c1">rand</span>()%iii];</td>
      </tr>
      <tr>
        <td id="L2380" class="blob-num js-line-number" data-line-number="2380"></td>
        <td id="LC2380" class="blob-code blob-code-inner js-file-line">                    <span class="pl-c"><span class="pl-c">/*</span> otherwise all species with seeds present are equiprobable <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2381" class="blob-num js-line-number" data-line-number="2381"></td>
        <td id="LC2381" class="blob-code blob-code-inner js-file-line">                    flux = Wmax*<span class="pl-c1">exp</span>(-<span class="pl-c1">flor</span>(LAI3D[<span class="pl-c1">0</span>][site+SBORD])*klight);</td>
      </tr>
      <tr>
        <td id="L2382" class="blob-num js-line-number" data-line-number="2382"></td>
        <td id="LC2382" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span>(flux&gt;(S[spp].<span class="pl-smi">s_LCP</span>)){</td>
      </tr>
      <tr>
        <td id="L2383" class="blob-num js-line-number" data-line-number="2383"></td>
        <td id="LC2383" class="blob-code blob-code-inner js-file-line">                        <span class="pl-c"><span class="pl-c">/*</span> If enough light, germination, initialization of NPP (LCP is the species light compensation point<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2384" class="blob-num js-line-number" data-line-number="2384"></td>
        <td id="LC2384" class="blob-code blob-code-inner js-file-line">                        <span class="pl-c"><span class="pl-c">/*</span> here, light is the sole environmental resources tested as a limiting factor for germination, but we should think about adding nutrients (N,P) and water conditions... <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2385" class="blob-num js-line-number" data-line-number="2385"></td>
        <td id="LC2385" class="blob-code blob-code-inner js-file-line">                        T[site].<span class="pl-c1">Birth</span>(S,spp,site);</td>
      </tr>
      <tr>
        <td id="L2386" class="blob-num js-line-number" data-line-number="2386"></td>
        <td id="LC2386" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L2387" class="blob-num js-line-number" data-line-number="2387"></td>
        <td id="LC2387" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L2388" class="blob-num js-line-number" data-line-number="2388"></td>
        <td id="LC2388" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2389" class="blob-num js-line-number" data-line-number="2389"></td>
        <td id="LC2389" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L2390" class="blob-num js-line-number" data-line-number="2390"></td>
        <td id="LC2390" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) S[spp].<span class="pl-smi">s_Seed</span>[site]=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2391" class="blob-num js-line-number" data-line-number="2391"></td>
        <td id="LC2391" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2392" class="blob-num js-line-number" data-line-number="2392"></td>
        <td id="LC2392" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2393" class="blob-num js-line-number" data-line-number="2393"></td>
        <td id="LC2393" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2394" class="blob-num js-line-number" data-line-number="2394"></td>
        <td id="LC2394" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2395" class="blob-num js-line-number" data-line-number="2395"></td>
        <td id="LC2395" class="blob-code blob-code-inner js-file-line">    nbdead_n1=nbdead_n10=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2396" class="blob-num js-line-number" data-line-number="2396"></td>
        <td id="LC2396" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_BASICTREEFALL){</td>
      </tr>
      <tr>
        <td id="L2397" class="blob-num js-line-number" data-line-number="2397"></td>
        <td id="LC2397" class="blob-code blob-code-inner js-file-line">        nbdead_c1=nbdead_c10=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2398" class="blob-num js-line-number" data-line-number="2398"></td>
        <td id="LC2398" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2399" class="blob-num js-line-number" data-line-number="2399"></td>
        <td id="LC2399" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++) {</td>
      </tr>
      <tr>
        <td id="L2400" class="blob-num js-line-number" data-line-number="2400"></td>
        <td id="LC2400" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">/*</span>**** Tree evolution: Growth or death ****<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2401" class="blob-num js-line-number" data-line-number="2401"></td>
        <td id="LC2401" class="blob-code blob-code-inner js-file-line">        T[site].<span class="pl-c1">Update</span>();</td>
      </tr>
      <tr>
        <td id="L2402" class="blob-num js-line-number" data-line-number="2402"></td>
        <td id="LC2402" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2403" class="blob-num js-line-number" data-line-number="2403"></td>
        <td id="LC2403" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2404" class="blob-num js-line-number" data-line-number="2404"></td>
        <td id="LC2404" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>**** Update the Seed field ****<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2405" class="blob-num js-line-number" data-line-number="2405"></td>
        <td id="LC2405" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) S[spp].<span class="pl-c1">UpdateSeed</span>();</td>
      </tr>
      <tr>
        <td id="L2406" class="blob-num js-line-number" data-line-number="2406"></td>
        <td id="LC2406" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2407" class="blob-num js-line-number" data-line-number="2407"></td>
        <td id="LC2407" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2408" class="blob-num js-line-number" data-line-number="2408"></td>
        <td id="LC2408" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2409" class="blob-num js-line-number" data-line-number="2409"></td>
        <td id="LC2409" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2410" class="blob-num js-line-number" data-line-number="2410"></td>
        <td id="LC2410" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>*****************************</span></td>
      </tr>
      <tr>
        <td id="L2411" class="blob-num js-line-number" data-line-number="2411"></td>
        <td id="LC2411" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *** Treefall gap formation ***</span></td>
      </tr>
      <tr>
        <td id="L2412" class="blob-num js-line-number" data-line-number="2412"></td>
        <td id="LC2412" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *****************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2413" class="blob-num js-line-number" data-line-number="2413"></td>
        <td id="LC2413" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2414" class="blob-num js-line-number" data-line-number="2414"></td>
        <td id="LC2414" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2415" class="blob-num js-line-number" data-line-number="2415"></td>
        <td id="LC2415" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">UpdateTreefall</span>(){</td>
      </tr>
      <tr>
        <td id="L2416" class="blob-num js-line-number" data-line-number="2416"></td>
        <td id="LC2416" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> site;</td>
      </tr>
      <tr>
        <td id="L2417" class="blob-num js-line-number" data-line-number="2417"></td>
        <td id="LC2417" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2418" class="blob-num js-line-number" data-line-number="2418"></td>
        <td id="LC2418" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++){</td>
      </tr>
      <tr>
        <td id="L2419" class="blob-num js-line-number" data-line-number="2419"></td>
        <td id="LC2419" class="blob-code blob-code-inner js-file-line">        Thurt[<span class="pl-c1">0</span>][site] = Thurt[<span class="pl-c1">0</span>][site+<span class="pl-c1">2</span>*sites] = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2420" class="blob-num js-line-number" data-line-number="2420"></td>
        <td id="LC2420" class="blob-code blob-code-inner js-file-line">        Thurt[<span class="pl-c1">0</span>][site+sites] = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2421" class="blob-num js-line-number" data-line-number="2421"></td>
        <td id="LC2421" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2422" class="blob-num js-line-number" data-line-number="2422"></td>
        <td id="LC2422" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2423" class="blob-num js-line-number" data-line-number="2423"></td>
        <td id="LC2423" class="blob-code blob-code-inner js-file-line">    nbTreefall1 = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2424" class="blob-num js-line-number" data-line-number="2424"></td>
        <td id="LC2424" class="blob-code blob-code-inner js-file-line">    nbTreefall10=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2425" class="blob-num js-line-number" data-line-number="2425"></td>
        <td id="LC2425" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++)</td>
      </tr>
      <tr>
        <td id="L2426" class="blob-num js-line-number" data-line-number="2426"></td>
        <td id="LC2426" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(T[site].<span class="pl-smi">t_age</span>) {</td>
      </tr>
      <tr>
        <td id="L2427" class="blob-num js-line-number" data-line-number="2427"></td>
        <td id="LC2427" class="blob-code blob-code-inner js-file-line">            T[site].<span class="pl-c1">FallTree</span>();</td>
      </tr>
      <tr>
        <td id="L2428" class="blob-num js-line-number" data-line-number="2428"></td>
        <td id="LC2428" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2429" class="blob-num js-line-number" data-line-number="2429"></td>
        <td id="LC2429" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2430" class="blob-num js-line-number" data-line-number="2430"></td>
        <td id="LC2430" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2431" class="blob-num js-line-number" data-line-number="2431"></td>
        <td id="LC2431" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L2432" class="blob-num js-line-number" data-line-number="2432"></td>
        <td id="LC2432" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Treefall field passed to the n.n. procs <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2433" class="blob-num js-line-number" data-line-number="2433"></td>
        <td id="LC2433" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI_ShareTreefall</span>(Thurt, sites);</td>
      </tr>
      <tr>
        <td id="L2434" class="blob-num js-line-number" data-line-number="2434"></td>
        <td id="LC2434" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2435" class="blob-num js-line-number" data-line-number="2435"></td>
        <td id="LC2435" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2436" class="blob-num js-line-number" data-line-number="2436"></td>
        <td id="LC2436" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++)</td>
      </tr>
      <tr>
        <td id="L2437" class="blob-num js-line-number" data-line-number="2437"></td>
        <td id="LC2437" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> Update of Field hurt <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2438" class="blob-num js-line-number" data-line-number="2438"></td>
        <td id="LC2438" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(T[site].<span class="pl-smi">t_age</span>) {</td>
      </tr>
      <tr>
        <td id="L2439" class="blob-num js-line-number" data-line-number="2439"></td>
        <td id="LC2439" class="blob-code blob-code-inner js-file-line">            T[site].<span class="pl-smi">t_hurt</span> = Thurt[<span class="pl-c1">0</span>][site+sites];</td>
      </tr>
      <tr>
        <td id="L2440" class="blob-num js-line-number" data-line-number="2440"></td>
        <td id="LC2440" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L2441" class="blob-num js-line-number" data-line-number="2441"></td>
        <td id="LC2441" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(mpi_rank) T[site].<span class="pl-smi">t_hurt</span> = <span class="pl-c1">max</span>(T[site].<span class="pl-smi">t_hurt</span>,Thurt[<span class="pl-c1">1</span>][site]);</td>
      </tr>
      <tr>
        <td id="L2442" class="blob-num js-line-number" data-line-number="2442"></td>
        <td id="LC2442" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(mpi_rank&lt;mpi_size-<span class="pl-c1">1</span>) T[site].<span class="pl-smi">t_hurt</span> = <span class="pl-c1">max</span>(T[site].<span class="pl-smi">t_hurt</span>,Thurt[<span class="pl-c1">2</span>][site]);</td>
      </tr>
      <tr>
        <td id="L2443" class="blob-num js-line-number" data-line-number="2443"></td>
        <td id="LC2443" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2444" class="blob-num js-line-number" data-line-number="2444"></td>
        <td id="LC2444" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2445" class="blob-num js-line-number" data-line-number="2445"></td>
        <td id="LC2445" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2446" class="blob-num js-line-number" data-line-number="2446"></td>
        <td id="LC2446" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2447" class="blob-num js-line-number" data-line-number="2447"></td>
        <td id="LC2447" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2448" class="blob-num js-line-number" data-line-number="2448"></td>
        <td id="LC2448" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2449" class="blob-num js-line-number" data-line-number="2449"></td>
        <td id="LC2449" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>###############################################</span></td>
      </tr>
      <tr>
        <td id="L2450" class="blob-num js-line-number" data-line-number="2450"></td>
        <td id="LC2450" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###############################################</span></td>
      </tr>
      <tr>
        <td id="L2451" class="blob-num js-line-number" data-line-number="2451"></td>
        <td id="LC2451" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> #######        Output routines         ########</span></td>
      </tr>
      <tr>
        <td id="L2452" class="blob-num js-line-number" data-line-number="2452"></td>
        <td id="LC2452" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###############################################</span></td>
      </tr>
      <tr>
        <td id="L2453" class="blob-num js-line-number" data-line-number="2453"></td>
        <td id="LC2453" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ###############################################<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2454" class="blob-num js-line-number" data-line-number="2454"></td>
        <td id="LC2454" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2455" class="blob-num js-line-number" data-line-number="2455"></td>
        <td id="LC2455" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>********************************************************</span></td>
      </tr>
      <tr>
        <td id="L2456" class="blob-num js-line-number" data-line-number="2456"></td>
        <td id="LC2456" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *** Calculation of the global averages every timestep ***</span></td>
      </tr>
      <tr>
        <td id="L2457" class="blob-num js-line-number" data-line-number="2457"></td>
        <td id="LC2457" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ********************************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2458" class="blob-num js-line-number" data-line-number="2458"></td>
        <td id="LC2458" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2459" class="blob-num js-line-number" data-line-number="2459"></td>
        <td id="LC2459" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">Average</span>(<span class="pl-k">void</span>){</td>
      </tr>
      <tr>
        <td id="L2460" class="blob-num js-line-number" data-line-number="2460"></td>
        <td id="LC2460" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2461" class="blob-num js-line-number" data-line-number="2461"></td>
        <td id="LC2461" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> site,spp,i;</td>
      </tr>
      <tr>
        <td id="L2462" class="blob-num js-line-number" data-line-number="2462"></td>
        <td id="LC2462" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> sum1=<span class="pl-c1">0</span>,sum10=<span class="pl-c1">0.0</span>,sum30=<span class="pl-c1">0.0</span>,ba=<span class="pl-c1">0.0</span>,npp=<span class="pl-c1">0.0</span>,gpp=<span class="pl-c1">0.0</span>, ba10=<span class="pl-c1">0.0</span>, agb=<span class="pl-c1">0.0</span>, rday=<span class="pl-c1">0.0</span>, rnight=<span class="pl-c1">0.0</span>, rstem=<span class="pl-c1">0.0</span>, litterfall=<span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L2463" class="blob-num js-line-number" data-line-number="2463"></td>
        <td id="LC2463" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2464" class="blob-num js-line-number" data-line-number="2464"></td>
        <td id="LC2464" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(!mpi_rank) {</td>
      </tr>
      <tr>
        <td id="L2465" class="blob-num js-line-number" data-line-number="2465"></td>
        <td id="LC2465" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++)</td>
      </tr>
      <tr>
        <td id="L2466" class="blob-num js-line-number" data-line-number="2466"></td>
        <td id="LC2466" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(i=<span class="pl-c1">0</span>;i&lt;<span class="pl-c1">12</span>;i++)</td>
      </tr>
      <tr>
        <td id="L2467" class="blob-num js-line-number" data-line-number="2467"></td>
        <td id="LC2467" class="blob-code blob-code-inner js-file-line">                S[spp].<span class="pl-smi">s_output_field</span>[i]=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2468" class="blob-num js-line-number" data-line-number="2468"></td>
        <td id="LC2468" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2469" class="blob-num js-line-number" data-line-number="2469"></td>
        <td id="LC2469" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">float</span> inbcells = <span class="pl-c1">1.0</span>/<span class="pl-c1">float</span>(sites*mpi_size);</td>
      </tr>
      <tr>
        <td id="L2470" class="blob-num js-line-number" data-line-number="2470"></td>
        <td id="LC2470" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">float</span> inbhectares = inbcells*NH*NH*<span class="pl-c1">10000.0</span>;</td>
      </tr>
      <tr>
        <td id="L2471" class="blob-num js-line-number" data-line-number="2471"></td>
        <td id="LC2471" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2472" class="blob-num js-line-number" data-line-number="2472"></td>
        <td id="LC2472" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(_OUTPUT_reduced){</td>
      </tr>
      <tr>
        <td id="L2473" class="blob-num js-line-number" data-line-number="2473"></td>
        <td id="LC2473" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">36</span>] &lt;&lt; iter &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2474" class="blob-num js-line-number" data-line-number="2474"></td>
        <td id="LC2474" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++)</td>
      </tr>
      <tr>
        <td id="L2475" class="blob-num js-line-number" data-line-number="2475"></td>
        <td id="LC2475" class="blob-code blob-code-inner js-file-line">                output[<span class="pl-c1">36</span>] &lt;&lt; <span class="pl-c1">float</span>(S[spp].<span class="pl-smi">s_nbind</span>)*inbhectares &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2476" class="blob-num js-line-number" data-line-number="2476"></td>
        <td id="LC2476" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2477" class="blob-num js-line-number" data-line-number="2477"></td>
        <td id="LC2477" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L2478" class="blob-num js-line-number" data-line-number="2478"></td>
        <td id="LC2478" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(i=<span class="pl-c1">0</span>;i&lt;<span class="pl-c1">7</span>;i++) output[i] &lt;&lt; iter &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2479" class="blob-num js-line-number" data-line-number="2479"></td>
        <td id="LC2479" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(i=<span class="pl-c1">20</span>;i&lt;<span class="pl-c1">23</span>;i++) output[i] &lt;&lt; iter &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2480" class="blob-num js-line-number" data-line-number="2480"></td>
        <td id="LC2480" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) output[<span class="pl-c1">0</span>] &lt;&lt; <span class="pl-c1">float</span>(S[spp].<span class="pl-smi">s_nbind</span>)*inbhectares &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2481" class="blob-num js-line-number" data-line-number="2481"></td>
        <td id="LC2481" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2482" class="blob-num js-line-number" data-line-number="2482"></td>
        <td id="LC2482" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++)T[site].<span class="pl-c1">Average</span>();</td>
      </tr>
      <tr>
        <td id="L2483" class="blob-num js-line-number" data-line-number="2483"></td>
        <td id="LC2483" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2484" class="blob-num js-line-number" data-line-number="2484"></td>
        <td id="LC2484" class="blob-code blob-code-inner js-file-line">        cout &lt;&lt; iter &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>NBtrees<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>&lt;&lt;nblivetrees &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L2485" class="blob-num js-line-number" data-line-number="2485"></td>
        <td id="LC2485" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2486" class="blob-num js-line-number" data-line-number="2486"></td>
        <td id="LC2486" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) {</td>
      </tr>
      <tr>
        <td id="L2487" class="blob-num js-line-number" data-line-number="2487"></td>
        <td id="LC2487" class="blob-code blob-code-inner js-file-line">            S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">1</span>] *= inbhectares;</td>
      </tr>
      <tr>
        <td id="L2488" class="blob-num js-line-number" data-line-number="2488"></td>
        <td id="LC2488" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span>species number of trees with dbh&gt;10cm</span></td>
      </tr>
      <tr>
        <td id="L2489" class="blob-num js-line-number" data-line-number="2489"></td>
        <td id="LC2489" class="blob-code blob-code-inner js-file-line">            S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">2</span>] *= inbhectares;</td>
      </tr>
      <tr>
        <td id="L2490" class="blob-num js-line-number" data-line-number="2490"></td>
        <td id="LC2490" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span>species number of trees with dbh&gt;30cm</span></td>
      </tr>
      <tr>
        <td id="L2491" class="blob-num js-line-number" data-line-number="2491"></td>
        <td id="LC2491" class="blob-code blob-code-inner js-file-line">            S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">3</span>] *= <span class="pl-c1">3.1415</span>*<span class="pl-c1">0.25</span>*inbhectares;</td>
      </tr>
      <tr>
        <td id="L2492" class="blob-num js-line-number" data-line-number="2492"></td>
        <td id="LC2492" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span>species basal area</span></td>
      </tr>
      <tr>
        <td id="L2493" class="blob-num js-line-number" data-line-number="2493"></td>
        <td id="LC2493" class="blob-code blob-code-inner js-file-line">            S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">4</span>] *= inbhectares;</td>
      </tr>
      <tr>
        <td id="L2494" class="blob-num js-line-number" data-line-number="2494"></td>
        <td id="LC2494" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span>species total NPP (sum of t_NPP) in MgC (per timestep)</span></td>
      </tr>
      <tr>
        <td id="L2495" class="blob-num js-line-number" data-line-number="2495"></td>
        <td id="LC2495" class="blob-code blob-code-inner js-file-line">            S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">5</span>] *= inbhectares;</td>
      </tr>
      <tr>
        <td id="L2496" class="blob-num js-line-number" data-line-number="2496"></td>
        <td id="LC2496" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span>species total GPP (sum of t_GPP) in MgC (per timestep)</span></td>
      </tr>
      <tr>
        <td id="L2497" class="blob-num js-line-number" data-line-number="2497"></td>
        <td id="LC2497" class="blob-code blob-code-inner js-file-line">            S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">6</span>] *= <span class="pl-c1">3.1415</span>*<span class="pl-c1">0.25</span>*inbhectares;</td>
      </tr>
      <tr>
        <td id="L2498" class="blob-num js-line-number" data-line-number="2498"></td>
        <td id="LC2498" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span>species basal area; with only trees with dbh&gt;10cm</span></td>
      </tr>
      <tr>
        <td id="L2499" class="blob-num js-line-number" data-line-number="2499"></td>
        <td id="LC2499" class="blob-code blob-code-inner js-file-line">            S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">7</span>] *= inbhectares;</td>
      </tr>
      <tr>
        <td id="L2500" class="blob-num js-line-number" data-line-number="2500"></td>
        <td id="LC2500" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span>species aboveground biomass</span></td>
      </tr>
      <tr>
        <td id="L2501" class="blob-num js-line-number" data-line-number="2501"></td>
        <td id="LC2501" class="blob-code blob-code-inner js-file-line">            S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">8</span>] *= inbhectares;</td>
      </tr>
      <tr>
        <td id="L2502" class="blob-num js-line-number" data-line-number="2502"></td>
        <td id="LC2502" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">/*</span> species leaf Rday in MgC (per timestep) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2503" class="blob-num js-line-number" data-line-number="2503"></td>
        <td id="LC2503" class="blob-code blob-code-inner js-file-line">            S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">9</span>] *= inbhectares;</td>
      </tr>
      <tr>
        <td id="L2504" class="blob-num js-line-number" data-line-number="2504"></td>
        <td id="LC2504" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span>species leaf Rnight in MgC (per timestep)</span></td>
      </tr>
      <tr>
        <td id="L2505" class="blob-num js-line-number" data-line-number="2505"></td>
        <td id="LC2505" class="blob-code blob-code-inner js-file-line">            S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">10</span>] *= inbhectares;</td>
      </tr>
      <tr>
        <td id="L2506" class="blob-num js-line-number" data-line-number="2506"></td>
        <td id="LC2506" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span>species Rstem  in MgC (per timestep)</span></td>
      </tr>
      <tr>
        <td id="L2507" class="blob-num js-line-number" data-line-number="2507"></td>
        <td id="LC2507" class="blob-code blob-code-inner js-file-line">            S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">11</span>] *= inbhectares;</td>
      </tr>
      <tr>
        <td id="L2508" class="blob-num js-line-number" data-line-number="2508"></td>
        <td id="LC2508" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span>species litterfall  in MgC (per timestep)</span></td>
      </tr>
      <tr>
        <td id="L2509" class="blob-num js-line-number" data-line-number="2509"></td>
        <td id="LC2509" class="blob-code blob-code-inner js-file-line">            sum1+= <span class="pl-c1">float</span>(S[spp].<span class="pl-smi">s_nbind</span>)*inbhectares;</td>
      </tr>
      <tr>
        <td id="L2510" class="blob-num js-line-number" data-line-number="2510"></td>
        <td id="LC2510" class="blob-code blob-code-inner js-file-line">            sum10 += S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">1</span>];</td>
      </tr>
      <tr>
        <td id="L2511" class="blob-num js-line-number" data-line-number="2511"></td>
        <td id="LC2511" class="blob-code blob-code-inner js-file-line">            sum30 += S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">2</span>];</td>
      </tr>
      <tr>
        <td id="L2512" class="blob-num js-line-number" data-line-number="2512"></td>
        <td id="LC2512" class="blob-code blob-code-inner js-file-line">            ba += S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">3</span>];</td>
      </tr>
      <tr>
        <td id="L2513" class="blob-num js-line-number" data-line-number="2513"></td>
        <td id="LC2513" class="blob-code blob-code-inner js-file-line">            npp += S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">4</span>];</td>
      </tr>
      <tr>
        <td id="L2514" class="blob-num js-line-number" data-line-number="2514"></td>
        <td id="LC2514" class="blob-code blob-code-inner js-file-line">            gpp += S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">5</span>];</td>
      </tr>
      <tr>
        <td id="L2515" class="blob-num js-line-number" data-line-number="2515"></td>
        <td id="LC2515" class="blob-code blob-code-inner js-file-line">            ba10 += S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">6</span>];</td>
      </tr>
      <tr>
        <td id="L2516" class="blob-num js-line-number" data-line-number="2516"></td>
        <td id="LC2516" class="blob-code blob-code-inner js-file-line">            agb += S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">7</span>];</td>
      </tr>
      <tr>
        <td id="L2517" class="blob-num js-line-number" data-line-number="2517"></td>
        <td id="LC2517" class="blob-code blob-code-inner js-file-line">            rday += S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">8</span>];</td>
      </tr>
      <tr>
        <td id="L2518" class="blob-num js-line-number" data-line-number="2518"></td>
        <td id="LC2518" class="blob-code blob-code-inner js-file-line">            rnight += S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">9</span>];</td>
      </tr>
      <tr>
        <td id="L2519" class="blob-num js-line-number" data-line-number="2519"></td>
        <td id="LC2519" class="blob-code blob-code-inner js-file-line">            rstem += S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">10</span>];</td>
      </tr>
      <tr>
        <td id="L2520" class="blob-num js-line-number" data-line-number="2520"></td>
        <td id="LC2520" class="blob-code blob-code-inner js-file-line">            litterfall += S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">11</span>];</td>
      </tr>
      <tr>
        <td id="L2521" class="blob-num js-line-number" data-line-number="2521"></td>
        <td id="LC2521" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2522" class="blob-num js-line-number" data-line-number="2522"></td>
        <td id="LC2522" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(!_OUTPUT_reduced){</td>
      </tr>
      <tr>
        <td id="L2523" class="blob-num js-line-number" data-line-number="2523"></td>
        <td id="LC2523" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">for</span>(i=<span class="pl-c1">1</span>;i&lt;<span class="pl-c1">7</span>;i++) output[i] &lt;&lt; S[spp].<span class="pl-smi">s_output_field</span>[i] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2524" class="blob-num js-line-number" data-line-number="2524"></td>
        <td id="LC2524" class="blob-code blob-code-inner js-file-line">                output[<span class="pl-c1">19</span>] &lt;&lt; S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">7</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2525" class="blob-num js-line-number" data-line-number="2525"></td>
        <td id="LC2525" class="blob-code blob-code-inner js-file-line">                output[<span class="pl-c1">20</span>] &lt;&lt; S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">8</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2526" class="blob-num js-line-number" data-line-number="2526"></td>
        <td id="LC2526" class="blob-code blob-code-inner js-file-line">                output[<span class="pl-c1">21</span>] &lt;&lt; S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">9</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2527" class="blob-num js-line-number" data-line-number="2527"></td>
        <td id="LC2527" class="blob-code blob-code-inner js-file-line">                output[<span class="pl-c1">22</span>] &lt;&lt; S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">10</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2528" class="blob-num js-line-number" data-line-number="2528"></td>
        <td id="LC2528" class="blob-code blob-code-inner js-file-line">                output[<span class="pl-c1">27</span>] &lt;&lt; S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">11</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2529" class="blob-num js-line-number" data-line-number="2529"></td>
        <td id="LC2529" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2530" class="blob-num js-line-number" data-line-number="2530"></td>
        <td id="LC2530" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2531" class="blob-num js-line-number" data-line-number="2531"></td>
        <td id="LC2531" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2532" class="blob-num js-line-number" data-line-number="2532"></td>
        <td id="LC2532" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(_OUTPUT_reduced){</td>
      </tr>
      <tr>
        <td id="L2533" class="blob-num js-line-number" data-line-number="2533"></td>
        <td id="LC2533" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">36</span>] &lt;&lt; sum1 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;                                                     <span class="pl-c"><span class="pl-c">//</span>total number of trees (dbh&gt;1cm=DBH0)</span></td>
      </tr>
      <tr>
        <td id="L2534" class="blob-num js-line-number" data-line-number="2534"></td>
        <td id="LC2534" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2535" class="blob-num js-line-number" data-line-number="2535"></td>
        <td id="LC2535" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) output[<span class="pl-c1">36</span>] &lt;&lt; S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">1</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2536" class="blob-num js-line-number" data-line-number="2536"></td>
        <td id="LC2536" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">36</span>] &lt;&lt; sum10 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;                                                    <span class="pl-c"><span class="pl-c">//</span>total number of trees (dbh&gt;10cm=DBH0)</span></td>
      </tr>
      <tr>
        <td id="L2537" class="blob-num js-line-number" data-line-number="2537"></td>
        <td id="LC2537" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2538" class="blob-num js-line-number" data-line-number="2538"></td>
        <td id="LC2538" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) output[<span class="pl-c1">36</span>] &lt;&lt; S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">2</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2539" class="blob-num js-line-number" data-line-number="2539"></td>
        <td id="LC2539" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">36</span>] &lt;&lt; sum30 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;                                                    <span class="pl-c"><span class="pl-c">//</span>total number of trees (dbh&gt;30cm=DBH0)</span></td>
      </tr>
      <tr>
        <td id="L2540" class="blob-num js-line-number" data-line-number="2540"></td>
        <td id="LC2540" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2541" class="blob-num js-line-number" data-line-number="2541"></td>
        <td id="LC2541" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) output[<span class="pl-c1">36</span>] &lt;&lt; S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">6</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2542" class="blob-num js-line-number" data-line-number="2542"></td>
        <td id="LC2542" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">36</span>] &lt;&lt; ba10 &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2543" class="blob-num js-line-number" data-line-number="2543"></td>
        <td id="LC2543" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2544" class="blob-num js-line-number" data-line-number="2544"></td>
        <td id="LC2544" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) output[<span class="pl-c1">36</span>] &lt;&lt; S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">4</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2545" class="blob-num js-line-number" data-line-number="2545"></td>
        <td id="LC2545" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">36</span>] &lt;&lt; npp &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2546" class="blob-num js-line-number" data-line-number="2546"></td>
        <td id="LC2546" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2547" class="blob-num js-line-number" data-line-number="2547"></td>
        <td id="LC2547" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) output[<span class="pl-c1">36</span>] &lt;&lt; S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">5</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2548" class="blob-num js-line-number" data-line-number="2548"></td>
        <td id="LC2548" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">36</span>] &lt;&lt; gpp &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2549" class="blob-num js-line-number" data-line-number="2549"></td>
        <td id="LC2549" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2550" class="blob-num js-line-number" data-line-number="2550"></td>
        <td id="LC2550" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(spp=<span class="pl-c1">1</span>;spp&lt;=numesp;spp++) output[<span class="pl-c1">36</span>] &lt;&lt; S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">7</span>] &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2551" class="blob-num js-line-number" data-line-number="2551"></td>
        <td id="LC2551" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">36</span>] &lt;&lt; agb &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L2552" class="blob-num js-line-number" data-line-number="2552"></td>
        <td id="LC2552" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2553" class="blob-num js-line-number" data-line-number="2553"></td>
        <td id="LC2553" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L2554" class="blob-num js-line-number" data-line-number="2554"></td>
        <td id="LC2554" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2555" class="blob-num js-line-number" data-line-number="2555"></td>
        <td id="LC2555" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">0</span>] &lt;&lt; sum1 &lt;&lt; endl;          <span class="pl-c"><span class="pl-c">//</span>total number of trees (dbh&gt;1cm=DBH0)</span></td>
      </tr>
      <tr>
        <td id="L2556" class="blob-num js-line-number" data-line-number="2556"></td>
        <td id="LC2556" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">1</span>] &lt;&lt; sum10 &lt;&lt; endl;         <span class="pl-c"><span class="pl-c">//</span>total number of trees with dbh&gt;10cm</span></td>
      </tr>
      <tr>
        <td id="L2557" class="blob-num js-line-number" data-line-number="2557"></td>
        <td id="LC2557" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">2</span>] &lt;&lt; sum30 &lt;&lt; endl;         <span class="pl-c"><span class="pl-c">//</span>total number of trees with dbh&gt;30cm</span></td>
      </tr>
      <tr>
        <td id="L2558" class="blob-num js-line-number" data-line-number="2558"></td>
        <td id="LC2558" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">3</span>] &lt;&lt; ba &lt;&lt; endl;            <span class="pl-c"><span class="pl-c">//</span>total basal area</span></td>
      </tr>
      <tr>
        <td id="L2559" class="blob-num js-line-number" data-line-number="2559"></td>
        <td id="LC2559" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">4</span>] &lt;&lt; npp &lt;&lt; endl;           <span class="pl-c"><span class="pl-c">//</span>total NPP in MgC per ha (per time step)</span></td>
      </tr>
      <tr>
        <td id="L2560" class="blob-num js-line-number" data-line-number="2560"></td>
        <td id="LC2560" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">5</span>] &lt;&lt; gpp &lt;&lt; endl;           <span class="pl-c"><span class="pl-c">//</span>total GPP in MgC par ha (per time step)</span></td>
      </tr>
      <tr>
        <td id="L2561" class="blob-num js-line-number" data-line-number="2561"></td>
        <td id="LC2561" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">6</span>] &lt;&lt; ba10 &lt;&lt; endl;          <span class="pl-c"><span class="pl-c">//</span>total basal area with only trees with dbh&gt;10cm</span></td>
      </tr>
      <tr>
        <td id="L2562" class="blob-num js-line-number" data-line-number="2562"></td>
        <td id="LC2562" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">19</span>] &lt;&lt; agb &lt;&lt; endl;          <span class="pl-c"><span class="pl-c">//</span>total above ground biomass</span></td>
      </tr>
      <tr>
        <td id="L2563" class="blob-num js-line-number" data-line-number="2563"></td>
        <td id="LC2563" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">20</span>] &lt;&lt; rday &lt;&lt; endl;         <span class="pl-c"><span class="pl-c">//</span>total leaf day respiration</span></td>
      </tr>
      <tr>
        <td id="L2564" class="blob-num js-line-number" data-line-number="2564"></td>
        <td id="LC2564" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">21</span>] &lt;&lt; rnight &lt;&lt; endl;       <span class="pl-c"><span class="pl-c">//</span>total leaf night respiration</span></td>
      </tr>
      <tr>
        <td id="L2565" class="blob-num js-line-number" data-line-number="2565"></td>
        <td id="LC2565" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">22</span>] &lt;&lt; rstem &lt;&lt; endl;        <span class="pl-c"><span class="pl-c">//</span>total stem respiration</span></td>
      </tr>
      <tr>
        <td id="L2566" class="blob-num js-line-number" data-line-number="2566"></td>
        <td id="LC2566" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">27</span>] &lt;&lt; litterfall &lt;&lt; endl;   <span class="pl-c"><span class="pl-c">//</span>total litterfall</span></td>
      </tr>
      <tr>
        <td id="L2567" class="blob-num js-line-number" data-line-number="2567"></td>
        <td id="LC2567" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2568" class="blob-num js-line-number" data-line-number="2568"></td>
        <td id="LC2568" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">float</span> tototest=<span class="pl-c1">0.0</span>, tototest2=<span class="pl-c1">0.0</span>, flux;</td>
      </tr>
      <tr>
        <td id="L2569" class="blob-num js-line-number" data-line-number="2569"></td>
        <td id="LC2569" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++) {</td>
      </tr>
      <tr>
        <td id="L2570" class="blob-num js-line-number" data-line-number="2570"></td>
        <td id="LC2570" class="blob-code blob-code-inner js-file-line">                flux = Wmax*<span class="pl-c1">exp</span>(-<span class="pl-c1">flor</span>(LAI3D[<span class="pl-c1">0</span>][site+SBORD])*klight);</td>
      </tr>
      <tr>
        <td id="L2571" class="blob-num js-line-number" data-line-number="2571"></td>
        <td id="LC2571" class="blob-code blob-code-inner js-file-line">                tototest += flux;</td>
      </tr>
      <tr>
        <td id="L2572" class="blob-num js-line-number" data-line-number="2572"></td>
        <td id="LC2572" class="blob-code blob-code-inner js-file-line">                tototest2 += flux*flux;</td>
      </tr>
      <tr>
        <td id="L2573" class="blob-num js-line-number" data-line-number="2573"></td>
        <td id="LC2573" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2574" class="blob-num js-line-number" data-line-number="2574"></td>
        <td id="LC2574" class="blob-code blob-code-inner js-file-line">            tototest /=<span class="pl-c1">float</span>(sites*LH*LH);                              <span class="pl-c"><span class="pl-c">//</span> Average light flux (PPFD) on the ground</span></td>
      </tr>
      <tr>
        <td id="L2575" class="blob-num js-line-number" data-line-number="2575"></td>
        <td id="LC2575" class="blob-code blob-code-inner js-file-line">            tototest2 /=<span class="pl-c1">float</span>(sites*LH*LH);</td>
      </tr>
      <tr>
        <td id="L2576" class="blob-num js-line-number" data-line-number="2576"></td>
        <td id="LC2576" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(iter)</td>
      </tr>
      <tr>
        <td id="L2577" class="blob-num js-line-number" data-line-number="2577"></td>
        <td id="LC2577" class="blob-code blob-code-inner js-file-line">                output[<span class="pl-c1">7</span>] &lt;&lt; iter&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>Mean PPFDground<span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span>&lt;&lt; tototest &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; <span class="pl-c1">sqrt</span>(tototest2-tototest*tototest) &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2578" class="blob-num js-line-number" data-line-number="2578"></td>
        <td id="LC2578" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2579" class="blob-num js-line-number" data-line-number="2579"></td>
        <td id="LC2579" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2580" class="blob-num js-line-number" data-line-number="2580"></td>
        <td id="LC2580" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(_BASICTREEFALL) output[<span class="pl-c1">8</span>] &lt;&lt; iter &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; nbdead_n1*inbhectares &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; nbdead_n10*inbhectares&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; nbdead_c1*inbhectares &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; nbdead_c10*inbhectares &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; nbTreefall1*inbhectares &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; nbTreefall10*inbhectares &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L2581" class="blob-num js-line-number" data-line-number="2581"></td>
        <td id="LC2581" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">else</span> output[<span class="pl-c1">8</span>] &lt;&lt; iter &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; nbdead_n1*inbhectares &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; nbdead_n10*inbhectares&lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; endl;</td>
      </tr>
      <tr>
        <td id="L2582" class="blob-num js-line-number" data-line-number="2582"></td>
        <td id="LC2582" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2583" class="blob-num js-line-number" data-line-number="2583"></td>
        <td id="LC2583" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2584" class="blob-num js-line-number" data-line-number="2584"></td>
        <td id="LC2584" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2585" class="blob-num js-line-number" data-line-number="2585"></td>
        <td id="LC2585" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L2586" class="blob-num js-line-number" data-line-number="2586"></td>
        <td id="LC2586" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI_Reduce</span>(&amp;(S[spp].<span class="pl-smi">s_nbind</span>),&amp;sind,<span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L2587" class="blob-num js-line-number" data-line-number="2587"></td>
        <td id="LC2587" class="blob-code blob-code-inner js-file-line">               MPI_INT,MPI_SUM,<span class="pl-c1">0</span>,MPI_COMM_WORLD);</td>
      </tr>
      <tr>
        <td id="L2588" class="blob-num js-line-number" data-line-number="2588"></td>
        <td id="LC2588" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI_Reduce</span>(S[spp].<span class="pl-smi">s_output_field</span>,S[spp].<span class="pl-smi">s_output_field</span>,<span class="pl-c1">5</span>,</td>
      </tr>
      <tr>
        <td id="L2589" class="blob-num js-line-number" data-line-number="2589"></td>
        <td id="LC2589" class="blob-code blob-code-inner js-file-line">               MPI_FLOAT,MPI_SUM,<span class="pl-c1">0</span>,MPI_COMM_WORLD);</td>
      </tr>
      <tr>
        <td id="L2590" class="blob-num js-line-number" data-line-number="2590"></td>
        <td id="LC2590" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI_Reduce</span>(Mortality,Mortality,<span class="pl-c1">4</span>,</td>
      </tr>
      <tr>
        <td id="L2591" class="blob-num js-line-number" data-line-number="2591"></td>
        <td id="LC2591" class="blob-code blob-code-inner js-file-line">               MPI_FLOAT,MPI_SUM,<span class="pl-c1">0</span>,MPI_COMM_WORLD);</td>
      </tr>
      <tr>
        <td id="L2592" class="blob-num js-line-number" data-line-number="2592"></td>
        <td id="LC2592" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">MPI_Reduce</span>(&amp;S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">6</span>],&amp;S[spp].<span class="pl-smi">s_output_field</span>[<span class="pl-c1">6</span>],<span class="pl-c1">5</span>,</td>
      </tr>
      <tr>
        <td id="L2593" class="blob-num js-line-number" data-line-number="2593"></td>
        <td id="LC2593" class="blob-code blob-code-inner js-file-line">               MPI_FLOAT,MPI_MAX,<span class="pl-c1">0</span>,MPI_COMM_WORLD);</td>
      </tr>
      <tr>
        <td id="L2594" class="blob-num js-line-number" data-line-number="2594"></td>
        <td id="LC2594" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2595" class="blob-num js-line-number" data-line-number="2595"></td>
        <td id="LC2595" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2596" class="blob-num js-line-number" data-line-number="2596"></td>
        <td id="LC2596" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(!mpi_rank) {</td>
      </tr>
      <tr>
        <td id="L2597" class="blob-num js-line-number" data-line-number="2597"></td>
        <td id="LC2597" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(iter == <span class="pl-c1">200</span>){                                        <span class="pl-c"><span class="pl-c">//</span> State at the 200th iteration (for all living trees: dbh, height, crown radius and depth and dbh increment)</span></td>
      </tr>
      <tr>
        <td id="L2598" class="blob-num js-line-number" data-line-number="2598"></td>
        <td id="LC2598" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++) {</td>
      </tr>
      <tr>
        <td id="L2599" class="blob-num js-line-number" data-line-number="2599"></td>
        <td id="LC2599" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(T[site].<span class="pl-smi">t_dbh</span>&gt;<span class="pl-c1">0.0</span>)</td>
      </tr>
      <tr>
        <td id="L2600" class="blob-num js-line-number" data-line-number="2600"></td>
        <td id="LC2600" class="blob-code blob-code-inner js-file-line">                    output[<span class="pl-c1">9</span>] &lt;&lt; T[site].<span class="pl-smi">t_dbh</span>*LH*<span class="pl-c1">100</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[site].<span class="pl-smi">t_Tree_Height</span></td>
      </tr>
      <tr>
        <td id="L2601" class="blob-num js-line-number" data-line-number="2601"></td>
        <td id="LC2601" class="blob-code blob-code-inner js-file-line">                    &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[site].<span class="pl-smi">t_Crown_Radius</span>*LH</td>
      </tr>
      <tr>
        <td id="L2602" class="blob-num js-line-number" data-line-number="2602"></td>
        <td id="LC2602" class="blob-code blob-code-inner js-file-line">                    &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[site].<span class="pl-smi">t_Crown_Depth</span>*LV</td>
      </tr>
      <tr>
        <td id="L2603" class="blob-num js-line-number" data-line-number="2603"></td>
        <td id="LC2603" class="blob-code blob-code-inner js-file-line">                    &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; T[site].<span class="pl-smi">t_ddbh</span>*LH*<span class="pl-c1">100</span> &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2604" class="blob-num js-line-number" data-line-number="2604"></td>
        <td id="LC2604" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2605" class="blob-num js-line-number" data-line-number="2605"></td>
        <td id="LC2605" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2606" class="blob-num js-line-number" data-line-number="2606"></td>
        <td id="LC2606" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2607" class="blob-num js-line-number" data-line-number="2607"></td>
        <td id="LC2607" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2608" class="blob-num js-line-number" data-line-number="2608"></td>
        <td id="LC2608" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L2609" class="blob-num js-line-number" data-line-number="2609"></td>
        <td id="LC2609" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> This section corresponds to the parallel version of</span></td>
      </tr>
      <tr>
        <td id="L2610" class="blob-num js-line-number" data-line-number="2610"></td>
        <td id="LC2610" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     the reporting of the global diagnostic variables. Since much work has been done</span></td>
      </tr>
      <tr>
        <td id="L2611" class="blob-num js-line-number" data-line-number="2611"></td>
        <td id="LC2611" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     on routine Average over the past years, this would need a full rewrite</span></td>
      </tr>
      <tr>
        <td id="L2612" class="blob-num js-line-number" data-line-number="2612"></td>
        <td id="LC2612" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     !!!!Action 20/01/2016: rework the parallel version of function Average!!!!</span></td>
      </tr>
      <tr>
        <td id="L2613" class="blob-num js-line-number" data-line-number="2613"></td>
        <td id="LC2613" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     </span></td>
      </tr>
      <tr>
        <td id="L2614" class="blob-num js-line-number" data-line-number="2614"></td>
        <td id="LC2614" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     MPI_Reduce(&amp;(S[spp].s_nbind),&amp;sind,1,</span></td>
      </tr>
      <tr>
        <td id="L2615" class="blob-num js-line-number" data-line-number="2615"></td>
        <td id="LC2615" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);</span></td>
      </tr>
      <tr>
        <td id="L2616" class="blob-num js-line-number" data-line-number="2616"></td>
        <td id="LC2616" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     MPI_Reduce(S[spp].s_output_field,S[spp].s_output_field,5,</span></td>
      </tr>
      <tr>
        <td id="L2617" class="blob-num js-line-number" data-line-number="2617"></td>
        <td id="LC2617" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     MPI_FLOAT,MPI_SUM,0,MPI_COMM_WORLD);</span></td>
      </tr>
      <tr>
        <td id="L2618" class="blob-num js-line-number" data-line-number="2618"></td>
        <td id="LC2618" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     MPI_Reduce(Mortality,Mortality,4,</span></td>
      </tr>
      <tr>
        <td id="L2619" class="blob-num js-line-number" data-line-number="2619"></td>
        <td id="LC2619" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     MPI_FLOAT,MPI_SUM,0,MPI_COMM_WORLD);</span></td>
      </tr>
      <tr>
        <td id="L2620" class="blob-num js-line-number" data-line-number="2620"></td>
        <td id="LC2620" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     MPI_Reduce(&amp;S[spp].s_output_field[6],&amp;S[spp].s_output_field[6],5,</span></td>
      </tr>
      <tr>
        <td id="L2621" class="blob-num js-line-number" data-line-number="2621"></td>
        <td id="LC2621" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     MPI_FLOAT,MPI_MAX,0,MPI_COMM_WORLD);</span></td>
      </tr>
      <tr>
        <td id="L2622" class="blob-num js-line-number" data-line-number="2622"></td>
        <td id="LC2622" class="blob-code blob-code-inner js-file-line"><span class="pl-c">     <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2623" class="blob-num js-line-number" data-line-number="2623"></td>
        <td id="LC2623" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2624" class="blob-num js-line-number" data-line-number="2624"></td>
        <td id="LC2624" class="blob-code blob-code-inner js-file-line">    cout.<span class="pl-c1">flush</span>();</td>
      </tr>
      <tr>
        <td id="L2625" class="blob-num js-line-number" data-line-number="2625"></td>
        <td id="LC2625" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2626" class="blob-num js-line-number" data-line-number="2626"></td>
        <td id="LC2626" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2627" class="blob-num js-line-number" data-line-number="2627"></td>
        <td id="LC2627" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2628" class="blob-num js-line-number" data-line-number="2628"></td>
        <td id="LC2628" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>********************************</span></td>
      </tr>
      <tr>
        <td id="L2629" class="blob-num js-line-number" data-line-number="2629"></td>
        <td id="LC2629" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> **** Output of Fields Shares ****</span></td>
      </tr>
      <tr>
        <td id="L2630" class="blob-num js-line-number" data-line-number="2630"></td>
        <td id="LC2630" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ********************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2631" class="blob-num js-line-number" data-line-number="2631"></td>
        <td id="LC2631" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2632" class="blob-num js-line-number" data-line-number="2632"></td>
        <td id="LC2632" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2633" class="blob-num js-line-number" data-line-number="2633"></td>
        <td id="LC2633" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">OutputField</span>(){</td>
      </tr>
      <tr>
        <td id="L2634" class="blob-num js-line-number" data-line-number="2634"></td>
        <td id="LC2634" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2635" class="blob-num js-line-number" data-line-number="2635"></td>
        <td id="LC2635" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> output for dbh histogram and mean LAI by height class <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2636" class="blob-num js-line-number" data-line-number="2636"></td>
        <td id="LC2636" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2637" class="blob-num js-line-number" data-line-number="2637"></td>
        <td id="LC2637" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> site,haut;</td>
      </tr>
      <tr>
        <td id="L2638" class="blob-num js-line-number" data-line-number="2638"></td>
        <td id="LC2638" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2639" class="blob-num js-line-number" data-line-number="2639"></td>
        <td id="LC2639" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>((nbout)&amp;&amp;((iter%freqout)==freqout-<span class="pl-c1">1</span>)) {</td>
      </tr>
      <tr>
        <td id="L2640" class="blob-num js-line-number" data-line-number="2640"></td>
        <td id="LC2640" class="blob-code blob-code-inner js-file-line">        <span class="pl-c"><span class="pl-c">//</span> output fields, nbout times during simulation (every freqout iterations)</span></td>
      </tr>
      <tr>
        <td id="L2641" class="blob-num js-line-number" data-line-number="2641"></td>
        <td id="LC2641" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2642" class="blob-num js-line-number" data-line-number="2642"></td>
        <td id="LC2642" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">int</span> d;</td>
      </tr>
      <tr>
        <td id="L2643" class="blob-num js-line-number" data-line-number="2643"></td>
        <td id="LC2643" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(d=<span class="pl-c1">0</span>;d&lt;dbhmaxincm;d++) nbdbh[d]=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2644" class="blob-num js-line-number" data-line-number="2644"></td>
        <td id="LC2644" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++) T[site].<span class="pl-c1">histdbh</span>();</td>
      </tr>
      <tr>
        <td id="L2645" class="blob-num js-line-number" data-line-number="2645"></td>
        <td id="LC2645" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2646" class="blob-num js-line-number" data-line-number="2646"></td>
        <td id="LC2646" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(haut=<span class="pl-c1">0</span>;haut&lt;(HEIGHT+<span class="pl-c1">1</span>);haut++){</td>
      </tr>
      <tr>
        <td id="L2647" class="blob-num js-line-number" data-line-number="2647"></td>
        <td id="LC2647" class="blob-code blob-code-inner js-file-line">            layer[haut] = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2648" class="blob-num js-line-number" data-line-number="2648"></td>
        <td id="LC2648" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(site=<span class="pl-c1">0</span>;site&lt;sites;site++) layer[haut] += LAI3D[haut][site+SBORD];</td>
      </tr>
      <tr>
        <td id="L2649" class="blob-num js-line-number" data-line-number="2649"></td>
        <td id="LC2649" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2650" class="blob-num js-line-number" data-line-number="2650"></td>
        <td id="LC2650" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2651" class="blob-num js-line-number" data-line-number="2651"></td>
        <td id="LC2651" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L2652" class="blob-num js-line-number" data-line-number="2652"></td>
        <td id="LC2652" class="blob-code blob-code-inner js-file-line">        MPI_Status status;</td>
      </tr>
      <tr>
        <td id="L2653" class="blob-num js-line-number" data-line-number="2653"></td>
        <td id="LC2653" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Reduce</span>(nbdbh,nbdbh,dbhmaxincm,</td>
      </tr>
      <tr>
        <td id="L2654" class="blob-num js-line-number" data-line-number="2654"></td>
        <td id="LC2654" class="blob-code blob-code-inner js-file-line">                   MPI_INT,MPI_SUM,<span class="pl-c1">0</span>,MPI_COMM_WORLD);</td>
      </tr>
      <tr>
        <td id="L2655" class="blob-num js-line-number" data-line-number="2655"></td>
        <td id="LC2655" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2656" class="blob-num js-line-number" data-line-number="2656"></td>
        <td id="LC2656" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Reduce</span>(layer,layer,HEIGHT,</td>
      </tr>
      <tr>
        <td id="L2657" class="blob-num js-line-number" data-line-number="2657"></td>
        <td id="LC2657" class="blob-code blob-code-inner js-file-line">                   MPI_FLOAT,MPI_SUM,<span class="pl-c1">0</span>,MPI_COMM_WORLD);</td>
      </tr>
      <tr>
        <td id="L2658" class="blob-num js-line-number" data-line-number="2658"></td>
        <td id="LC2658" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2659" class="blob-num js-line-number" data-line-number="2659"></td>
        <td id="LC2659" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2660" class="blob-num js-line-number" data-line-number="2660"></td>
        <td id="LC2660" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(!mpi_rank) {</td>
      </tr>
      <tr>
        <td id="L2661" class="blob-num js-line-number" data-line-number="2661"></td>
        <td id="LC2661" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2662" class="blob-num js-line-number" data-line-number="2662"></td>
        <td id="LC2662" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span> output of the dbh histograms (output[31])</span></td>
      </tr>
      <tr>
        <td id="L2663" class="blob-num js-line-number" data-line-number="2663"></td>
        <td id="LC2663" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(d=<span class="pl-c1">1</span>;d&lt;dbhmaxincm;d++) output[<span class="pl-c1">31</span>] &lt;&lt; d &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; nbdbh[d]  &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2664" class="blob-num js-line-number" data-line-number="2664"></td>
        <td id="LC2664" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">31</span>] &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2665" class="blob-num js-line-number" data-line-number="2665"></td>
        <td id="LC2665" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2666" class="blob-num js-line-number" data-line-number="2666"></td>
        <td id="LC2666" class="blob-code blob-code-inner js-file-line">            <span class="pl-c"><span class="pl-c">//</span> output of the mean LAI per height class (output[32])</span></td>
      </tr>
      <tr>
        <td id="L2667" class="blob-num js-line-number" data-line-number="2667"></td>
        <td id="LC2667" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">float</span> norm = <span class="pl-c1">1.0</span>/<span class="pl-c1">float</span>(sites*LH*LH*mpi_size);</td>
      </tr>
      <tr>
        <td id="L2668" class="blob-num js-line-number" data-line-number="2668"></td>
        <td id="LC2668" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(haut=<span class="pl-c1">0</span>;haut&lt;(HEIGHT+<span class="pl-c1">1</span>);haut++) output[<span class="pl-c1">32</span>] &lt;&lt; haut*LV &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span><span class="pl-pds">&quot;</span></span> &lt;&lt; layer[haut]*norm &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2669" class="blob-num js-line-number" data-line-number="2669"></td>
        <td id="LC2669" class="blob-code blob-code-inner js-file-line">            output[<span class="pl-c1">32</span>] &lt;&lt;  <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L2670" class="blob-num js-line-number" data-line-number="2670"></td>
        <td id="LC2670" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2671" class="blob-num js-line-number" data-line-number="2671"></td>
        <td id="LC2671" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2672" class="blob-num js-line-number" data-line-number="2672"></td>
        <td id="LC2672" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2673" class="blob-num js-line-number" data-line-number="2673"></td>
        <td id="LC2673" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2674" class="blob-num js-line-number" data-line-number="2674"></td>
        <td id="LC2674" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> MPI</td>
      </tr>
      <tr>
        <td id="L2675" class="blob-num js-line-number" data-line-number="2675"></td>
        <td id="LC2675" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2676" class="blob-num js-line-number" data-line-number="2676"></td>
        <td id="LC2676" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Communication of border fields in the parallel version of the code <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2677" class="blob-num js-line-number" data-line-number="2677"></td>
        <td id="LC2677" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Only if the MPI option has been enabled <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2678" class="blob-num js-line-number" data-line-number="2678"></td>
        <td id="LC2678" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">MPI_ShareSeed</span>(<span class="pl-k">unsigned</span> <span class="pl-k">char</span> **c, <span class="pl-k">int</span> n) {</td>
      </tr>
      <tr>
        <td id="L2679" class="blob-num js-line-number" data-line-number="2679"></td>
        <td id="LC2679" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2680" class="blob-num js-line-number" data-line-number="2680"></td>
        <td id="LC2680" class="blob-code blob-code-inner js-file-line">    MPI_Status status;</td>
      </tr>
      <tr>
        <td id="L2681" class="blob-num js-line-number" data-line-number="2681"></td>
        <td id="LC2681" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2682" class="blob-num js-line-number" data-line-number="2682"></td>
        <td id="LC2682" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(p_rank == size-<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L2683" class="blob-num js-line-number" data-line-number="2683"></td>
        <td id="LC2683" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Sendrecv</span>(c[<span class="pl-c1">0</span>],n,MPI_UNSIGNED_CHAR,size-<span class="pl-c1">2</span>,<span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L2684" class="blob-num js-line-number" data-line-number="2684"></td>
        <td id="LC2684" class="blob-code blob-code-inner js-file-line">                     c[<span class="pl-c1">3</span>],n,MPI_UNSIGNED_CHAR,<span class="pl-c1">0</span>,<span class="pl-c1">0</span>,MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2685" class="blob-num js-line-number" data-line-number="2685"></td>
        <td id="LC2685" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(p_rank == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2686" class="blob-num js-line-number" data-line-number="2686"></td>
        <td id="LC2686" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Sendrecv</span>(c[<span class="pl-c1">0</span>],n,MPI_UNSIGNED_CHAR,size-<span class="pl-c1">1</span>,<span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L2687" class="blob-num js-line-number" data-line-number="2687"></td>
        <td id="LC2687" class="blob-code blob-code-inner js-file-line">                     c[<span class="pl-c1">3</span>],n,MPI_UNSIGNED_CHAR,<span class="pl-c1">1</span>,<span class="pl-c1">0</span>,MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2688" class="blob-num js-line-number" data-line-number="2688"></td>
        <td id="LC2688" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>((p_rank) &amp;&amp; (p_rank &lt; size-<span class="pl-c1">1</span>))</td>
      </tr>
      <tr>
        <td id="L2689" class="blob-num js-line-number" data-line-number="2689"></td>
        <td id="LC2689" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Sendrecv</span>(c[<span class="pl-c1">0</span>],n,MPI_UNSIGNED_CHAR,p_rank-<span class="pl-c1">1</span>,<span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L2690" class="blob-num js-line-number" data-line-number="2690"></td>
        <td id="LC2690" class="blob-code blob-code-inner js-file-line">                     c[<span class="pl-c1">3</span>],n,MPI_UNSIGNED_CHAR,p_rank+<span class="pl-c1">1</span>,<span class="pl-c1">0</span>,MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2691" class="blob-num js-line-number" data-line-number="2691"></td>
        <td id="LC2691" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2692" class="blob-num js-line-number" data-line-number="2692"></td>
        <td id="LC2692" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(p_rank == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2693" class="blob-num js-line-number" data-line-number="2693"></td>
        <td id="LC2693" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Sendrecv</span>(c[<span class="pl-c1">1</span>],n,MPI_UNSIGNED_CHAR,<span class="pl-c1">1</span>,<span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L2694" class="blob-num js-line-number" data-line-number="2694"></td>
        <td id="LC2694" class="blob-code blob-code-inner js-file-line">                     c[<span class="pl-c1">2</span>],n,MPI_UNSIGNED_CHAR,size-<span class="pl-c1">1</span>,<span class="pl-c1">1</span>,MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2695" class="blob-num js-line-number" data-line-number="2695"></td>
        <td id="LC2695" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(p_rank == size-<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L2696" class="blob-num js-line-number" data-line-number="2696"></td>
        <td id="LC2696" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Sendrecv</span>(c[<span class="pl-c1">1</span>],n,MPI_UNSIGNED_CHAR,<span class="pl-c1">0</span>,<span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L2697" class="blob-num js-line-number" data-line-number="2697"></td>
        <td id="LC2697" class="blob-code blob-code-inner js-file-line">                     c[<span class="pl-c1">2</span>],n,MPI_UNSIGNED_CHAR,size-<span class="pl-c1">2</span>,<span class="pl-c1">1</span>,MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2698" class="blob-num js-line-number" data-line-number="2698"></td>
        <td id="LC2698" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>((p_rank) &amp;&amp; (p_rank &lt; size-<span class="pl-c1">1</span>))</td>
      </tr>
      <tr>
        <td id="L2699" class="blob-num js-line-number" data-line-number="2699"></td>
        <td id="LC2699" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Sendrecv</span>(c[<span class="pl-c1">1</span>],n,MPI_UNSIGNED_CHAR,p_rank+<span class="pl-c1">1</span>,<span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L2700" class="blob-num js-line-number" data-line-number="2700"></td>
        <td id="LC2700" class="blob-code blob-code-inner js-file-line">                     c[<span class="pl-c1">2</span>],n,MPI_UNSIGNED_CHAR,p_rank-<span class="pl-c1">1</span>,<span class="pl-c1">1</span>,MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2701" class="blob-num js-line-number" data-line-number="2701"></td>
        <td id="LC2701" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2702" class="blob-num js-line-number" data-line-number="2702"></td>
        <td id="LC2702" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2703" class="blob-num js-line-number" data-line-number="2703"></td>
        <td id="LC2703" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">MPI_ShareField</span>(<span class="pl-k">unsigned</span> <span class="pl-k">short</span> **cl, <span class="pl-k">unsigned</span> <span class="pl-k">short</span> ***cp, <span class="pl-k">int</span> n) {</td>
      </tr>
      <tr>
        <td id="L2704" class="blob-num js-line-number" data-line-number="2704"></td>
        <td id="LC2704" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2705" class="blob-num js-line-number" data-line-number="2705"></td>
        <td id="LC2705" class="blob-code blob-code-inner js-file-line">    MPI_Status status;</td>
      </tr>
      <tr>
        <td id="L2706" class="blob-num js-line-number" data-line-number="2706"></td>
        <td id="LC2706" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span>(<span class="pl-k">int</span> haut=<span class="pl-c1">0</span>;haut&lt;(HEIGHT+<span class="pl-c1">1</span>);haut++) {</td>
      </tr>
      <tr>
        <td id="L2707" class="blob-num js-line-number" data-line-number="2707"></td>
        <td id="LC2707" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(p_rank == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2708" class="blob-num js-line-number" data-line-number="2708"></td>
        <td id="LC2708" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">MPI_Sendrecv</span>(cl[haut],n,MPI_UNSIGNED_SHORT,size-<span class="pl-c1">1</span>,haut,</td>
      </tr>
      <tr>
        <td id="L2709" class="blob-num js-line-number" data-line-number="2709"></td>
        <td id="LC2709" class="blob-code blob-code-inner js-file-line">                         cp[<span class="pl-c1">1</span>][haut],n,MPI_UNSIGNED_SHORT,<span class="pl-c1">1</span>,haut,</td>
      </tr>
      <tr>
        <td id="L2710" class="blob-num js-line-number" data-line-number="2710"></td>
        <td id="LC2710" class="blob-code blob-code-inner js-file-line">                         MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2711" class="blob-num js-line-number" data-line-number="2711"></td>
        <td id="LC2711" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(p_rank == size-<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L2712" class="blob-num js-line-number" data-line-number="2712"></td>
        <td id="LC2712" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">MPI_Sendrecv</span>(cl[haut],n,MPI_UNSIGNED_SHORT,size-<span class="pl-c1">2</span>,haut,</td>
      </tr>
      <tr>
        <td id="L2713" class="blob-num js-line-number" data-line-number="2713"></td>
        <td id="LC2713" class="blob-code blob-code-inner js-file-line">                         cp[<span class="pl-c1">1</span>][haut],n,MPI_UNSIGNED_SHORT,<span class="pl-c1">0</span>,haut,</td>
      </tr>
      <tr>
        <td id="L2714" class="blob-num js-line-number" data-line-number="2714"></td>
        <td id="LC2714" class="blob-code blob-code-inner js-file-line">                         MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2715" class="blob-num js-line-number" data-line-number="2715"></td>
        <td id="LC2715" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>((p_rank) &amp;&amp; (p_rank &lt; size-<span class="pl-c1">1</span>))</td>
      </tr>
      <tr>
        <td id="L2716" class="blob-num js-line-number" data-line-number="2716"></td>
        <td id="LC2716" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">MPI_Sendrecv</span>(cl[haut],n,MPI_UNSIGNED_SHORT,p_rank-<span class="pl-c1">1</span>,haut,</td>
      </tr>
      <tr>
        <td id="L2717" class="blob-num js-line-number" data-line-number="2717"></td>
        <td id="LC2717" class="blob-code blob-code-inner js-file-line">                         cp[<span class="pl-c1">1</span>][haut],n,MPI_UNSIGNED_SHORT,p_rank+<span class="pl-c1">1</span>,haut,</td>
      </tr>
      <tr>
        <td id="L2718" class="blob-num js-line-number" data-line-number="2718"></td>
        <td id="LC2718" class="blob-code blob-code-inner js-file-line">                         MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2719" class="blob-num js-line-number" data-line-number="2719"></td>
        <td id="LC2719" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2720" class="blob-num js-line-number" data-line-number="2720"></td>
        <td id="LC2720" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(p_rank == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2721" class="blob-num js-line-number" data-line-number="2721"></td>
        <td id="LC2721" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">MPI_Sendrecv</span>(cl[haut]+sites,n,MPI_UNSIGNED_SHORT,<span class="pl-c1">1</span>,haut+HEIGHT,</td>
      </tr>
      <tr>
        <td id="L2722" class="blob-num js-line-number" data-line-number="2722"></td>
        <td id="LC2722" class="blob-code blob-code-inner js-file-line">                         cp[<span class="pl-c1">0</span>][haut],n,MPI_UNSIGNED_SHORT,size-<span class="pl-c1">1</span>,haut+HEIGHT,</td>
      </tr>
      <tr>
        <td id="L2723" class="blob-num js-line-number" data-line-number="2723"></td>
        <td id="LC2723" class="blob-code blob-code-inner js-file-line">                         MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2724" class="blob-num js-line-number" data-line-number="2724"></td>
        <td id="LC2724" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>(p_rank == size-<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L2725" class="blob-num js-line-number" data-line-number="2725"></td>
        <td id="LC2725" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">MPI_Sendrecv</span>(cl[haut]+sites,n,MPI_UNSIGNED_SHORT,<span class="pl-c1">0</span>,haut+HEIGHT,</td>
      </tr>
      <tr>
        <td id="L2726" class="blob-num js-line-number" data-line-number="2726"></td>
        <td id="LC2726" class="blob-code blob-code-inner js-file-line">                         cp[<span class="pl-c1">0</span>][haut],n,MPI_UNSIGNED_SHORT,size-<span class="pl-c1">2</span>,haut+HEIGHT,</td>
      </tr>
      <tr>
        <td id="L2727" class="blob-num js-line-number" data-line-number="2727"></td>
        <td id="LC2727" class="blob-code blob-code-inner js-file-line">                         MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2728" class="blob-num js-line-number" data-line-number="2728"></td>
        <td id="LC2728" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span>((p_rank) &amp;&amp; (p_rank &lt; size-<span class="pl-c1">1</span>))</td>
      </tr>
      <tr>
        <td id="L2729" class="blob-num js-line-number" data-line-number="2729"></td>
        <td id="LC2729" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">MPI_Sendrecv</span>(cl[haut]+sites,n,MPI_UNSIGNED_SHORT,p_rank+<span class="pl-c1">1</span>,haut+HEIGHT,</td>
      </tr>
      <tr>
        <td id="L2730" class="blob-num js-line-number" data-line-number="2730"></td>
        <td id="LC2730" class="blob-code blob-code-inner js-file-line">                         cp[<span class="pl-c1">0</span>][haut],n,MPI_UNSIGNED_SHORT,p_rank-<span class="pl-c1">1</span>,haut+HEIGHT,</td>
      </tr>
      <tr>
        <td id="L2731" class="blob-num js-line-number" data-line-number="2731"></td>
        <td id="LC2731" class="blob-code blob-code-inner js-file-line">                         MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2732" class="blob-num js-line-number" data-line-number="2732"></td>
        <td id="LC2732" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2733" class="blob-num js-line-number" data-line-number="2733"></td>
        <td id="LC2733" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2734" class="blob-num js-line-number" data-line-number="2734"></td>
        <td id="LC2734" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2735" class="blob-num js-line-number" data-line-number="2735"></td>
        <td id="LC2735" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">MPI_ShareTreefall</span>(<span class="pl-k">unsigned</span> <span class="pl-k">short</span> **c, <span class="pl-k">int</span> n) {</td>
      </tr>
      <tr>
        <td id="L2736" class="blob-num js-line-number" data-line-number="2736"></td>
        <td id="LC2736" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2737" class="blob-num js-line-number" data-line-number="2737"></td>
        <td id="LC2737" class="blob-code blob-code-inner js-file-line">    MPI_Status status;</td>
      </tr>
      <tr>
        <td id="L2738" class="blob-num js-line-number" data-line-number="2738"></td>
        <td id="LC2738" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(p_rank == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2739" class="blob-num js-line-number" data-line-number="2739"></td>
        <td id="LC2739" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Sendrecv</span>(c[<span class="pl-c1">0</span>],n,MPI_UNSIGNED_SHORT,size-<span class="pl-c1">1</span>,<span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L2740" class="blob-num js-line-number" data-line-number="2740"></td>
        <td id="LC2740" class="blob-code blob-code-inner js-file-line">                     c[<span class="pl-c1">2</span>],n,MPI_UNSIGNED_SHORT,<span class="pl-c1">1</span>,<span class="pl-c1">0</span>,MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2741" class="blob-num js-line-number" data-line-number="2741"></td>
        <td id="LC2741" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(p_rank == size-<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L2742" class="blob-num js-line-number" data-line-number="2742"></td>
        <td id="LC2742" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Sendrecv</span>(c[<span class="pl-c1">0</span>],n,MPI_UNSIGNED_SHORT,size-<span class="pl-c1">2</span>,<span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L2743" class="blob-num js-line-number" data-line-number="2743"></td>
        <td id="LC2743" class="blob-code blob-code-inner js-file-line">                     c[<span class="pl-c1">2</span>],n,MPI_UNSIGNED_SHORT,<span class="pl-c1">0</span>,<span class="pl-c1">0</span>,MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2744" class="blob-num js-line-number" data-line-number="2744"></td>
        <td id="LC2744" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>((p_rank) &amp;&amp; (p_rank &lt; size-<span class="pl-c1">1</span>))</td>
      </tr>
      <tr>
        <td id="L2745" class="blob-num js-line-number" data-line-number="2745"></td>
        <td id="LC2745" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Sendrecv</span>(c[<span class="pl-c1">0</span>],n,MPI_UNSIGNED_SHORT,p_rank-<span class="pl-c1">1</span>,<span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L2746" class="blob-num js-line-number" data-line-number="2746"></td>
        <td id="LC2746" class="blob-code blob-code-inner js-file-line">                     c[<span class="pl-c1">2</span>],n,MPI_UNSIGNED_SHORT,p_rank+<span class="pl-c1">1</span>,<span class="pl-c1">0</span>,MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2747" class="blob-num js-line-number" data-line-number="2747"></td>
        <td id="LC2747" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2748" class="blob-num js-line-number" data-line-number="2748"></td>
        <td id="LC2748" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(p_rank == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2749" class="blob-num js-line-number" data-line-number="2749"></td>
        <td id="LC2749" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Sendrecv</span>(c[<span class="pl-c1">0</span>]+<span class="pl-c1">2</span>*n,n,MPI_UNSIGNED_SHORT,<span class="pl-c1">1</span>,<span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L2750" class="blob-num js-line-number" data-line-number="2750"></td>
        <td id="LC2750" class="blob-code blob-code-inner js-file-line">                     c[<span class="pl-c1">1</span>],n,MPI_UNSIGNED_SHORT,size-<span class="pl-c1">1</span>,<span class="pl-c1">1</span>,MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2751" class="blob-num js-line-number" data-line-number="2751"></td>
        <td id="LC2751" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(p_rank == size-<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L2752" class="blob-num js-line-number" data-line-number="2752"></td>
        <td id="LC2752" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Sendrecv</span>(c[<span class="pl-c1">0</span>]+<span class="pl-c1">2</span>*n,n,MPI_UNSIGNED_SHORT,<span class="pl-c1">0</span>,<span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L2753" class="blob-num js-line-number" data-line-number="2753"></td>
        <td id="LC2753" class="blob-code blob-code-inner js-file-line">                     c[<span class="pl-c1">1</span>],n,MPI_UNSIGNED_SHORT,size-<span class="pl-c1">2</span>,<span class="pl-c1">1</span>,MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2754" class="blob-num js-line-number" data-line-number="2754"></td>
        <td id="LC2754" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>((p_rank) &amp;&amp; (p_rank &lt; size-<span class="pl-c1">1</span>))</td>
      </tr>
      <tr>
        <td id="L2755" class="blob-num js-line-number" data-line-number="2755"></td>
        <td id="LC2755" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">MPI_Sendrecv</span>(c[<span class="pl-c1">0</span>]+<span class="pl-c1">2</span>*n,n,MPI_UNSIGNED_SHORT,p_rank+<span class="pl-c1">1</span>,<span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L2756" class="blob-num js-line-number" data-line-number="2756"></td>
        <td id="LC2756" class="blob-code blob-code-inner js-file-line">                     c[<span class="pl-c1">1</span>],n,MPI_UNSIGNED_SHORT,p_rank-<span class="pl-c1">1</span>,<span class="pl-c1">1</span>,MPI_COMM_WORLD,&amp;status);</td>
      </tr>
      <tr>
        <td id="L2757" class="blob-num js-line-number" data-line-number="2757"></td>
        <td id="LC2757" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2758" class="blob-num js-line-number" data-line-number="2758"></td>
        <td id="LC2758" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2759" class="blob-num js-line-number" data-line-number="2759"></td>
        <td id="LC2759" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2760" class="blob-num js-line-number" data-line-number="2760"></td>
        <td id="LC2760" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2761" class="blob-num js-line-number" data-line-number="2761"></td>
        <td id="LC2761" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2762" class="blob-num js-line-number" data-line-number="2762"></td>
        <td id="LC2762" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2763" class="blob-num js-line-number" data-line-number="2763"></td>
        <td id="LC2763" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>*****************************************</span></td>
      </tr>
      <tr>
        <td id="L2764" class="blob-num js-line-number" data-line-number="2764"></td>
        <td id="LC2764" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ******************************************</span></td>
      </tr>
      <tr>
        <td id="L2765" class="blob-num js-line-number" data-line-number="2765"></td>
        <td id="LC2765" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *******  Free dynamic memory  ************</span></td>
      </tr>
      <tr>
        <td id="L2766" class="blob-num js-line-number" data-line-number="2766"></td>
        <td id="LC2766" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ******************************************</span></td>
      </tr>
      <tr>
        <td id="L2767" class="blob-num js-line-number" data-line-number="2767"></td>
        <td id="LC2767" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *****************************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2768" class="blob-num js-line-number" data-line-number="2768"></td>
        <td id="LC2768" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2769" class="blob-num js-line-number" data-line-number="2769"></td>
        <td id="LC2769" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">FreeMem</span> () {</td>
      </tr>
      <tr>
        <td id="L2770" class="blob-num js-line-number" data-line-number="2770"></td>
        <td id="LC2770" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2771" class="blob-num js-line-number" data-line-number="2771"></td>
        <td id="LC2771" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">delete []</span> T;</td>
      </tr>
      <tr>
        <td id="L2772" class="blob-num js-line-number" data-line-number="2772"></td>
        <td id="LC2772" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">delete []</span> S;</td>
      </tr>
      <tr>
        <td id="L2773" class="blob-num js-line-number" data-line-number="2773"></td>
        <td id="LC2773" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">delete []</span> nbdbh;</td>
      </tr>
      <tr>
        <td id="L2774" class="blob-num js-line-number" data-line-number="2774"></td>
        <td id="LC2774" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">delete []</span> layer;</td>
      </tr>
      <tr>
        <td id="L2775" class="blob-num js-line-number" data-line-number="2775"></td>
        <td id="LC2775" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">delete []</span> SPECIES_GERM;</td>
      </tr>
      <tr>
        <td id="L2776" class="blob-num js-line-number" data-line-number="2776"></td>
        <td id="LC2776" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(_SEEDTRADEOFF){</td>
      </tr>
      <tr>
        <td id="L2777" class="blob-num js-line-number" data-line-number="2777"></td>
        <td id="LC2777" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">delete []</span> PROB_S;</td>
      </tr>
      <tr>
        <td id="L2778" class="blob-num js-line-number" data-line-number="2778"></td>
        <td id="LC2778" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2779" class="blob-num js-line-number" data-line-number="2779"></td>
        <td id="LC2779" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2780" class="blob-num js-line-number" data-line-number="2780"></td>
        <td id="LC2780" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> h;</td>
      </tr>
      <tr>
        <td id="L2781" class="blob-num js-line-number" data-line-number="2781"></td>
        <td id="LC2781" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (h=<span class="pl-c1">0</span>; h&lt;(HEIGHT+<span class="pl-c1">1</span>); h++) {</td>
      </tr>
      <tr>
        <td id="L2782" class="blob-num js-line-number" data-line-number="2782"></td>
        <td id="LC2782" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">delete []</span> LAI3D[h];</td>
      </tr>
      <tr>
        <td id="L2783" class="blob-num js-line-number" data-line-number="2783"></td>
        <td id="LC2783" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2784" class="blob-num js-line-number" data-line-number="2784"></td>
        <td id="LC2784" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">delete []</span> LAI3D;</td>
      </tr>
      <tr>
        <td id="L2785" class="blob-num js-line-number" data-line-number="2785"></td>
        <td id="LC2785" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2786" class="blob-num js-line-number" data-line-number="2786"></td>
        <td id="LC2786" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> i;</td>
      </tr>
      <tr>
        <td id="L2787" class="blob-num js-line-number" data-line-number="2787"></td>
        <td id="LC2787" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (i=<span class="pl-c1">0</span>; i&lt;<span class="pl-c1">3</span>; i++) {</td>
      </tr>
      <tr>
        <td id="L2788" class="blob-num js-line-number" data-line-number="2788"></td>
        <td id="LC2788" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">delete []</span> Thurt[i];</td>
      </tr>
      <tr>
        <td id="L2789" class="blob-num js-line-number" data-line-number="2789"></td>
        <td id="LC2789" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2790" class="blob-num js-line-number" data-line-number="2790"></td>
        <td id="LC2790" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2791" class="blob-num js-line-number" data-line-number="2791"></td>
        <td id="LC2791" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2792" class="blob-num js-line-number" data-line-number="2792"></td>
        <td id="LC2792" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2793" class="blob-num js-line-number" data-line-number="2793"></td>
        <td id="LC2793" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**********************************</span></td>
      </tr>
      <tr>
        <td id="L2794" class="blob-num js-line-number" data-line-number="2794"></td>
        <td id="LC2794" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ***********************************</span></td>
      </tr>
      <tr>
        <td id="L2795" class="blob-num js-line-number" data-line-number="2795"></td>
        <td id="LC2795" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ***** RANDOM NUMBER GENERATOR *****</span></td>
      </tr>
      <tr>
        <td id="L2796" class="blob-num js-line-number" data-line-number="2796"></td>
        <td id="LC2796" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ***********************************</span></td>
      </tr>
      <tr>
        <td id="L2797" class="blob-num js-line-number" data-line-number="2797"></td>
        <td id="LC2797" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> **********************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2798" class="blob-num js-line-number" data-line-number="2798"></td>
        <td id="LC2798" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2799" class="blob-num js-line-number" data-line-number="2799"></td>
        <td id="LC2799" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Copyright (C) 1997 Makoto Matsumoto and Takuji Nishimura.       <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2800" class="blob-num js-line-number" data-line-number="2800"></td>
        <td id="LC2800" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> When you use this, send an email to: matumoto@math.keio.ac.jp   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2801" class="blob-num js-line-number" data-line-number="2801"></td>
        <td id="LC2801" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> with an appropriate reference to your work.                     <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2802" class="blob-num js-line-number" data-line-number="2802"></td>
        <td id="LC2802" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2803" class="blob-num js-line-number" data-line-number="2803"></td>
        <td id="LC2803" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>#include&lt;stdio.h&gt;</span></td>
      </tr>
      <tr>
        <td id="L2804" class="blob-num js-line-number" data-line-number="2804"></td>
        <td id="LC2804" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2805" class="blob-num js-line-number" data-line-number="2805"></td>
        <td id="LC2805" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Period parameters <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2806" class="blob-num js-line-number" data-line-number="2806"></td>
        <td id="LC2806" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">N</span> <span class="pl-c1">624</span></td>
      </tr>
      <tr>
        <td id="L2807" class="blob-num js-line-number" data-line-number="2807"></td>
        <td id="LC2807" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">M</span> <span class="pl-c1">397</span></td>
      </tr>
      <tr>
        <td id="L2808" class="blob-num js-line-number" data-line-number="2808"></td>
        <td id="LC2808" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">MATRIX_A</span> <span class="pl-c1">0x9908b0df</span>   <span class="pl-c"><span class="pl-c">/*</span> constant vector a <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2809" class="blob-num js-line-number" data-line-number="2809"></td>
        <td id="LC2809" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">UPPER_MASK</span> <span class="pl-c1">0x80000000</span> <span class="pl-c"><span class="pl-c">/*</span> most significant w-r bits <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2810" class="blob-num js-line-number" data-line-number="2810"></td>
        <td id="LC2810" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">LOWER_MASK</span> <span class="pl-c1">0x7fffffff</span> <span class="pl-c"><span class="pl-c">/*</span> least significant r bits <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2811" class="blob-num js-line-number" data-line-number="2811"></td>
        <td id="LC2811" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2812" class="blob-num js-line-number" data-line-number="2812"></td>
        <td id="LC2812" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Tempering parameters <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2813" class="blob-num js-line-number" data-line-number="2813"></td>
        <td id="LC2813" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">TEMPERING_MASK_B</span> <span class="pl-c1">0x9d2c5680</span></td>
      </tr>
      <tr>
        <td id="L2814" class="blob-num js-line-number" data-line-number="2814"></td>
        <td id="LC2814" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">TEMPERING_MASK_C</span> <span class="pl-c1">0xefc60000</span></td>
      </tr>
      <tr>
        <td id="L2815" class="blob-num js-line-number" data-line-number="2815"></td>
        <td id="LC2815" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">TEMPERING_SHIFT_U</span>(<span class="pl-v">y</span>)  (y &gt;&gt; <span class="pl-c1">11</span>)</td>
      </tr>
      <tr>
        <td id="L2816" class="blob-num js-line-number" data-line-number="2816"></td>
        <td id="LC2816" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">TEMPERING_SHIFT_S</span>(<span class="pl-v">y</span>)  (y &lt;&lt; <span class="pl-c1">7</span>)</td>
      </tr>
      <tr>
        <td id="L2817" class="blob-num js-line-number" data-line-number="2817"></td>
        <td id="LC2817" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">TEMPERING_SHIFT_T</span>(<span class="pl-v">y</span>)  (y &lt;&lt; <span class="pl-c1">15</span>)</td>
      </tr>
      <tr>
        <td id="L2818" class="blob-num js-line-number" data-line-number="2818"></td>
        <td id="LC2818" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">TEMPERING_SHIFT_L</span>(<span class="pl-v">y</span>)  (y &gt;&gt; <span class="pl-c1">18</span>)</td>
      </tr>
      <tr>
        <td id="L2819" class="blob-num js-line-number" data-line-number="2819"></td>
        <td id="LC2819" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2820" class="blob-num js-line-number" data-line-number="2820"></td>
        <td id="LC2820" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">unsigned</span> <span class="pl-k">long</span> mt[N]; <span class="pl-c"><span class="pl-c">/*</span> the array for the state vector  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2821" class="blob-num js-line-number" data-line-number="2821"></td>
        <td id="LC2821" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span> mti=N+<span class="pl-c1">1</span>; <span class="pl-c"><span class="pl-c">/*</span> mti==N+1 means mt[N] is not initialized <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2822" class="blob-num js-line-number" data-line-number="2822"></td>
        <td id="LC2822" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2823" class="blob-num js-line-number" data-line-number="2823"></td>
        <td id="LC2823" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> initializing the array with a NONZERO seed <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2824" class="blob-num js-line-number" data-line-number="2824"></td>
        <td id="LC2824" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">sgenrand2</span>(<span class="pl-k">unsigned</span> <span class="pl-k">long</span> seed)</td>
      </tr>
      <tr>
        <td id="L2825" class="blob-num js-line-number" data-line-number="2825"></td>
        <td id="LC2825" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2826" class="blob-num js-line-number" data-line-number="2826"></td>
        <td id="LC2826" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> setting initial seeds to mt[N] using         <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2827" class="blob-num js-line-number" data-line-number="2827"></td>
        <td id="LC2827" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> the generator Line 25 of Table 1 in          <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2828" class="blob-num js-line-number" data-line-number="2828"></td>
        <td id="LC2828" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> [KNUTH 1981, The Art of Computer Programming <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2829" class="blob-num js-line-number" data-line-number="2829"></td>
        <td id="LC2829" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>    Vol. 2 (2nd Ed.), pp102]                  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2830" class="blob-num js-line-number" data-line-number="2830"></td>
        <td id="LC2830" class="blob-code blob-code-inner js-file-line">    mt[<span class="pl-c1">0</span>]= seed &amp; <span class="pl-c1">0xffffffff</span>;</td>
      </tr>
      <tr>
        <td id="L2831" class="blob-num js-line-number" data-line-number="2831"></td>
        <td id="LC2831" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (mti=<span class="pl-c1">1</span>; mti&lt;N; mti++)</td>
      </tr>
      <tr>
        <td id="L2832" class="blob-num js-line-number" data-line-number="2832"></td>
        <td id="LC2832" class="blob-code blob-code-inner js-file-line">        mt[mti] = (<span class="pl-c1">69069</span> * mt[mti-<span class="pl-c1">1</span>]) &amp; <span class="pl-c1">0xffffffff</span>;</td>
      </tr>
      <tr>
        <td id="L2833" class="blob-num js-line-number" data-line-number="2833"></td>
        <td id="LC2833" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2834" class="blob-num js-line-number" data-line-number="2834"></td>
        <td id="LC2834" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2835" class="blob-num js-line-number" data-line-number="2835"></td>
        <td id="LC2835" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> generating reals <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2836" class="blob-num js-line-number" data-line-number="2836"></td>
        <td id="LC2836" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> unsigned long <span class="pl-c">*/</span></span> <span class="pl-c"><span class="pl-c">/*</span> for integer generation <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2837" class="blob-num js-line-number" data-line-number="2837"></td>
        <td id="LC2837" class="blob-code blob-code-inner js-file-line"><span class="pl-k">double</span> <span class="pl-en">genrand2</span>()</td>
      </tr>
      <tr>
        <td id="L2838" class="blob-num js-line-number" data-line-number="2838"></td>
        <td id="LC2838" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2839" class="blob-num js-line-number" data-line-number="2839"></td>
        <td id="LC2839" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">long</span> y;</td>
      </tr>
      <tr>
        <td id="L2840" class="blob-num js-line-number" data-line-number="2840"></td>
        <td id="LC2840" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">unsigned</span> <span class="pl-k">long</span> mag01[<span class="pl-c1">2</span>]={<span class="pl-c1">0x0</span>, MATRIX_A};</td>
      </tr>
      <tr>
        <td id="L2841" class="blob-num js-line-number" data-line-number="2841"></td>
        <td id="LC2841" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> mag01[x] = x * MATRIX_A  for x=0,1 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2842" class="blob-num js-line-number" data-line-number="2842"></td>
        <td id="LC2842" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2843" class="blob-num js-line-number" data-line-number="2843"></td>
        <td id="LC2843" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (mti &gt;= N) { <span class="pl-c"><span class="pl-c">/*</span> generate N words at one time <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2844" class="blob-num js-line-number" data-line-number="2844"></td>
        <td id="LC2844" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">int</span> kk;</td>
      </tr>
      <tr>
        <td id="L2845" class="blob-num js-line-number" data-line-number="2845"></td>
        <td id="LC2845" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2846" class="blob-num js-line-number" data-line-number="2846"></td>
        <td id="LC2846" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (mti == N+<span class="pl-c1">1</span>)   <span class="pl-c"><span class="pl-c">/*</span> if sgenrand() has not been called, <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2847" class="blob-num js-line-number" data-line-number="2847"></td>
        <td id="LC2847" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sgenrand2</span>(<span class="pl-c1">4357</span>); <span class="pl-c"><span class="pl-c">/*</span> a default initial seed is used   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2848" class="blob-num js-line-number" data-line-number="2848"></td>
        <td id="LC2848" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2849" class="blob-num js-line-number" data-line-number="2849"></td>
        <td id="LC2849" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (kk=<span class="pl-c1">0</span>;kk&lt;N-M;kk++) {</td>
      </tr>
      <tr>
        <td id="L2850" class="blob-num js-line-number" data-line-number="2850"></td>
        <td id="LC2850" class="blob-code blob-code-inner js-file-line">            y = (mt[kk]&amp;UPPER_MASK)|(mt[kk+<span class="pl-c1">1</span>]&amp;LOWER_MASK);</td>
      </tr>
      <tr>
        <td id="L2851" class="blob-num js-line-number" data-line-number="2851"></td>
        <td id="LC2851" class="blob-code blob-code-inner js-file-line">            mt[kk] = mt[kk+M] ^ (y &gt;&gt; <span class="pl-c1">1</span>) ^ mag01[y &amp; <span class="pl-c1">0x1</span>];</td>
      </tr>
      <tr>
        <td id="L2852" class="blob-num js-line-number" data-line-number="2852"></td>
        <td id="LC2852" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2853" class="blob-num js-line-number" data-line-number="2853"></td>
        <td id="LC2853" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (;kk&lt;N-<span class="pl-c1">1</span>;kk++) {</td>
      </tr>
      <tr>
        <td id="L2854" class="blob-num js-line-number" data-line-number="2854"></td>
        <td id="LC2854" class="blob-code blob-code-inner js-file-line">            y = (mt[kk]&amp;UPPER_MASK)|(mt[kk+<span class="pl-c1">1</span>]&amp;LOWER_MASK);</td>
      </tr>
      <tr>
        <td id="L2855" class="blob-num js-line-number" data-line-number="2855"></td>
        <td id="LC2855" class="blob-code blob-code-inner js-file-line">            mt[kk] = mt[kk+(M-N)] ^ (y &gt;&gt; <span class="pl-c1">1</span>) ^ mag01[y &amp; <span class="pl-c1">0x1</span>];</td>
      </tr>
      <tr>
        <td id="L2856" class="blob-num js-line-number" data-line-number="2856"></td>
        <td id="LC2856" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2857" class="blob-num js-line-number" data-line-number="2857"></td>
        <td id="LC2857" class="blob-code blob-code-inner js-file-line">        y = (mt[N-<span class="pl-c1">1</span>]&amp;UPPER_MASK)|(mt[<span class="pl-c1">0</span>]&amp;LOWER_MASK);</td>
      </tr>
      <tr>
        <td id="L2858" class="blob-num js-line-number" data-line-number="2858"></td>
        <td id="LC2858" class="blob-code blob-code-inner js-file-line">        mt[N-<span class="pl-c1">1</span>] = mt[M-<span class="pl-c1">1</span>] ^ (y &gt;&gt; <span class="pl-c1">1</span>) ^ mag01[y &amp; <span class="pl-c1">0x1</span>];</td>
      </tr>
      <tr>
        <td id="L2859" class="blob-num js-line-number" data-line-number="2859"></td>
        <td id="LC2859" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2860" class="blob-num js-line-number" data-line-number="2860"></td>
        <td id="LC2860" class="blob-code blob-code-inner js-file-line">        mti = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2861" class="blob-num js-line-number" data-line-number="2861"></td>
        <td id="LC2861" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2862" class="blob-num js-line-number" data-line-number="2862"></td>
        <td id="LC2862" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2863" class="blob-num js-line-number" data-line-number="2863"></td>
        <td id="LC2863" class="blob-code blob-code-inner js-file-line">    y = mt[mti++];</td>
      </tr>
      <tr>
        <td id="L2864" class="blob-num js-line-number" data-line-number="2864"></td>
        <td id="LC2864" class="blob-code blob-code-inner js-file-line">    y ^= <span class="pl-c1">TEMPERING_SHIFT_U</span>(y);</td>
      </tr>
      <tr>
        <td id="L2865" class="blob-num js-line-number" data-line-number="2865"></td>
        <td id="LC2865" class="blob-code blob-code-inner js-file-line">    y ^= <span class="pl-c1">TEMPERING_SHIFT_S</span>(y) &amp; TEMPERING_MASK_B;</td>
      </tr>
      <tr>
        <td id="L2866" class="blob-num js-line-number" data-line-number="2866"></td>
        <td id="LC2866" class="blob-code blob-code-inner js-file-line">    y ^= <span class="pl-c1">TEMPERING_SHIFT_T</span>(y) &amp; TEMPERING_MASK_C;</td>
      </tr>
      <tr>
        <td id="L2867" class="blob-num js-line-number" data-line-number="2867"></td>
        <td id="LC2867" class="blob-code blob-code-inner js-file-line">    y ^= <span class="pl-c1">TEMPERING_SHIFT_L</span>(y);</td>
      </tr>
      <tr>
        <td id="L2868" class="blob-num js-line-number" data-line-number="2868"></td>
        <td id="LC2868" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2869" class="blob-num js-line-number" data-line-number="2869"></td>
        <td id="LC2869" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> ( (<span class="pl-k">double</span>)y / (<span class="pl-k">unsigned</span> <span class="pl-k">long</span>)<span class="pl-c1">0xffffffff</span> ); <span class="pl-c"><span class="pl-c">/*</span> reals <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2870" class="blob-num js-line-number" data-line-number="2870"></td>
        <td id="LC2870" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> return y; <span class="pl-c">*/</span></span> <span class="pl-c"><span class="pl-c">/*</span> for integer generation <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2871" class="blob-num js-line-number" data-line-number="2871"></td>
        <td id="LC2871" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2872" class="blob-num js-line-number" data-line-number="2872"></td>
        <td id="LC2872" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2873" class="blob-num js-line-number" data-line-number="2873"></td>
        <td id="LC2873" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2874" class="blob-num js-line-number" data-line-number="2874"></td>
        <td id="LC2874" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> initializing the array with a NONZERO seed <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2875" class="blob-num js-line-number" data-line-number="2875"></td>
        <td id="LC2875" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">sgenrand2i</span>(<span class="pl-k">unsigned</span> <span class="pl-k">long</span> seed)</td>
      </tr>
      <tr>
        <td id="L2876" class="blob-num js-line-number" data-line-number="2876"></td>
        <td id="LC2876" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2877" class="blob-num js-line-number" data-line-number="2877"></td>
        <td id="LC2877" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> setting initial seeds to mt[N] using         <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2878" class="blob-num js-line-number" data-line-number="2878"></td>
        <td id="LC2878" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> the generator Line 25 of Table 1 in          <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2879" class="blob-num js-line-number" data-line-number="2879"></td>
        <td id="LC2879" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> [KNUTH 1981, The Art of Computer Programming <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2880" class="blob-num js-line-number" data-line-number="2880"></td>
        <td id="LC2880" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span>    Vol. 2 (2nd Ed.), pp102]                  <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2881" class="blob-num js-line-number" data-line-number="2881"></td>
        <td id="LC2881" class="blob-code blob-code-inner js-file-line">    mt[<span class="pl-c1">0</span>]= seed &amp; <span class="pl-c1">0xffffffff</span>;</td>
      </tr>
      <tr>
        <td id="L2882" class="blob-num js-line-number" data-line-number="2882"></td>
        <td id="LC2882" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (mti=<span class="pl-c1">1</span>; mti&lt;N; mti++)</td>
      </tr>
      <tr>
        <td id="L2883" class="blob-num js-line-number" data-line-number="2883"></td>
        <td id="LC2883" class="blob-code blob-code-inner js-file-line">        mt[mti] = (<span class="pl-c1">69069</span> * mt[mti-<span class="pl-c1">1</span>]) &amp; <span class="pl-c1">0xffffffff</span>;</td>
      </tr>
      <tr>
        <td id="L2884" class="blob-num js-line-number" data-line-number="2884"></td>
        <td id="LC2884" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2885" class="blob-num js-line-number" data-line-number="2885"></td>
        <td id="LC2885" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2886" class="blob-num js-line-number" data-line-number="2886"></td>
        <td id="LC2886" class="blob-code blob-code-inner js-file-line"><span class="pl-k">unsigned</span> <span class="pl-k">long</span> <span class="pl-en">genrand2i</span>()</td>
      </tr>
      <tr>
        <td id="L2887" class="blob-num js-line-number" data-line-number="2887"></td>
        <td id="LC2887" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2888" class="blob-num js-line-number" data-line-number="2888"></td>
        <td id="LC2888" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">long</span> y;</td>
      </tr>
      <tr>
        <td id="L2889" class="blob-num js-line-number" data-line-number="2889"></td>
        <td id="LC2889" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">unsigned</span> <span class="pl-k">long</span> mag01[<span class="pl-c1">2</span>]={<span class="pl-c1">0x0</span>, MATRIX_A};</td>
      </tr>
      <tr>
        <td id="L2890" class="blob-num js-line-number" data-line-number="2890"></td>
        <td id="LC2890" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">/*</span> mag01[x] = x * MATRIX_A  for x=0,1 <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2891" class="blob-num js-line-number" data-line-number="2891"></td>
        <td id="LC2891" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2892" class="blob-num js-line-number" data-line-number="2892"></td>
        <td id="LC2892" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (mti &gt;= N) { <span class="pl-c"><span class="pl-c">/*</span> generate N words at one time <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2893" class="blob-num js-line-number" data-line-number="2893"></td>
        <td id="LC2893" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">int</span> kk;</td>
      </tr>
      <tr>
        <td id="L2894" class="blob-num js-line-number" data-line-number="2894"></td>
        <td id="LC2894" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2895" class="blob-num js-line-number" data-line-number="2895"></td>
        <td id="LC2895" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (mti == N+<span class="pl-c1">1</span>)   <span class="pl-c"><span class="pl-c">/*</span> if sgenrand() has not been called, <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2896" class="blob-num js-line-number" data-line-number="2896"></td>
        <td id="LC2896" class="blob-code blob-code-inner js-file-line">            <span class="pl-c1">sgenrand2i</span>(<span class="pl-c1">4357</span>); <span class="pl-c"><span class="pl-c">/*</span> a default initial seed is used   <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2897" class="blob-num js-line-number" data-line-number="2897"></td>
        <td id="LC2897" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2898" class="blob-num js-line-number" data-line-number="2898"></td>
        <td id="LC2898" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (kk=<span class="pl-c1">0</span>;kk&lt;N-M;kk++) {</td>
      </tr>
      <tr>
        <td id="L2899" class="blob-num js-line-number" data-line-number="2899"></td>
        <td id="LC2899" class="blob-code blob-code-inner js-file-line">            y = (mt[kk]&amp;UPPER_MASK)|(mt[kk+<span class="pl-c1">1</span>]&amp;LOWER_MASK);</td>
      </tr>
      <tr>
        <td id="L2900" class="blob-num js-line-number" data-line-number="2900"></td>
        <td id="LC2900" class="blob-code blob-code-inner js-file-line">            mt[kk] = mt[kk+M] ^ (y &gt;&gt; <span class="pl-c1">1</span>) ^ mag01[y &amp; <span class="pl-c1">0x1</span>];</td>
      </tr>
      <tr>
        <td id="L2901" class="blob-num js-line-number" data-line-number="2901"></td>
        <td id="LC2901" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2902" class="blob-num js-line-number" data-line-number="2902"></td>
        <td id="LC2902" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (;kk&lt;N-<span class="pl-c1">1</span>;kk++) {</td>
      </tr>
      <tr>
        <td id="L2903" class="blob-num js-line-number" data-line-number="2903"></td>
        <td id="LC2903" class="blob-code blob-code-inner js-file-line">            y = (mt[kk]&amp;UPPER_MASK)|(mt[kk+<span class="pl-c1">1</span>]&amp;LOWER_MASK);</td>
      </tr>
      <tr>
        <td id="L2904" class="blob-num js-line-number" data-line-number="2904"></td>
        <td id="LC2904" class="blob-code blob-code-inner js-file-line">            mt[kk] = mt[kk+(M-N)] ^ (y &gt;&gt; <span class="pl-c1">1</span>) ^ mag01[y &amp; <span class="pl-c1">0x1</span>];</td>
      </tr>
      <tr>
        <td id="L2905" class="blob-num js-line-number" data-line-number="2905"></td>
        <td id="LC2905" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2906" class="blob-num js-line-number" data-line-number="2906"></td>
        <td id="LC2906" class="blob-code blob-code-inner js-file-line">        y = (mt[N-<span class="pl-c1">1</span>]&amp;UPPER_MASK)|(mt[<span class="pl-c1">0</span>]&amp;LOWER_MASK);</td>
      </tr>
      <tr>
        <td id="L2907" class="blob-num js-line-number" data-line-number="2907"></td>
        <td id="LC2907" class="blob-code blob-code-inner js-file-line">        mt[N-<span class="pl-c1">1</span>] = mt[M-<span class="pl-c1">1</span>] ^ (y &gt;&gt; <span class="pl-c1">1</span>) ^ mag01[y &amp; <span class="pl-c1">0x1</span>];</td>
      </tr>
      <tr>
        <td id="L2908" class="blob-num js-line-number" data-line-number="2908"></td>
        <td id="LC2908" class="blob-code blob-code-inner js-file-line">        </td>
      </tr>
      <tr>
        <td id="L2909" class="blob-num js-line-number" data-line-number="2909"></td>
        <td id="LC2909" class="blob-code blob-code-inner js-file-line">        mti = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2910" class="blob-num js-line-number" data-line-number="2910"></td>
        <td id="LC2910" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2911" class="blob-num js-line-number" data-line-number="2911"></td>
        <td id="LC2911" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2912" class="blob-num js-line-number" data-line-number="2912"></td>
        <td id="LC2912" class="blob-code blob-code-inner js-file-line">    y = mt[mti++];</td>
      </tr>
      <tr>
        <td id="L2913" class="blob-num js-line-number" data-line-number="2913"></td>
        <td id="LC2913" class="blob-code blob-code-inner js-file-line">    y ^= <span class="pl-c1">TEMPERING_SHIFT_U</span>(y);</td>
      </tr>
      <tr>
        <td id="L2914" class="blob-num js-line-number" data-line-number="2914"></td>
        <td id="LC2914" class="blob-code blob-code-inner js-file-line">    y ^= <span class="pl-c1">TEMPERING_SHIFT_S</span>(y) &amp; TEMPERING_MASK_B;</td>
      </tr>
      <tr>
        <td id="L2915" class="blob-num js-line-number" data-line-number="2915"></td>
        <td id="LC2915" class="blob-code blob-code-inner js-file-line">    y ^= <span class="pl-c1">TEMPERING_SHIFT_T</span>(y) &amp; TEMPERING_MASK_C;</td>
      </tr>
      <tr>
        <td id="L2916" class="blob-num js-line-number" data-line-number="2916"></td>
        <td id="LC2916" class="blob-code blob-code-inner js-file-line">    y ^= <span class="pl-c1">TEMPERING_SHIFT_L</span>(y);</td>
      </tr>
      <tr>
        <td id="L2917" class="blob-num js-line-number" data-line-number="2917"></td>
        <td id="LC2917" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L2918" class="blob-num js-line-number" data-line-number="2918"></td>
        <td id="LC2918" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> y;</td>
      </tr>
      <tr>
        <td id="L2919" class="blob-num js-line-number" data-line-number="2919"></td>
        <td id="LC2919" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2920" class="blob-num js-line-number" data-line-number="2920"></td>
        <td id="LC2920" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2921" class="blob-num js-line-number" data-line-number="2921"></td>
        <td id="LC2921" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2922" class="blob-num js-line-number" data-line-number="2922"></td>
        <td id="LC2922" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**********************************</span></td>
      </tr>
      <tr>
        <td id="L2923" class="blob-num js-line-number" data-line-number="2923"></td>
        <td id="LC2923" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ***********************************</span></td>
      </tr>
      <tr>
        <td id="L2924" class="blob-num js-line-number" data-line-number="2924"></td>
        <td id="LC2924" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ********** TROLL TOOLBOX **********</span></td>
      </tr>
      <tr>
        <td id="L2925" class="blob-num js-line-number" data-line-number="2925"></td>
        <td id="LC2925" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ***********************************</span></td>
      </tr>
      <tr>
        <td id="L2926" class="blob-num js-line-number" data-line-number="2926"></td>
        <td id="LC2926" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> **********************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2927" class="blob-num js-line-number" data-line-number="2927"></td>
        <td id="LC2927" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2928" class="blob-num js-line-number" data-line-number="2928"></td>
        <td id="LC2928" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2929" class="blob-num js-line-number" data-line-number="2929"></td>
        <td id="LC2929" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> This section includes variations of TROLL procedures that could be used interchangeably with already existing procedures <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2930" class="blob-num js-line-number" data-line-number="2930"></td>
        <td id="LC2930" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> For reasons of readability (syntax highlighting) these sections are kept within a &quot;toolbox&quot; flag instead of commenting them out <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2931" class="blob-num js-line-number" data-line-number="2931"></td>
        <td id="LC2931" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> some of them could also be included as boolean options --&gt; to be discussed <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2932" class="blob-num js-line-number" data-line-number="2932"></td>
        <td id="LC2932" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2933" class="blob-num js-line-number" data-line-number="2933"></td>
        <td id="LC2933" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> toolbox</td>
      </tr>
      <tr>
        <td id="L2934" class="blob-num js-line-number" data-line-number="2934"></td>
        <td id="LC2934" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2935" class="blob-num js-line-number" data-line-number="2935"></td>
        <td id="LC2935" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span>**********************************</span></td>
      </tr>
      <tr>
        <td id="L2936" class="blob-num js-line-number" data-line-number="2936"></td>
        <td id="LC2936" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> ************ FINE FLUX ************</span></td>
      </tr>
      <tr>
        <td id="L2937" class="blob-num js-line-number" data-line-number="2937"></td>
        <td id="LC2937" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> **********************************<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2938" class="blob-num js-line-number" data-line-number="2938"></td>
        <td id="LC2938" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2939" class="blob-num js-line-number" data-line-number="2939"></td>
        <td id="LC2939" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> This is an an alternative version of the flux calculations <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2940" class="blob-num js-line-number" data-line-number="2940"></td>
        <td id="LC2940" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> main idea: remove extremely productive top layers of trees that block entire photosynthesis in lower layers and smear out the effect in a number of finer layers (nb_layers, here chosen to be five) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2941" class="blob-num js-line-number" data-line-number="2941"></td>
        <td id="LC2941" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> be aware: performance cost <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2942" class="blob-num js-line-number" data-line-number="2942"></td>
        <td id="LC2942" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2943" class="blob-num js-line-number" data-line-number="2943"></td>
        <td id="LC2943" class="blob-code blob-code-inner js-file-line"><span class="pl-k">float</span> <span class="pl-en">Tree::Fluxh</span>(<span class="pl-k">int</span> h) {</td>
      </tr>
      <tr>
        <td id="L2944" class="blob-num js-line-number" data-line-number="2944"></td>
        <td id="LC2944" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span> count=<span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L2945" class="blob-num js-line-number" data-line-number="2945"></td>
        <td id="LC2945" class="blob-code blob-code-inner js-file-line">    xx,yy,radius_int,</td>
      </tr>
      <tr>
        <td id="L2946" class="blob-num js-line-number" data-line-number="2946"></td>
        <td id="LC2946" class="blob-code blob-code-inner js-file-line">    nb_layers=<span class="pl-c1">5</span>;                                                   <span class="pl-c"><span class="pl-c">//</span> number of layers for fine resolution of flux</span></td>
      </tr>
      <tr>
        <td id="L2947" class="blob-num js-line-number" data-line-number="2947"></td>
        <td id="LC2947" class="blob-code blob-code-inner js-file-line">    t_VPD=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2948" class="blob-num js-line-number" data-line-number="2948"></td>
        <td id="LC2948" class="blob-code blob-code-inner js-file-line">    t_T=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2949" class="blob-num js-line-number" data-line-number="2949"></td>
        <td id="LC2949" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> absorb=<span class="pl-c1">0.0</span>,flux = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L2950" class="blob-num js-line-number" data-line-number="2950"></td>
        <td id="LC2950" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> absorb_highres=<span class="pl-c1">0.0</span>, flux_highres =<span class="pl-c1">0.0</span>, VPD_highres=<span class="pl-c1">0.0</span> , T_highres=<span class="pl-c1">0.0</span>,</td>
      </tr>
      <tr>
        <td id="L2951" class="blob-num js-line-number" data-line-number="2951"></td>
        <td id="LC2951" class="blob-code blob-code-inner js-file-line">    inb_layers=<span class="pl-c1">1.0</span>/nb_layers;</td>
      </tr>
      <tr>
        <td id="L2952" class="blob-num js-line-number" data-line-number="2952"></td>
        <td id="LC2952" class="blob-code blob-code-inner js-file-line">    radius_int = <span class="pl-c1">int</span>(t_Crown_Radius);</td>
      </tr>
      <tr>
        <td id="L2953" class="blob-num js-line-number" data-line-number="2953"></td>
        <td id="LC2953" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span>(radius_int == <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L2954" class="blob-num js-line-number" data-line-number="2954"></td>
        <td id="LC2954" class="blob-code blob-code-inner js-file-line">        count=<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L2955" class="blob-num js-line-number" data-line-number="2955"></td>
        <td id="LC2955" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (h &gt;= HEIGHT) {</td>
      </tr>
      <tr>
        <td id="L2956" class="blob-num js-line-number" data-line-number="2956"></td>
        <td id="LC2956" class="blob-code blob-code-inner js-file-line">            absorb=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2957" class="blob-num js-line-number" data-line-number="2957"></td>
        <td id="LC2957" class="blob-code blob-code-inner js-file-line">            flux = <span class="pl-c1">exp</span>(-absorb*klight);</td>
      </tr>
      <tr>
        <td id="L2958" class="blob-num js-line-number" data-line-number="2958"></td>
        <td id="LC2958" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2959" class="blob-num js-line-number" data-line-number="2959"></td>
        <td id="LC2959" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L2960" class="blob-num js-line-number" data-line-number="2960"></td>
        <td id="LC2960" class="blob-code blob-code-inner js-file-line">            absorb = LAI3D[h][t_site+SBORD];                              <span class="pl-c"><span class="pl-c">//</span>calculate the absorption to which fine layers will be added</span></td>
      </tr>
      <tr>
        <td id="L2961" class="blob-num js-line-number" data-line-number="2961"></td>
        <td id="LC2961" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2962" class="blob-num js-line-number" data-line-number="2962"></td>
        <td id="LC2962" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">if</span>(h==<span class="pl-c1">0</span>) flux = <span class="pl-c1">exp</span>(-absorb*klight);</td>
      </tr>
      <tr>
        <td id="L2963" class="blob-num js-line-number" data-line-number="2963"></td>
        <td id="LC2963" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L2964" class="blob-num js-line-number" data-line-number="2964"></td>
        <td id="LC2964" class="blob-code blob-code-inner js-file-line">                <span class="pl-c"><span class="pl-c">//</span> spread out LAI over x differentlayers within voxel (assumption: leaf layer every 1/x m, uniform distribution)</span></td>
      </tr>
      <tr>
        <td id="L2965" class="blob-num js-line-number" data-line-number="2965"></td>
        <td id="LC2965" class="blob-code blob-code-inner js-file-line">                absorb_highres = (LAI3D[h-<span class="pl-c1">1</span>][t_site+SBORD]-LAI3D[h][t_site+SBORD])*inb_layers;</td>
      </tr>
      <tr>
        <td id="L2966" class="blob-num js-line-number" data-line-number="2966"></td>
        <td id="LC2966" class="blob-code blob-code-inner js-file-line">                </td>
      </tr>
      <tr>
        <td id="L2967" class="blob-num js-line-number" data-line-number="2967"></td>
        <td id="LC2967" class="blob-code blob-code-inner js-file-line">                <span class="pl-c"><span class="pl-c">//</span> PROCESS: calculate highly resolved fluxed for every layer within voxel</span></td>
      </tr>
      <tr>
        <td id="L2968" class="blob-num js-line-number" data-line-number="2968"></td>
        <td id="LC2968" class="blob-code blob-code-inner js-file-line">                <span class="pl-c"><span class="pl-c">//</span> important: multiplication of absorb with factor i corresponds to gradually increasing optical thickness (LAD)</span></td>
      </tr>
      <tr>
        <td id="L2969" class="blob-num js-line-number" data-line-number="2969"></td>
        <td id="LC2969" class="blob-code blob-code-inner js-file-line">                <span class="pl-c"><span class="pl-c">//</span> important: layers have to be added to LAI3D above</span></td>
      </tr>
      <tr>
        <td id="L2970" class="blob-num js-line-number" data-line-number="2970"></td>
        <td id="LC2970" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">for</span>(<span class="pl-k">int</span> i=<span class="pl-c1">0</span>;i&lt;nb_layers;i++){</td>
      </tr>
      <tr>
        <td id="L2971" class="blob-num js-line-number" data-line-number="2971"></td>
        <td id="LC2971" class="blob-code blob-code-inner js-file-line">                    flux_highres += <span class="pl-c1">exp</span>(-(absorb+i*absorb_highres)*klight);</td>
      </tr>
      <tr>
        <td id="L2972" class="blob-num js-line-number" data-line-number="2972"></td>
        <td id="LC2972" class="blob-code blob-code-inner js-file-line">                    VPD_highres += <span class="pl-c1">0.25</span>+<span class="pl-c1">sqrt</span>(<span class="pl-c1">maxf</span>(<span class="pl-c1">0.0</span> , <span class="pl-c1">0.08035714</span>*(<span class="pl-c1">7</span>-(absorb+i*absorb_highres))));</td>
      </tr>
      <tr>
        <td id="L2973" class="blob-num js-line-number" data-line-number="2973"></td>
        <td id="LC2973" class="blob-code blob-code-inner js-file-line">                    <span class="pl-c"><span class="pl-c">//</span> this expressions results from fit of observations of relationships between VPD and height within dense canopy (HOBO data on COPAS tower, Shuttleworth et al 1985; Camargo &amp; Kapos 1995 journal of Tropical Ecology)</span></td>
      </tr>
      <tr>
        <td id="L2974" class="blob-num js-line-number" data-line-number="2974"></td>
        <td id="LC2974" class="blob-code blob-code-inner js-file-line">                    T_highres += tmax-<span class="pl-c1">0.4285714</span>*(<span class="pl-c1">minf</span>(<span class="pl-c1">7</span>,(absorb+i*absorb_highres)));</td>
      </tr>
      <tr>
        <td id="L2975" class="blob-num js-line-number" data-line-number="2975"></td>
        <td id="LC2975" class="blob-code blob-code-inner js-file-line">                    <span class="pl-c"><span class="pl-c">//</span> 0.4285714=3/7, assuming deltaT between the top canopy and dense understorey is constant = 3°C, could be refined.</span></td>
      </tr>
      <tr>
        <td id="L2976" class="blob-num js-line-number" data-line-number="2976"></td>
        <td id="LC2976" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L2977" class="blob-num js-line-number" data-line-number="2977"></td>
        <td id="LC2977" class="blob-code blob-code-inner js-file-line">                flux = flux_highres*inb_layers;</td>
      </tr>
      <tr>
        <td id="L2978" class="blob-num js-line-number" data-line-number="2978"></td>
        <td id="LC2978" class="blob-code blob-code-inner js-file-line">                t_VPD=VPD_highres*inb_layers;</td>
      </tr>
      <tr>
        <td id="L2979" class="blob-num js-line-number" data-line-number="2979"></td>
        <td id="LC2979" class="blob-code blob-code-inner js-file-line">                t_T=T_highres*inb_layers;</td>
      </tr>
      <tr>
        <td id="L2980" class="blob-num js-line-number" data-line-number="2980"></td>
        <td id="LC2980" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L2981" class="blob-num js-line-number" data-line-number="2981"></td>
        <td id="LC2981" class="blob-code blob-code-inner js-file-line">            </td>
      </tr>
      <tr>
        <td id="L2982" class="blob-num js-line-number" data-line-number="2982"></td>
        <td id="LC2982" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L2983" class="blob-num js-line-number" data-line-number="2983"></td>
        <td id="LC2983" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L2984" class="blob-num js-line-number" data-line-number="2984"></td>
        <td id="LC2984" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L2985" class="blob-num js-line-number" data-line-number="2985"></td>
        <td id="LC2985" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">int</span> row0,col0;</td>
      </tr>
      <tr>
        <td id="L2986" class="blob-num js-line-number" data-line-number="2986"></td>
        <td id="LC2986" class="blob-code blob-code-inner js-file-line">        row0=t_site/cols;</td>
      </tr>
      <tr>
        <td id="L2987" class="blob-num js-line-number" data-line-number="2987"></td>
        <td id="LC2987" class="blob-code blob-code-inner js-file-line">        col0=t_site%cols;</td>
      </tr>
      <tr>
        <td id="L2988" class="blob-num js-line-number" data-line-number="2988"></td>
        <td id="LC2988" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span>(<span class="pl-k">int</span> col=<span class="pl-c1">max</span>(<span class="pl-c1">0</span>,col0-radius_int);col&lt;<span class="pl-c1">min</span>(cols,col0+radius_int+<span class="pl-c1">1</span>);col++) {</td>
      </tr>
      <tr>
        <td id="L2989" class="blob-num js-line-number" data-line-number="2989"></td>
        <td id="LC2989" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">for</span>(<span class="pl-k">int</span> row=<span class="pl-c1">max</span>(<span class="pl-c1">0</span>,row0-radius_int);row&lt;<span class="pl-c1">min</span>(rows,row0+radius_int+<span class="pl-c1">1</span>);row++) {                     <span class="pl-c"><span class="pl-c">//</span>loop over the tree crown</span></td>
      </tr>
      <tr>
        <td id="L2990" class="blob-num js-line-number" data-line-number="2990"></td>
        <td id="LC2990" class="blob-code blob-code-inner js-file-line">                xx=col0-col;</td>
      </tr>
      <tr>
        <td id="L2991" class="blob-num js-line-number" data-line-number="2991"></td>
        <td id="LC2991" class="blob-code blob-code-inner js-file-line">                yy=row0-row;</td>
      </tr>
      <tr>
        <td id="L2992" class="blob-num js-line-number" data-line-number="2992"></td>
        <td id="LC2992" class="blob-code blob-code-inner js-file-line">                <span class="pl-k">if</span>(xx*xx+yy*yy &lt;= radius_int*radius_int) {                                                  <span class="pl-c"><span class="pl-c">//</span>is the voxel within crown?</span></td>
      </tr>
      <tr>
        <td id="L2993" class="blob-num js-line-number" data-line-number="2993"></td>
        <td id="LC2993" class="blob-code blob-code-inner js-file-line">                    flux_highres = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L2994" class="blob-num js-line-number" data-line-number="2994"></td>
        <td id="LC2994" class="blob-code blob-code-inner js-file-line">                    VPD_highres = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L2995" class="blob-num js-line-number" data-line-number="2995"></td>
        <td id="LC2995" class="blob-code blob-code-inner js-file-line">                    T_highres = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L2996" class="blob-num js-line-number" data-line-number="2996"></td>
        <td id="LC2996" class="blob-code blob-code-inner js-file-line">                    count++;</td>
      </tr>
      <tr>
        <td id="L2997" class="blob-num js-line-number" data-line-number="2997"></td>
        <td id="LC2997" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">if</span> (h &gt;= HEIGHT) {</td>
      </tr>
      <tr>
        <td id="L2998" class="blob-num js-line-number" data-line-number="2998"></td>
        <td id="LC2998" class="blob-code blob-code-inner js-file-line">                        absorb=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2999" class="blob-num js-line-number" data-line-number="2999"></td>
        <td id="LC2999" class="blob-code blob-code-inner js-file-line">                        flux += <span class="pl-c1">exp</span>(-absorb*klight);</td>
      </tr>
      <tr>
        <td id="L3000" class="blob-num js-line-number" data-line-number="3000"></td>
        <td id="LC3000" class="blob-code blob-code-inner js-file-line">                        t_VPD+=<span class="pl-c1">0.25</span>+<span class="pl-c1">sqrt</span>(<span class="pl-c1">maxf</span>(<span class="pl-c1">0.0</span> , <span class="pl-c1">0.08035714</span>*(<span class="pl-c1">7</span>-absorb)));</td>
      </tr>
      <tr>
        <td id="L3001" class="blob-num js-line-number" data-line-number="3001"></td>
        <td id="LC3001" class="blob-code blob-code-inner js-file-line">                        t_T+=tmax-<span class="pl-c1">0.4285714</span>*(<span class="pl-c1">minf</span>(<span class="pl-c1">7</span>,absorb));</td>
      </tr>
      <tr>
        <td id="L3002" class="blob-num js-line-number" data-line-number="3002"></td>
        <td id="LC3002" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L3003" class="blob-num js-line-number" data-line-number="3003"></td>
        <td id="LC3003" class="blob-code blob-code-inner js-file-line">                    <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L3004" class="blob-num js-line-number" data-line-number="3004"></td>
        <td id="LC3004" class="blob-code blob-code-inner js-file-line">                        absorb = LAI3D[h][col+cols*row+SBORD];                              <span class="pl-c"><span class="pl-c">//</span>calculate the absorption that will need to be added to fine layers</span></td>
      </tr>
      <tr>
        <td id="L3005" class="blob-num js-line-number" data-line-number="3005"></td>
        <td id="LC3005" class="blob-code blob-code-inner js-file-line">                        </td>
      </tr>
      <tr>
        <td id="L3006" class="blob-num js-line-number" data-line-number="3006"></td>
        <td id="LC3006" class="blob-code blob-code-inner js-file-line">                        <span class="pl-k">if</span>(h==<span class="pl-c1">0</span>) flux += <span class="pl-c1">exp</span>(-absorb*klight);</td>
      </tr>
      <tr>
        <td id="L3007" class="blob-num js-line-number" data-line-number="3007"></td>
        <td id="LC3007" class="blob-code blob-code-inner js-file-line">                        <span class="pl-k">else</span>{</td>
      </tr>
      <tr>
        <td id="L3008" class="blob-num js-line-number" data-line-number="3008"></td>
        <td id="LC3008" class="blob-code blob-code-inner js-file-line">                            <span class="pl-c"><span class="pl-c">//</span> spread out LAI over x differentlayers within voxel (assumption: leaf layer every 1/x m, uniform distribution)</span></td>
      </tr>
      <tr>
        <td id="L3009" class="blob-num js-line-number" data-line-number="3009"></td>
        <td id="LC3009" class="blob-code blob-code-inner js-file-line">                            absorb_highres = (LAI3D[h-<span class="pl-c1">1</span>][col+cols*row+SBORD]-LAI3D[h][col+cols*row+SBORD])*inb_layers;</td>
      </tr>
      <tr>
        <td id="L3010" class="blob-num js-line-number" data-line-number="3010"></td>
        <td id="LC3010" class="blob-code blob-code-inner js-file-line">                            </td>
      </tr>
      <tr>
        <td id="L3011" class="blob-num js-line-number" data-line-number="3011"></td>
        <td id="LC3011" class="blob-code blob-code-inner js-file-line">                            <span class="pl-c"><span class="pl-c">//</span> PROCESS: calculate highly resolved flux for every layer within voxel</span></td>
      </tr>
      <tr>
        <td id="L3012" class="blob-num js-line-number" data-line-number="3012"></td>
        <td id="LC3012" class="blob-code blob-code-inner js-file-line">                            <span class="pl-c"><span class="pl-c">//</span> important: multiplication of absorb with factor i corresponds to gradually increasing optical thickness (LAD)</span></td>
      </tr>
      <tr>
        <td id="L3013" class="blob-num js-line-number" data-line-number="3013"></td>
        <td id="LC3013" class="blob-code blob-code-inner js-file-line">                            <span class="pl-c"><span class="pl-c">//</span> important: layers have to be added to LAI3D above (absorb)</span></td>
      </tr>
      <tr>
        <td id="L3014" class="blob-num js-line-number" data-line-number="3014"></td>
        <td id="LC3014" class="blob-code blob-code-inner js-file-line">                            <span class="pl-k">for</span>(<span class="pl-k">int</span> i=<span class="pl-c1">0</span>;i&lt;nb_layers;i++){</td>
      </tr>
      <tr>
        <td id="L3015" class="blob-num js-line-number" data-line-number="3015"></td>
        <td id="LC3015" class="blob-code blob-code-inner js-file-line">                                flux_highres += <span class="pl-c1">exp</span>(-(absorb+i*absorb_highres)*klight);</td>
      </tr>
      <tr>
        <td id="L3016" class="blob-num js-line-number" data-line-number="3016"></td>
        <td id="LC3016" class="blob-code blob-code-inner js-file-line">                                VPD_highres += <span class="pl-c1">0.25</span>+<span class="pl-c1">sqrt</span>(<span class="pl-c1">maxf</span>(<span class="pl-c1">0.0</span> , <span class="pl-c1">0.08035714</span>*(<span class="pl-c1">7</span>-(absorb+i*absorb_highres))));</td>
      </tr>
      <tr>
        <td id="L3017" class="blob-num js-line-number" data-line-number="3017"></td>
        <td id="LC3017" class="blob-code blob-code-inner js-file-line">                                T_highres += tmax-<span class="pl-c1">0.4285714</span>*(<span class="pl-c1">minf</span>(<span class="pl-c1">7</span>,(absorb+i*absorb_highres)));</td>
      </tr>
      <tr>
        <td id="L3018" class="blob-num js-line-number" data-line-number="3018"></td>
        <td id="LC3018" class="blob-code blob-code-inner js-file-line">                            }</td>
      </tr>
      <tr>
        <td id="L3019" class="blob-num js-line-number" data-line-number="3019"></td>
        <td id="LC3019" class="blob-code blob-code-inner js-file-line">                            flux_highres = flux_highres*inb_layers;</td>
      </tr>
      <tr>
        <td id="L3020" class="blob-num js-line-number" data-line-number="3020"></td>
        <td id="LC3020" class="blob-code blob-code-inner js-file-line">                            VPD_highres = VPD_highres*inb_layers;</td>
      </tr>
      <tr>
        <td id="L3021" class="blob-num js-line-number" data-line-number="3021"></td>
        <td id="LC3021" class="blob-code blob-code-inner js-file-line">                            T_highres = T_highres*inb_layers;</td>
      </tr>
      <tr>
        <td id="L3022" class="blob-num js-line-number" data-line-number="3022"></td>
        <td id="LC3022" class="blob-code blob-code-inner js-file-line">                            t_VPD+=VPD_highres;</td>
      </tr>
      <tr>
        <td id="L3023" class="blob-num js-line-number" data-line-number="3023"></td>
        <td id="LC3023" class="blob-code blob-code-inner js-file-line">                            t_T+=T_highres;</td>
      </tr>
      <tr>
        <td id="L3024" class="blob-num js-line-number" data-line-number="3024"></td>
        <td id="LC3024" class="blob-code blob-code-inner js-file-line">                            flux += flux_highres;</td>
      </tr>
      <tr>
        <td id="L3025" class="blob-num js-line-number" data-line-number="3025"></td>
        <td id="LC3025" class="blob-code blob-code-inner js-file-line">                        }</td>
      </tr>
      <tr>
        <td id="L3026" class="blob-num js-line-number" data-line-number="3026"></td>
        <td id="LC3026" class="blob-code blob-code-inner js-file-line">                        </td>
      </tr>
      <tr>
        <td id="L3027" class="blob-num js-line-number" data-line-number="3027"></td>
        <td id="LC3027" class="blob-code blob-code-inner js-file-line">                    }</td>
      </tr>
      <tr>
        <td id="L3028" class="blob-num js-line-number" data-line-number="3028"></td>
        <td id="LC3028" class="blob-code blob-code-inner js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L3029" class="blob-num js-line-number" data-line-number="3029"></td>
        <td id="LC3029" class="blob-code blob-code-inner js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L3030" class="blob-num js-line-number" data-line-number="3030"></td>
        <td id="LC3030" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L3031" class="blob-num js-line-number" data-line-number="3031"></td>
        <td id="LC3031" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L3032" class="blob-num js-line-number" data-line-number="3032"></td>
        <td id="LC3032" class="blob-code blob-code-inner js-file-line">    flux*=Wmax/<span class="pl-c1">float</span>(count);</td>
      </tr>
      <tr>
        <td id="L3033" class="blob-num js-line-number" data-line-number="3033"></td>
        <td id="LC3033" class="blob-code blob-code-inner js-file-line">    t_VPD*=VPDmax/<span class="pl-c1">float</span>(count);</td>
      </tr>
      <tr>
        <td id="L3034" class="blob-num js-line-number" data-line-number="3034"></td>
        <td id="LC3034" class="blob-code blob-code-inner js-file-line">    t_T*=<span class="pl-c1">1</span>/<span class="pl-c1">float</span>(count);</td>
      </tr>
      <tr>
        <td id="L3035" class="blob-num js-line-number" data-line-number="3035"></td>
        <td id="LC3035" class="blob-code blob-code-inner js-file-line">    </td>
      </tr>
      <tr>
        <td id="L3036" class="blob-num js-line-number" data-line-number="3036"></td>
        <td id="LC3036" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> flux;</td>
      </tr>
      <tr>
        <td id="L3037" class="blob-num js-line-number" data-line-number="3037"></td>
        <td id="LC3037" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3038" class="blob-num js-line-number" data-line-number="3038"></td>
        <td id="LC3038" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3039" class="blob-num js-line-number" data-line-number="3039"></td>
        <td id="LC3039" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L3040" class="blob-num js-line-number" data-line-number="3040"></td>
        <td id="LC3040" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3041" class="blob-num js-line-number" data-line-number="3041"></td>
        <td id="LC3041" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
</table>

  <div class="BlobToolbar position-absolute js-file-line-actions dropdown js-menu-container js-select-menu d-none" aria-hidden="true">
    <button class="btn-octicon ml-0 px-2 p-0 bg-white border border-gray-dark rounded-1 dropdown-toggle js-menu-target" id="js-file-line-action-button" type="button" aria-expanded="false" aria-haspopup="true" aria-label="Inline file action toolbar" aria-controls="inline-file-actions">
      <svg aria-hidden="true" class="octicon" height="16" version="1.1" viewBox="0 0 13 4" width="14">
        <g stroke="none" stroke-width="1" fill-rule="evenodd">
            <g transform="translate(-1.000000, -6.000000)">
                <path d="M2.5,9.5 C1.67157288,9.5 1,8.82842712 1,8 C1,7.17157288 1.67157288,6.5 2.5,6.5 C3.32842712,6.5 4,7.17157288 4,8 C4,8.82842712 3.32842712,9.5 2.5,9.5 Z M7.5,9.5 C6.67157288,9.5 6,8.82842712 6,8 C6,7.17157288 6.67157288,6.5 7.5,6.5 C8.32842712,6.5 9,7.17157288 9,8 C9,8.82842712 8.32842712,9.5 7.5,9.5 Z M12.5,9.5 C11.6715729,9.5 11,8.82842712 11,8 C11,7.17157288 11.6715729,6.5 12.5,6.5 C13.3284271,6.5 14,7.17157288 14,8 C14,8.82842712 13.3284271,9.5 12.5,9.5 Z"></path>
            </g>
        </g>
      </svg>
    </button>
    <div class="dropdown-menu-content js-menu-content" id="inline-file-actions">
      <ul class="BlobToolbar-dropdown dropdown-menu dropdown-menu-se mt-2">
        <li><a class="js-zeroclipboard dropdown-item" style="cursor:pointer;" id="js-copy-lines" data-original-text="Copy lines">Copy lines</a></li>
        <li><a class="js-zeroclipboard dropdown-item" id= "js-copy-permalink" style="cursor:pointer;" data-original-text="Copy permalink">Copy permalink</a></li>
        <li><a href="/TROLL-code/TROLL/blame/511e237066af6695f3673e1a9510f0e220acc574/main_v.2.3.cpp" class="dropdown-item js-update-url-with-hash" id="js-view-git-blame">View git blame</a></li>
          <li><a href="/TROLL-code/TROLL/issues/new" class="dropdown-item" id="js-new-issue">Open new issue</a></li>
      </ul>
    </div>
  </div>

  </div>

  </div>

  <button type="button" data-facebox="#jump-to-line" data-facebox-class="linejump" data-hotkey="l" class="d-none">Jump to Line</button>
  <div id="jump-to-line" style="display:none">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
      <input class="form-control linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
      <button type="submit" class="btn">Go</button>
</form>  </div>

  </div>
  <div class="modal-backdrop js-touch-events"></div>
</div>

    </div>
  </div>

  </div>

      
<div class="footer container-lg px-3" role="contentinfo">
  <div class="position-relative d-flex flex-justify-between py-6 mt-6 f6 text-gray border-top border-gray-light ">
    <ul class="list-style-none d-flex flex-wrap ">
      <li class="mr-3">&copy; 2017 <span title="0.52217s from unicorn-1543992990-61kzv">GitHub</span>, Inc.</li>
        <li class="mr-3"><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li class="mr-3"><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li class="mr-3"><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li class="mr-3"><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a href="https://help.github.com" data-ga-click="Footer, go to help, text:help">Help</a></li>
    </ul>

    <a href="https://github.com" aria-label="Homepage" class="footer-octicon" title="GitHub">
      <svg aria-hidden="true" class="octicon octicon-mark-github" height="24" version="1.1" viewBox="0 0 16 16" width="24"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>
    <ul class="list-style-none d-flex flex-wrap ">
        <li class="mr-3"><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact GitHub</a></li>
      <li class="mr-3"><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li class="mr-3"><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li class="mr-3"><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li class="mr-3"><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>
  </div>
</div>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <button type="button" class="flash-close js-flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
    You can't perform that action at this time.
  </div>


    
    <script crossorigin="anonymous" integrity="sha256-vSJ57uq7AsbduMXQp2YpIrVWRkBhmUW6qqpOyZv41II=" src="https://assets-cdn.github.com/assets/frameworks-bd2279eeeabb02c6ddb8c5d0a7662922b5564640619945baaaaa4ec99bf8d482.js"></script>
    
    <script async="async" crossorigin="anonymous" integrity="sha256-6GuaVo4Ex9M8qcwqgZyGLzv6H5hgeCSg7F+R5lVKCbc=" src="https://assets-cdn.github.com/assets/github-e86b9a568e04c7d33ca9cc2a819c862f3bfa1f98607824a0ec5f91e6554a09b7.js"></script>
    
    
    
    
  <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner d-none">
    <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
    <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
  </div>
  <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
  </div>
</div>


  </body>
</html>

